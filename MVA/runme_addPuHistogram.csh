#!/bin/csh

if ( ${#argv} != 2 ) then
echo "Usage: $0 sample maxnb";
exit
endif


set sample = $1
set nn = $2

root -b <<EOF
gSystem->Load("addPuHistogram_C.so")
addPuHistogram("$sample",$nn)
.qqq
EOF

