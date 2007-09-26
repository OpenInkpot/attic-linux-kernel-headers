#!/bin/sh

ARCHES="alpha amd64 arm i386 ia64 m32r m68k mips mipsel hppa powerpc ppc64 s390 sh sparc sparc64"

for arch in $ARCHES
do
  if test $arch = armeb; then
    karch=arm
  elif test $arch = mipsel; then
    karch=mips
  elif test $arch = hppa; then
    karch=parisc
  elif test $arch = amd64; then
    karch=x86_64
  else
    karch=$arch
  fi

  if test $arch = mipsel; then
    cp arch/mips/defconfig-ddb5477 .config
  else
    make ARCH=$karch defconfig
  fi

  # If you had cross compilers available, you could do this to generate
  # all necessary files (and use CROSS_COMPILE=$arch-).
#  old_headers=`find include/asm-$karch -type f | sort`
  yes n | make ARCH=$karch oldconfig
#  make ARCH=$karch prepare
#  new_headers=`find include/asm-$karch -type f | sort`
  cp include/linux/autoconf.h ../autoconf-$arch.h

#  set -- $old_headers
#  for i in $new_headers; do
#    if test "$1" = "$i"; then
#      shift
#      continue
#    fi
#    cp $i ../asm-$karch-$(basename $i)
#  done

  make ARCH=$karch clean
done
