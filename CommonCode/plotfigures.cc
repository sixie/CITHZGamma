
void setTCanvasNice(TCanvas *can0){
  
  
  can0->SetFillColor(0);
  can0->SetBorderMode(0);
  can0->SetBorderSize(2);
  can0->SetTickx(1);
  can0->SetTicky(1);
  can0->SetLeftMargin(0.17);
  can0->SetRightMargin(0.11);
  can0->SetTopMargin(0.06);
  can0->SetBottomMargin(0.13);
  can0->SetFrameFillStyle(0);
  can0->SetFrameBorderMode(0);
  can0->SetFrameFillStyle(0);
  can0->SetFrameBorderMode(0);
}

void setTCanvasNicev1(TCanvas *can0){
  
  
  can0->SetFillColor(0);
  can0->SetBorderMode(0);
  can0->SetBorderSize(2);
  can0->SetTickx(1);
  can0->SetTicky(1);
  can0->SetLeftMargin(0.17);
  can0->SetRightMargin(0.05);
  can0->SetTopMargin(0.05);
  can0->SetBottomMargin(0.13);
  can0->SetFrameFillStyle(0);
  can0->SetFrameBorderMode(0);
  can0->SetFrameFillStyle(0);
  can0->SetFrameBorderMode(0);
}


void setTLegendNice(TLegend *leg){
  leg->SetTextFont(62);
  leg->SetLineColor(1);
  leg->SetLineStyle(1);
  leg->SetLineWidth(1);
  leg->SetFillColor(0);
  leg->SetFillStyle(1001);
  leg->SetShadowColor(0);

  
}



void plot_threeHist1FGeneral_dataAndtwoMC(TH1F *hhtmp1, TH1F *hhtmp2,  TH1F *hhtmp3,const  char *xtitle, const char *ytitle,float xmin, float xmax, int logy, float ymin, float ykmax, const char *leg1Name, const char *leg2Name, char *leg3Name,char *dirName, const char *gifName , float legx1=0.55,float legy1=0.75,float legx2 = 0.9,float legy2 =0.9, int ndivx = 510,  float text_x = -1, float text_y = -1, const char *texName= "", float text_x2 = -1,float text_y2 = -1, const char *texName2= "CMS Simulation", float text_x3 = -1,float text_y3 = -1, const char *texName3= ""){
  
  
  TH1F *hh[3] = {hhtmp1, hhtmp2,hhtmp3};
  
  TCanvas *can0 = new TCanvas("can0","c000",200,10,550,500);
  can0->SetLogy(logy);

  if(xmax<0.01){
    setTCanvasNice(can0);
  }else{
    setTCanvasNicev1(can0);
  }
  
  
  float ymax = hhtmp1->GetMaximum() > hhtmp2->GetMaximum() ? hhtmp1->GetMaximum() : hhtmp2->GetMaximum();
  ymax *= ykmax; 

  hh[1]->GetYaxis()->SetRangeUser(ymin,ymax);
  hh[1]->GetXaxis()->SetRangeUser(xmin,xmax);
  hh[1]->GetXaxis()->SetTitle(xtitle);
  hh[1]->GetYaxis()->SetTitle(ytitle);
  hh[1]->SetLineWidth(2);
  hh[2]->SetLineWidth(2);
  //hh[0]->SetMarkerSize(1.5);
  hh[1]->GetXaxis()->SetNdivisions(ndivx);
  hh[1]->GetYaxis()->SetNdivisions(512);
  
  
  //hh[1]->SetLineColor(kRed);
  // hh[1]->SetMarkerColor(kRed);
  
  
  //hh[2]->SetLineColor(kBlue);
  //hh[2]->SetMarkerColor(kBlue);
  
  //hh[0]->Draw("e"); // data
    
  hh[1]->SetLineStyle(2);
  
  hh[1]->Draw("hist"); //MC
  hh[2]->Draw("histsame");
  hh[0]->Draw("esame"); // data
  
  
  //TLegend *leg1 = new TLegend(0.55,0.75,0.9,0.9,NULL,"brNDC");
  TLegend *leg1 = new TLegend(legx1,legy1,legx2,legy2,NULL,"brNDC");
  
  
  string sName = gifName; 

  if( sName.substr(0,13) == "npizRec_nclus"){
    leg1 = new TLegend(0.43,0.23,0.88,0.48,NULL,"brNDC");
  }
  if( sName.substr(0,11) == "dndeta_data"){
    leg1 = new TLegend(0.33,0.21,0.78,0.47,NULL,"brNDC");
  }
  if( sName.substr(0,15) == "dndeta_datacorr"){
    leg1 = new TLegend(0.30,0.69,0.75,0.94,NULL,"brNDC");
  }
  if( sName.substr(0,10) == "mpair_ebeb"){
    leg1 = new TLegend(0.6,0.8,0.94,0.92,NULL,"brNDC");
  }

  
  setTLegendNice(leg1); 
  
  
  leg1->AddEntry(hh[0],leg1Name,"p");
  leg1->AddEntry(hh[1],leg2Name,"l");
  leg1->AddEntry(hh[2],leg3Name,"l");
  leg1->Draw();
  


  
  if( text_x >0 && text_y >0){
    TLatex *   tex = new TLatex(text_x, text_y, texName);
    tex->SetNDC();
    tex->SetTextSize(0.038);
    tex->Draw();
  }
  
  
  
  if( text_x2 >0 && text_y2 >0){
    TLatex *   tex = new TLatex(text_x2, text_y2, texName2);
    tex->SetNDC();
    tex->SetTextSize(0.038);
    ///tex->SetLineWidth(2);
    tex->Draw();
  }
  
  if( text_x3 >0 && text_y3 >0){
    TLatex *   tex = new TLatex(text_x3, text_y3, texName3);
    tex->SetNDC();
    tex->SetTextSize(0.038);
    tex->Draw();
  }
  
  
  string histName = string(Form("%s/%s.pdf",dirName,gifName));
  can0->Print(histName.c_str());
  histName = string(Form("%s/%s.C",dirName,gifName));
  can0->Print(histName.c_str());
  
}


void print1Fhistogram(TH1F *hhtmp,const char *xtitle,const char *ytitle,int setgrid,float xmin, float xmax, int logy, float ymin, float ymax, char *dirName, const char *gifName , float text_x, float text_y, const char *texName){

  
   TCanvas *can0 = new TCanvas("can0","c000",200,10,550,500);
   setTCanvasNice(can0);
   
   can0->SetLogy(logy);
   
   if(setgrid>=1){
     can0->SetGridx(setgrid);
     can0->SetGridy(setgrid);
   }
   
  hhtmp->GetXaxis()->SetTitle(xtitle);
  hhtmp->GetXaxis()->SetRangeUser(xmin,xmax);
  hhtmp->GetYaxis()->SetRangeUser(ymin,ymax);
  hhtmp->GetYaxis()->SetTitle(ytitle);
  hhtmp->Draw();
  
  if( text_x >0 && text_y >0){
    TLatex *   tex = new TLatex(text_x, text_y, texName);
    tex->SetNDC();
    tex->SetTextSize(0.04);
    tex->Draw();
  }
  
  string histName = string(Form("%s/%s.pdf",dirName,gifName));
  can0->Print(histName.c_str());
  histName = string(Form("%s/%s.C",dirName,gifName));
  can0->Print(histName.c_str());
  
}
