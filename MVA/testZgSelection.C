#include "../CommonCode/rootheader.h"
#include "../CommonCode/roofitheader.h"

#include "../CommonCode/commonVariables.h"
#include "zgvariables.h"

#include "setbranches.cc"

#include "../CommonCode/roodatasetth1.cc"

#include "../CommonCode/utils.cc"
#include "../CommonCode/physUtils.cc"


void testZgSelection(string sample= "s12-zllm50-v7a", int eleOrmu =1){
  
  TString filename;
  
  fChain = new TChain("h2LepPhotonTree");
  
  int isdata = 1; 

  if( sample == "del"){
    fChain->Add("Trees/AllNtuple_*del*root");
  }
  else if( sample == "dmu"){
    fChain->Add("Trees/AllNtuple_*dmu*root");
  }else {
    isdata = 0; 

    TString file = TString(Form("Trees/AllNtuple_%s_noskim_0*root",sample.c_str()));
    fChain->Add(file);
  }
  
  cout<<"ntrees " << fChain->GetNtrees()<<endl; 
  
  
  vector<double> weights_pileup; 
  
  if(sample.find("s12") != string::npos){
    TFile *fdata = new TFile("/afs/cern.ch/work/y/yangyong/public/Pileup/PileupTarget_HCPDatasetForHZZ4l.obs.69400.root","read");
    TH1F *hhdata = (TH1F*)fdata->Get("pileup");
    filename = TString("/afs/cern.ch/work/y/yangyong/public/Pileup/Pileup") + TString(Form("%s.root",sample.c_str()));
    TFile *fmc = new TFile(filename,"read");
    TH1D *hhmc = (TH1D*)fmc->Get("pileup");
    
    cout<<"got pileup hist " << hhdata->Integral()<<" "<< hhmc->Integral() <<endl; 
    
    int nbins = hhdata->GetNbinsX();
    for(int b=1; b<= nbins; b++){
      double wt = 0; 
      if( hhmc->GetBinContent(b) >0){
	wt = hhdata->GetBinContent(b) / hhmc->GetBinContent(b);
      }
      weights_pileup.push_back(wt);
      if(b<100) cout<<"pileupwt " << b-1 <<" "<< wt <<endl; 
    }
    
    fdata->Close();
    fmc->Close();
    
  }
  
  

  setBranchAddress();
  
  
  int totalEntries = fChain->GetEntries();
  
  cout<<" totalEntries " << totalEntries <<endl; 
  
  filename = TString(Form("testZgSelection_%s_elemu%d.root",sample.c_str(),eleOrmu));
  TFile *fnew = new TFile(filename,"recreate");
  
  TTree *mytree =new TTree("Analysis","llg tree");
  
//   float mindrlg; 
//   float maxdrlg; 
//   float deltaphill; 
//   float deltaphizg;
//   float deltaetall; 
//   float deltaetazg;
  

//   float mll; 
//   float ptl1; 
//   float ptl2; 
//   float ptg; 
//   float sigmaMoM; 
//   float sigmaEoEg; 
//   float sigmaEoEl1; 
//   float sigmaEoEl2; 
//   float etal1; 
//   float etal2; 
//   float etag; 
//   float phil1; 
//   float phil2; 
//   float phig; 
  
//   float weight; 
  
  
  mytree->Branch("event",&event,"event/i");
  
  mytree->Branch("mllg",&mllg,"mllg/F");
  mytree->Branch("mll",&mll,"mll/F");
  mytree->Branch("mindrlg",&mindrlg,"mindrlg/F");
  mytree->Branch("maxdrlg",&maxdrlg,"maxdrlg/F");
  mytree->Branch("ptl1",&ptl1,"ptl1/F");
  mytree->Branch("ptl2",&ptl2,"ptl2/F");
  mytree->Branch("ptg",&ptg,"ptg/F");
  
  
  mytree->Branch("etal1",&etal1,"etal1/F");
  mytree->Branch("etal2",&etal2,"etal2/F");

  mytree->Branch("phil1",&phil1,"phil1/F");
  mytree->Branch("phil2",&phil2,"phil2/F");

  mytree->Branch("etag",&etag,"etag/F");
  mytree->Branch("phig",&phig,"phig/F");
  
  
  mytree->Branch("sigmaMoM",&sigmaMoM,"sigmaMoM/F");
  mytree->Branch("sigmaEoEg",&sigmaEoEg,"sigmaEoEg/F");
  mytree->Branch("sigmaEoEl1",&sigmaEoEl1,"sigmaEoEl1/F");
  mytree->Branch("sigmaEoEl2",&sigmaEoEl2,"sigmaEoEl2/F");
    
  mytree->Branch("deltaphill",&deltaphill,"deltaphill/F");
  mytree->Branch("deltaphizg",&deltaphizg,"deltaphizg/F");

  mytree->Branch("deltaetall",&deltaetall,"deltaetall/F");
  mytree->Branch("deltaetazg",&deltaetazg,"deltaetazg/F");

  
  mytree->Branch("ptll",&ptll,"ptll/F");
  mytree->Branch("ptllg",&ptllg,"ptllg/F");
  mytree->Branch("etall",&etall,"etall/F");
  mytree->Branch("etallg",&etallg,"etallg/F");
  
  
  mytree->Branch("weight",&weight,"weight/D");
  
  
  makeTH1F("mindrlg",600,0,6);
  makeTH1F("mll",500,0,500);
  makeTH1F("mllg",500,0,500);
  
  
  makeTH1F("ptl1",100,0,200);
  makeTH1F("ptl2",100,0,200);
  makeTH1F("ptg",100,0,200);
  makeTH1F("ptgeb",100,0,200);
  makeTH1F("ptgee",100,0,200);
  
  
  makeTH1F("ptgfsr",100,0,200);
  makeTH1F("ptgfsreb",100,0,200);
  makeTH1F("ptgfsree",100,0,200);
  
  
  makeTH1F("ptl1overm",200,0,2);
  makeTH1F("ptl2overm",200,0,2);
  makeTH1F("ptgoverm",200,0,2);

  makeTH1F("deltaphill",200,0,6);
  makeTH1F("deltaphizg",200,0,6);
  
  
  makeTH1F("sigmaMoM",200,0,1);
  
  float res[10];
  float en[3];
  float eta[3];
  float phi[3];
  float pt[3];
  

  int pidl = 11; 
  if( eleOrmu==2) pidl = 13; 
  
  
  //totalEntries = 100000;
  
  //etag -1.73 and -1.8
  // phig: 1.365 and 1.385


  for(int entry=0; entry< totalEntries ; entry++){
    fChain->GetEntry(entry);
    
    if(entry%100000==0) cout<<"entry " << entry <<endl; 
    
    
    if( photonenergy<0) continue; 
    

    if(eleOrmu==1){
      if( ele1energy <0 || ele2energy <0) continue; 
    }else if(eleOrmu==2){
      if( m1E <0 || m2E <0) continue; 
    }
    
    
    if(isdata){
      if(photonphi >1.365 && photonphi< 1.385 && photoneta>-1.8 && photoneta<-1.73) continue; 
    }
    
    
    float e1= -1; 
    float e2 = -1; 
    float pt1 = -1; 
    float pt2 = -1; 
    
    float eta1 = -1; 
    float eta2 = -1; 
    float phi1 = -1; 
    float phi2 = -1; 
    
    float e1E = -1; 
    float e2E = -1; 
    
    
    if(eleOrmu==1){
      e1 = ele1RegressionEnergyV1;
      eta1 = ele1eta; 
      phi1 = ele1phi;
      e2 = ele2RegressionEnergyV1;
      eta2 = ele2eta; 
      phi2 = ele2phi;
      
      e1E = ele1RegressionEnergyErrorV1; 
      e1E = ele1RegressionEnergyErrorV2; 
      
      pt1 = e1/ cosh(eta1); 
      pt2 = e2/ cosh(eta2); 
      
    }else{
      e1 = m1E; 
      eta1 = m1Eta;
      phi1 = m1Phi;
      e2 = m2E; 
      eta2 = m2Eta;
      phi2 = m2Phi;
      
      pt1 = m1Pt;
      pt2 = m2Pt;
            
      e1E = m1PtErr * m1E/m1Pt; 
      e2E = m2PtErr * m2E/m2Pt; 
      
    }
    
    en[0] = e1;
    en[1] = e2;
    pt[0] = pt1;
    pt[1] = pt2;
    en[2] = photonenergy;
    eta[0] = eta1;
    eta[1] = eta2;
    eta[2] = photoneta; 
    phi[0] = phi1;
    phi[1] = phi2;
    phi[2] = photonphi; 
    
    calcMass3ObjectsEn(en,eta,phi,pidl,pidl,22,res);
    mllg = res[0];
    ptllg = res[3];
    etallg = res[1];
    
    
    calcPairEnEtaPhi(en,eta,phi,pidl,pidl,res);
    mll = res[0];
    float etaz = res[1];
    float phiz = res[2];
    ptll = res[3];
    etall = res[1];
    
    
    fillTH1F("deltaphill",deltaphill,weight);
    fillTH1F("deltaphizg",deltaphizg,weight);
    
    
    int indlead = pt1 > pt2 ? 0: 1; 
    int indsublead = 1-indlead; 
    
    ptl1 = pt[indlead];
    ptl2 = pt[indsublead];
    ptg = photonenergy/ cosh(photoneta);
    phil1 = phi[indlead];
    phil2 = phi[indsublead];
    phig = photonphi; 
    

    float drl1g = GetDeltaR(eta1, photoneta, phi1, photonphi);
    float drl2g = GetDeltaR(eta2, photoneta, phi2, photonphi);
    
    
    mindrlg = drl1g < drl2g ? drl1g : drl2g; 
    maxdrlg = drl1g > drl2g ? drl1g : drl2g; 
    
    
    weight = 1; 
    if(run==1){ //MC
      weight =int(NPu) < int(weights_pileup.size()) ?  weights_pileup[int(NPu)]:0;
    }
    
    
    fillTH1F("mindrlg",mindrlg,weight);
    fillTH1F("mll",mll,weight);
    fillTH1F("mllg",mllg,weight);

    fillTH1F("ptl1",ptl1,weight);
    fillTH1F("ptl2",ptl2,weight);
    fillTH1F("ptg",ptg,weight);
    
    fillTH1F("ptl1overm",ptl1/mllg,weight);
    fillTH1F("ptl2overm",ptl2/mllg,weight);
    fillTH1F("ptgoverm",ptg/mllg,weight);

    if( fabs(photoneta)<1.5){
      fillTH1F("ptgeb",ptg,weight);
    }else{
      fillTH1F("ptgee",ptg,weight);
    }
    
    if(mllg>80 && mllg<100){
      fillTH1F("ptgfsr",ptg,weight);
      if( fabs(photoneta)<1.5){
	fillTH1F("ptgfsreb",ptg,weight);
      }else{
	fillTH1F("ptgfsree",ptg,weight);
      }
    }
    
    
    float costheta12 = getcosd(eta1,phi1,eta2,phi2);
    float costheta13 = getcosd(eta1,phi1,photoneta,photonphi);
    float costheta23 = getcosd(eta2,phi2,photoneta,photonphi);
    
    
    sigmaEoEg = photonenergyerror / photonenergy; 
    sigmaEoEl1 = pt1 > pt2 ?  e1E/e1 :  e2E/e2 ;
    sigmaEoEl2 = pt1 < pt2 ?  e1E/e1 :  e2E/e2 ;
    
    float sigmaM = calcSigmaMllg(mllg, e1, e1E,
				 e2, e2E,
				 photonenergy, photonenergyerror,
				 costheta12,
				 costheta13,
				 costheta23);
    
    fillTH1F("sigmaMoM",sigmaM/mllg,weight);
    sigmaMoM = sigmaM/mllg; 
    etal1 = eta[indlead];
    etal2 = eta[indsublead];
    etag = photoneta; 
    
    
    deltaphill = DeltaPhi(phil1,phil2);
    deltaphizg = DeltaPhi(phiz,photonphi);
    deltaetall = etal1 - etal2; 
    deltaetazg = etaz - photoneta; 
    

 
    mytree->Fill();
        
    
    
  }
  
  
  
  mytree->Write();
  fnew->Write();
  fnew->Close();

  
}
