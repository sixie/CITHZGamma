#!/bin/csh

if ( ${#argv} != 2 ) then
echo "Usage: $0 sample eleOrMu";
exit
endif

set sample = $1
set elmu = $2

set workdir = /afs/cern.ch/work/y/yangyong/CMSSW/CMSSW_5_2_4/src/CITHZGamma/MVA

root -b <<EOF
gSystem->Load("$workdir/doZgSelection_C.so");
doZgSelection("$sample",$elmu)
.qqq
EOF

echo "done "

cp doZgSelection*root $workdir/ressel

echo "cp done "

