#!/bin/sh 

set -e

#command --upstream-version version filename

[ $# -eq 3 ] || exit 255

version="$2"
filename="$3"
dfsgfilename=`echo $3 | sed 's,\.orig\.,.dfsg.orig.,'`

tar xfz ${filename} 

dir=`tar tfz ${filename} | head -1 | sed 's,/.*,,g'`
rm -f ${filename}

rm -f ${dir}/Tachometer.c
mv ${dir} ${dir}.dfsg.orig

tar cf - ${dir}.dfsg.orig | gzip -9 > ${dfsgfilename}

echo "${dfsgfilename} created."


