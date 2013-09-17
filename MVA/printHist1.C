#include "../CommonCode/rootheader.h"
#include "../../CITHZZ/LeptonScaleAndResolution/Electrons/plotfigures.cc"


void printHist1(){
  
  
  TFile *f1 = new TFile("plot_dmu_elemu2.root","read");

  TFile *f2 = new TFile("plot_s12-zllm50-v7a_elemu2.root","read");

  TFile *f3 = new TFile("plot_s12-zgllg-v7a_elemu2.root","read");
  
  
  TH1F *h1 = (TH1F*)f1->Get("th1f_hzgmva");
  TH1F *h1a = (TH1F*)f1->Get("th1f_hzgmva_mllg80to100");
  TH1F *h1b = (TH1F*)f1->Get("th1f_hzgmva_mllg100to150");
  TH1F *h1c = (TH1F*)f1->Get("th1f_mllg");
  
  TH1F *h2 = (TH1F*)f2->Get("th1f_hzgmva");
  TH1F *h2a = (TH1F*)f2->Get("th1f_hzgmva_mllg80to100");
  TH1F *h2b = (TH1F*)f2->Get("th1f_hzgmva_mllg100to150");
  TH1F *h2c = (TH1F*)f2->Get("th1f_mllgf");

  TH1F *h3c = (TH1F*)f3->Get("th1f_mllg");
  

  float lum = 12000; 
  
  h2->Scale(lum);
  h2a->Scale(lum);
  h2b->Scale(lum);
  h2c->Scale(lum);

  h3c->Scale(lum);
  
  //  plot_stack_two(TH1F *hhtmp1, TH1F *hhtmp2, TH1F *hhtmp3, int flagUnit, char *xtitle ,
  //char *leg1Name,char *leg2Name,char *leg3Name,
  //int logy, float ymin, float ymax, int xstart, int xend, char *dirName, const char *gifName){
  
  setTH1BinErorZero(h2c);
  setTH1BinErorZero(h3c);

  plot_stack_two(h2c,h3c,h1c,3,"m_{ll#gamma} (GeV)","Z+jet","Z+#gamma","Data",0,0,10000,80,150,"plots","th1f_mllg");
  

  return; 
  plot_twoHist1FGeneral(h1c,h2c,"m_{ll#gamma} (GeV)","Events",80,150,0,0,1.2,"Data","MC","plots","th1f_mllg");
  
  

  return; 
  
  
  plot_twoHist1FGeneral(h1,h2,"MVA output","a.u.",-1,1,0,0,1.2,"Data","MC","plots","th1f_hzgmva");

  plot_twoHist1FGeneral(h1a,h2a,"MVA output","a.u.",-1,1,0,0,1.2,"MC","Data","plots","th1f_hzgmva_mllg80to100");
  
  plot_twoHist1FGeneral(h1b,h2b,"MVA output","a.u.",-1,1,0,0,1.2,"MC","Data","plots","th1f_hzgmva_mllg100to150");
  
  
  return;
  
  
}
