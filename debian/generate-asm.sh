#!/bin/sh -e

# Idea borrowed from RedHat's kernel package

arch="$1"
dir_in="$2"
dir_out="$3"

if [ ! -d "$dir_in" ]; then
	echo "$dir_in" does not exist, or is not a directory
	exit 1
fi

case "$arch" in
	powerpc)
		define_biarch="__powerpc64__"
		kernel_arch="ppc"
		kernel_arch_biarch="ppc64"
		;;
	sparc)
		define_biarch="__arch64__"
		kernel_arch="sparc"
		kernel_arch_biarch="sparc64"
		;;
	*)
		echo Invalid architeture >&2
		exit 1
esac

asm_dir="asm-$kernel_arch"
asm_dir_biarch="asm-$kernel_arch_biarch"

if [ ! -d "$dir_in/$asm_dir" ] || [ ! -d "$dir_in/$asm_dir_biarch" ] ; then
	echo E: $asm_dir and $asm_dir_biarch must exist, or you will have problems
	exit 1
fi

mkdir -p $dir_out/asm
cp -a $dir_in/$asm_dir $dir_out/$asm_dir
cp -a $dir_in/$asm_dir_biarch $dir_out/$asm_dir_biarch

dirs=$((( cd "$dir_in/$asm_dir"; find . -type d ); ( cd "$dir_in/$asm_dir_biarch"; find . -type d )) | sort -u )
files=$((( cd "$dir_in/$asm_dir"; find . -name "*.h" -type f ); ( cd "$dir_in/$asm_dir_biarch"; find . -name "*.h" -type f )) | sed 's/^.\///g' | sort -u )

for h in $dirs; do
	mkdir -p "$dir_out/asm/$h"
done

for h in $files; do
	name=$(echo $h | tr a-z. A-Z_)
	file_out="$dir_out/asm/$h"
	# common header
	cat > $file_out << EOF
/* All asm/ files are generated and point to the corresponding
 * file in $asm_dir or $asm_dir_biarch.
 */

EOF

	# common for sparc and sparc64
	if [ -f $dir_in/$asm_dir/$h ] && [ -f $dir_in/$asm_dir_biarch/$h ]; then
		cat >> $file_out <<EOF
#ifdef $define_biarch
# include <$asm_dir_biarch/$h>
#else
# include <$asm_dir/$h>
#endif
EOF

	elif [ -f $dir_in/$asm_dir/$h ]; then
		cat >> $file_out <<EOF
#ifdef $define_biarch
# error This header is not available for $kernel_arch_biarch
#else
# include <$asm_dir/$h>
#endif
EOF
	else
		cat >> $file_out <<EOF
#ifdef $define_biarch
# include <$asm_dir_biarch/$h>
#else
# error This header is not available for $kernel_arch
#endif
EOF
	fi

done
