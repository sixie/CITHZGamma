#include "../CommonCode/rootheader.h"
#include "../../CITHZZ/LeptonScaleAndResolution/Electrons/plotfigures.cc"


void printHist(){
  
  
  TFile *f1 = new TFile("testZgSelection_s12-h125zg-gf-v7a_elemu2.root","read");
  
  TFile *f2 = new TFile("testZgSelection_s12-zgllg-v7a_elemu2.root","read");

  TH1F *h1 = (TH1F*)f1->Get("th1f_ptgeb");
  TH1F *h2 = (TH1F*)f1->Get("th1f_ptgee");
  
  TH1F *h3 = (TH1F*)f2->Get("th1f_ptgfsreb");
  TH1F *h4 = (TH1F*)f2->Get("th1f_ptgfsree");
  
  float n1 = h1->Integral();
  float n2 = h2->Integral();
  float n3 = h3->Integral();
  float n4 = h4->Integral();
  
  h1->Scale(1.0/n1);
  h2->Scale(1.0/n2);
  h3->Scale(1.0/n3);
  h4->Scale(1.0/n4);
  
  plot_twoHist1FGeneral(h1,h3,"p^{#gamma}_{T} (GeV)","a.u.",10,80,0,0,1.2,"ggH125#rightarrowZ#gamma","Z#gamma (FSR)","plots","th1f_pteb_gghfsr",0.25,0.8,"|#eta|<1.5");
  plot_twoHist1FGeneral(h2,h4,"p^{#gamma}_{T} (GeV)","a.u.",10,80,0,0,1.2,"ggH125#rightarrowZ#gamma","Z#gamma (FSR)","plots","th1f_ptee_gghfsr",0.25,0.8,"1.5<|#eta|<2.5");
  
  
}
