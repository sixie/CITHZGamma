#!/bin/csh

if ( ${#argv} != 3 ) then
echo "Usage: $0 filelist eleOrMu runLocally";
exit
endif

set workDir = /afs/cern.ch/work/y/yangyong/CMSSW/CMSSW_5_2_4/src/CITHZGamma/MVA

set filelist = $1
set elmu = $2
set runLocal = $3

foreach file (`cat $filelist`)
echo $file
set dataname = `echo $file |sed s/","/" "/g |gawk '{print $1}'`
set njob = `echo $file |sed s/","/" "/g |gawk '{print $2}'`

set skip = `echo $file |grep \# |wc |gawk '{print $1}'`
if( $skip > 0) then
continue
endif

set output = ressel/doZgSelection_${dataname}_elemu$elmu.root
if(-e $output) then
echo "done already $output"
continue
endif

if( $runLocal == 1) then
csh runme_doZgSelection.csh $dataname $elmu
else
bsub -q cmscaf1nh -o $workDir/logs/$dataname/job.out -J test runme_doZgSelection.csh $dataname $elmu
endif

end



