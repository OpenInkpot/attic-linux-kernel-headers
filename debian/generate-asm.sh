#!/bin/sh -e

# Idea borrowed from RedHat's kernel package

arch="$1"
dir_in="$2"
dir_out="$3"
autoconf_in="$4"

if [ ! -d "$dir_in" ] || [ ! -d "$autoconf_in" ]; then
	echo "$dir_in" or "$autoconf_in" does not exist, or is not a directory
	exit 1
fi

case "$arch" in
	amd64)
		define_biarch="#ifdef __i386__"
		kernel_arch="x86_64"
		kernel_arch_biarch="i386"
		;;
	i386)
		define_biarch="#ifdef __x86_64__"
		kernel_arch="i386"
		kernel_arch_biarch="x86_64"
		arch_biarch="amd64"
		asm_dir_out="asm-i486"
		;;
	sparc)
		define_biarch="#ifdef __arch64__"
		kernel_arch="sparc"
		kernel_arch_biarch="sparc64"
		;;
	*)
		echo Invalid architeture >&2
		exit 1
esac

[ -z "$arch_biarch" ] && arch_biarch="$kernel_arch_biarch"

asm_dir="asm-$kernel_arch"
asm_dir_biarch="asm-$kernel_arch_biarch"

# The directory to create in /usr/include.  This ought to be the same as
# asm_dir in all cases, but is temporarily different on i386, so that we
# can avoid conflicting between amd64-libs-dev and linux-kernel-headers
# while headers transition from that package to this one.
[ -z "$asm_dir_out" ] && asm_dir_out="$asm_dir"

if [ ! -d "$dir_in/$asm_dir" ] || [ ! -d "$dir_in/$asm_dir_biarch" ] ; then
	echo E: $asm_dir and $asm_dir_biarch must exist, or you will have problems
	exit 1
fi

mkdir -p $dir_out/asm
cp -a $dir_in/$asm_dir $dir_out/$asm_dir_out
cp -a $dir_in/$asm_dir_biarch $dir_out/$asm_dir_biarch

dirs=$( (( cd "$dir_in/$asm_dir"; find . -type d ); ( cd "$dir_in/$asm_dir_biarch"; find . -type d )) | sort -u )
files=$( (( cd "$dir_in/$asm_dir"; find . -name "*.h" -type f ); ( cd "$dir_in/$asm_dir_biarch"; find . -name "*.h" -type f )) | sed 's/^.\///g' | sort -u )

for h in $dirs; do
	mkdir -p "$dir_out/asm/$h"
done

for h in $files; do
	name=$(echo $h | tr a-z. A-Z_)
	file_out="$dir_out/asm/$h"
	# common header
	cat > $file_out << EOF
/* All asm/ files are generated and point to the corresponding
 * file in $asm_dir_out or $asm_dir_biarch.
 */

EOF

	# common for sparc and sparc64
	if [ -f $dir_in/$asm_dir/$h ] && [ -f $dir_in/$asm_dir_biarch/$h ]; then
		cat >> $file_out <<EOF
$define_biarch
# include <$asm_dir_biarch/$h>
#else
# include <$asm_dir_out/$h>
#endif
EOF

	elif [ -f $dir_in/$asm_dir/$h ]; then
		cat >> $file_out <<EOF
$define_biarch
# error This header is not available for $kernel_arch_biarch
#else
# include <$asm_dir_out/$h>
#endif
EOF
	else
		cat >> $file_out <<EOF
$define_biarch
# include <$asm_dir_biarch/$h>
#else
# error This header is not available for $kernel_arch
#endif
EOF
	fi

done


if [ -f $dir_out/$asm_dir_out/autoconf.h ] || [ -f $dir_out/$asm_dir_biarch/autoconf.h ]; then
	echo E: $asm_dir_out or $asm_dir_biarch already have autoconf.h.
	exit 1
fi

cp "$autoconf_in"/autoconf-"$arch".h $dir_out/$asm_dir_out/autoconf.h
cp "$autoconf_in"/autoconf-"$arch_biarch".h $dir_out/$asm_dir_biarch/autoconf.h

file_out="$dir_out/linux/autoconf.h"
h=autoconf.h
cat > $file_out <<EOF
/* linux/autoconf.h is generated and point to the corresponding
 * file in $asm_dir_out or $asm_dir_biarch.
 */

$define_biarch
# include <$asm_dir_biarch/$h>
#else
# include <$asm_dir_out/$h>
#endif
EOF
