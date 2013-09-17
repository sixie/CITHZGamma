#!/bin/csh


if ( ${#argv} != 1 ) then
echo "Usage: $0 filelist"
exit
endif

set filelist = $1

foreach file (`cat $filelist`)
echo $file
set dataname = `echo $file |sed s/","/" "/g |gawk '{print $1}'`
set njob = `echo $file |sed s/","/" "/g |gawk '{print $2}'`

set skip = `echo $file |grep \# |wc |gawk '{print $1}'`
if( $skip > 0) then
continue
endif

csh runme_addPuHistogram.csh $dataname $njob

#exit

end
