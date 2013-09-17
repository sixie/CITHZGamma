#include "/afs/cern.ch/user/y/yangyong/rootheader.h"

void addPuHistogram(string sample= "s12-zllm50-v7a",int test_evtRangeMax=1){

  TString filename = TString("Pileup") + TString(Form("%s.root",sample.c_str()));
  
  cout<<filename<<endl;
  TFile *fnew = new TFile(filename,"recreate");
  
  TH1D *hh_npileupbx0 = new TH1D("pileup","hh_npileupintime",201,-0.5,200.5);
  
  TH1D *hDEvents = new TH1D("hDEvents","",1,-0.5,0.5);
  

  for(int r=0 ; r<=  test_evtRangeMax; r++){
    string ss = string(Form("00%d",r));
    if(r<10) ss = string(Form("000%d",r));
    else if(r<100){
      ss = string(Form("00%d",r));
    }else{
      ss = string(Form("0%d",r));
    }
    
    filename = TString(Form("Trees/AllNtuple_%s_noskim_%s.root",sample.c_str(),ss.c_str()));
    
    TString checkfile = TString("ls ") + filename; 
    if( gSystem->Exec(checkfile) !=0) continue; 
    
    TFile *fpumc = new TFile(filename,"read");
    TH1D *hhtmp = (TH1D*)fpumc->Get("hNPU");
    hh_npileupbx0 ->Add( hhtmp);

    TH1D *hhtmp1 = (TH1D*)fpumc->Get("hDEvents");
    hDEvents->Add(hhtmp1);
    
    
    fpumc->Close();
    
    
  }
  
  double total = hh_npileupbx0->Integral();
  
  cout<<"total " << total<<endl; 
  hh_npileupbx0->Scale(1.0/total);
    
  
  fnew->Write();
  fnew->Close();
  
  
}
