#include "../CommonCode/rootheader.h"
#include "../CommonCode/roofitheader.h"

#include "../CommonCode/commonVariables.h"
#include "zgvariables.h"

#include "../CommonCode/roodatasetth1.cc"

void plot(string sample= "s12-zllm50-v7a", int eleOrmu =1){
  
  fChain = new TChain("Analysis");
  TString filename;
  
  
  
  filename= TString(Form("ressel/doZgSelection_%s_elemu%d.root",sample.c_str(),eleOrmu));
  fChain->Add(filename);
  
  
  fChain->SetBranchAddress("event", &event);
  fChain->SetBranchAddress("mllg", &mllg);
  fChain->SetBranchAddress("mll", &mll);
  fChain->SetBranchAddress("mindrlg", &mindrlg);
  fChain->SetBranchAddress("maxdrlg", &maxdrlg);
  fChain->SetBranchAddress("ptl1", &ptl1);
  fChain->SetBranchAddress("ptl2", &ptl2);
  fChain->SetBranchAddress("ptg", &ptg);
  fChain->SetBranchAddress("etal1", &etal1);
  fChain->SetBranchAddress("etal2", &etal2);
  fChain->SetBranchAddress("phil1", &phil1);
  fChain->SetBranchAddress("phil2", &phil2);
  fChain->SetBranchAddress("etag", &etag);
  fChain->SetBranchAddress("phig", &phig);
  fChain->SetBranchAddress("sigmaMoM", &sigmaMoM);
  fChain->SetBranchAddress("sigmaEoEg", &sigmaEoEg);
  fChain->SetBranchAddress("sigmaEoEl1", &sigmaEoEl1);
  fChain->SetBranchAddress("sigmaEoEl2", &sigmaEoEl2);
  fChain->SetBranchAddress("deltaphill", &deltaphill);
  fChain->SetBranchAddress("deltaphizg", &deltaphizg);
  fChain->SetBranchAddress("deltaetall", &deltaetall);
  fChain->SetBranchAddress("deltaetazg", &deltaetazg);
  fChain->SetBranchAddress("weight", &weight);
  fChain->SetBranchAddress("hzgmva", &hzgmva);
  fChain->SetBranchAddress("photonmatchmc", &photonmatchmc);


  
  int totalEntries = fChain->GetEntries();
  
  cout<<" totalEntries " << totalEntries <<endl; 
  
  filename = TString(Form("plot_%s_elemu%d.root",sample.c_str(),eleOrmu));
  TFile *fnew = new TFile(filename,"recreate");
  
  
  makeTH1F("hzgmva_mllg100to150",100,-1,1);
  makeTH1F("hzgmva_mllg80to100",100,-1,1);
  makeTH1F("hzgmva",100,-1,1);
  
  makeTH1F("mllg",100,0,200);
  makeTH1F("mllgr",100,0,200);
  makeTH1F("mllgf",100,0,200);
  
  
  for(int entry=0; entry< totalEntries ; entry++){
    fChain->GetEntry(entry);
    
    if(entry%100000==0) cout<<"entry " << entry <<endl; 
    
    fillTH1F("mllg",mllg,weight);
    if(photonmatchmc==1){
      fillTH1F("mllgr",mllg,weight);
    }else{
      fillTH1F("mllgf",mllg,weight);
    }
    
    fillTH1F("hzgmva",hzgmva,weight);
    if(mllg>100 && mllg<150){
      fillTH1F("hzgmva_mllg100to150",hzgmva,weight);
    }
    if(mllg>80 && mllg<100){
      fillTH1F("hzgmva_mllg80to100",hzgmva,weight);
    }
    
  }
  
  
  fnew->Write();
  fnew->Close();
 

}
