TMVA::Reader *reader ;


void loadMVAWeightFile(){
  
  ///afs/cern.ch/work/y/yangyong/CMSSW/CMSSW_5_2_4/src/CITHZGamma/MVA
  
  
  reader = new TMVA::Reader( "!Color:!Silent" );    
  
  //reader->AddVariable("mindrlg", &mindrlg);
  //reader->AddVariable("ptl1/mllg", &ptl1R);
  //reader->AddVariable("ptl2/mllg", &ptl2R);
  //reader->AddVariable("ptg", &ptg);
  reader->AddVariable("etal1", &etal1);
  reader->AddVariable("etal2", &etal2);
  reader->AddVariable("etag", &etag);

  reader->AddVariable("ptll", &ptll);
  reader->AddVariable("ptllg", &ptllg);
  
  reader->AddVariable("sigmaMoM", &sigmaMoM);
  //reader->AddVariable("deltaphill",&deltaphill);
  //reader->AddVariable("deltaphizg",&deltaphizg);
  
  
  TString dir    = "/afs/cern.ch/work/y/yangyong/CMSSW/CMSSW_5_2_4/src/CITHZGamma/MVA/weights/";
  TString prefix = "TMVAClassification";
  
  TString weightfile = dir + prefix + TString("_") + TString("BDTG") + TString(".weights_v1.xml");
  TString methodName = "BDTG";
  
  reader->BookMVA( methodName, weightfile ); 
  
  
}


float getHZGEventMVA(){
  
  ptl1R = ptl1/mllg; 
  ptl2R = ptl2/mllg; 
  ptgR = ptg/mllg; 
  
  return reader->EvaluateMVA("BDTG");
  
}
