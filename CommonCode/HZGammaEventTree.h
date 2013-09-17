#ifndef HZGammaEventTree_H
#define HZGammaEventTree_H

#include "TFile.h"
#include "TTree.h"
#include "TError.h"
#include <cmath>
#include "assert.h"

class HZGammaEventTree {

  public:



    /// variables
    Float_t                 fWeight;
    UInt_t                  fRunNumber;
    UInt_t                  fLumiSectionNumber;
    UInt_t                  fEventNumber;
    Float_t                 fRho;
    UInt_t                  fNVtx;
    Float_t                 fMet;

    Int_t                   fGenLep1Type;
    Float_t                 fGenLep1Pt; 
    Float_t                 fGenLep1Eta; 
    Float_t                 fGenLep1Phi; 
    Int_t                   fGenLep2Type;
    Float_t                 fGenLep2Pt; 
    Float_t                 fGenLep2Eta; 
    Float_t                 fGenLep2Phi; 
    Float_t                 fGenPhotonPt; 
    Float_t                 fGenPhotonEta; 
    Float_t                 fGenPhotonPhi; 

    Int_t                   fLep1Type;
    Float_t                 fLep1Pt; 
    Float_t                 fLep1Eta; 
    Float_t                 fLep1Phi; 
    Int_t                   fLep2Type;
    Float_t                 fLep2Pt; 
    Float_t                 fLep2Eta; 
    Float_t                 fLep2Phi; 
    Float_t                 fPhoPt; 
    Float_t                 fPhoEta; 
    Float_t                 fPhoPhi; 

    Int_t                   fChannel;
    Int_t                   fCategory;
    Float_t                 fZMass; 
    Float_t                 fZPt; 
    Float_t                 fZEta; 
    Float_t                 fZPhi; 
    Float_t                 fMass; 
    Float_t                 fPt; 
    Float_t                 fEta; 
    Float_t                 fPhi; 

    Float_t                 fAngularVarCosBigTheta; 
    Float_t                 fAngularVarCosSmallTheta; 
    Float_t                 fAngularVarPhi; 


  public:
    /// this is the main element
    TTree *tree_;
    TFile *f_;
    TDirectory *dir_;
  
    /// hold the names of variables to facilitate things (filled during Init)
    std::vector<std::string> variables_;

    /// default constructor  
    HZGammaEventTree() {};
    /// default destructor
    ~HZGammaEventTree(){ 
      if (f_) f_->Close();  
    };
    
    /// initialize varibles and fill list of available variables
    void InitVariables() {

      fWeight               =  0.0;
      fRunNumber            =  0.0;
      fLumiSectionNumber    =  0.0;
      fEventNumber          =  0.0;
      fRho                  =  0.0;
      fNVtx                 =  0.0;
      fMet                  =  0.0;
      fGenLep1Type          =  0.0;
      fGenLep1Pt            =  0.0;
      fGenLep1Eta           =  0.0;
      fGenLep1Phi           =  0.0;
      fGenLep2Type          =  0.0;
      fGenLep2Pt            =  0.0;
      fGenLep2Eta           =  0.0;
      fGenLep2Phi           =  0.0;
      fGenPhotonPt          =  0.0;
      fGenPhotonEta         =  0.0;
      fGenPhotonPhi         =  0.0;
      fLep1Type             =  0.0;
      fLep1Pt               =  0.0;
      fLep1Eta              =  0.0;
      fLep1Phi              =  0.0;
      fLep2Type             =  0.0;
      fLep2Pt               =  0.0;
      fLep2Eta              =  0.0;
      fLep2Phi              =  0.0;
      fPhotonPt             =  0.0;
      fPhotonEta            =  0.0;
      fPhotonPhi            =  0.0;
      fChannel              =  0.0;
      fCategory             =  0.0;
      fZMass                =  0.0;
      fZPt                  =  0.0;
      fZEta                 =  0.0;
      fZPhi                 =  0.0;
      fMass                 =  0.0;
      fPt                   =  0.0;
      fEta                  =  0.0;
      fPhi                  =  0.0;
      fAngularVarCosBigTheta=  0.0;
      fAngularVarCosSmallTheta =  0.0;
      fAngularVarPhi        =  0.0;

    }
    
  /// load a HZGammaEventTree
  void LoadTree(const char* file){
    f_ = TFile::Open(file);
    assert(f_);
    tree_ = dynamic_cast<TTree*>(f_->Get("HZGammaEvent"));
    assert(tree_);
  }
    
  /// create a HZGammaEventTree
  void CreateTree(){
    tree_ = new TTree("HZGammaEvent","HZGammaEvent");
    f_ = 0;

    //book the branches
    tree_->Branch("weight", &fWeight, "weight/F");
    tree_->Branch("run",&fRunNumber,"run/i");     
    tree_->Branch("lumi",&fLumiSectionNumber, "lumi/i");
    tree_->Branch("event",&fEventNumber, "event/i");     
    tree_->Branch("rho",&fRho,"rho/F");
    tree_->Branch("recoVertices",&fNVtx,"recoVertices/i");
    tree_->Branch("pfmet",&fMet,"pfmet/F");    

    tree_->Branch("genl1pdgId",&fGenLep1Type ,"genl1pdgId/I");         
    tree_->Branch("genl1pt",&fGenLep1Pt   ,"genl1pt/F");         
    tree_->Branch("genl1eta",&fGenLep1Eta ,"genl1eta/F");          
    tree_->Branch("genl1phi",&fGenLep1Phi  ,"genl1phi/F");         
    tree_->Branch("genl2pdgId",&fGenLep2Type ,"genl2pdgId/I");         
    tree_->Branch("genl2pt",&fGenLep2Pt   ,"genl2pt/F");         
    tree_->Branch("genl2eta",&fGenLep2Eta ,"genl2eta/F");          
    tree_->Branch("genl2phi",&fGenLep2Phi  ,"genl2phi/F");         
    tree_->Branch("genphopt",&fGenPhotonPt   ,"genphopt/F");         
    tree_->Branch("genphoeta",&fGenPhotonEta ,"genphoeta/F");          
    tree_->Branch("genphophi",&fGenPhotonPhi  ,"genphophi/F");         

    tree_->Branch("l1pdgId",&fLep1Type,"l1pdgId/I");         
    tree_->Branch("l1pt",&fLep1Pt,"l1pt/F");           
    tree_->Branch("l1eta",&fLep1Eta,"l1eta/F");           
    tree_->Branch("l1phi",&fLep1Phi,"l1phi/F");           
    tree_->Branch("l2pdgId",&fLep2Type,"l2pdgId/I");         
    tree_->Branch("l2pt",&fLep2Pt,"l2pt/F");           
    tree_->Branch("l2eta",&fLep2Eta,"l2eta/F");           
    tree_->Branch("l2phi",&fLep2Phi,"l2phi/F");           
    tree_->Branch("phopt",&fPhotonPt,"phopt/F");           
    tree_->Branch("phoeta",&fPhotonEta,"phoeta/F");           
    tree_->Branch("phophi",&fPhotonPhi,"phophi/F");           

    tree_->Branch("channel",&fChannel,"channel/I");            
    tree_->Branch("category",&fCategory,"category/I");       
    tree_->Branch("zmass",&fZMass,"zmass/F");       
    tree_->Branch("zpt",&fZPt,"zpt/F");
    tree_->Branch("zeta",&fZEta,"zeta/F");   
    tree_->Branch("zphi",&fZPhi,"zphi/F");
    tree_->Branch("mass",&fMass,"mass/F");
    tree_->Branch("pt",&fPt,"pt/F");
    tree_->Branch("eta",&fEta,"eta/F");
    tree_->Branch("phi",&fPhi,"phi/F");

    tree_->Branch("cosBigTheta", &fAngularVarCosBigTheta, "cosBigTheta/F");
    tree_->Branch("cosSmallTheta", &fAngularVarCosSmallTheta, "cosSmallTheta/F");
    tree_->Branch("angularVarPhi", &fAngularVarPhi, "angularVarPhi/F");
  } 

  // initialze a HZGammaEventTree
  void InitTree(){
    assert(tree_);
    // don't forget to set pointers to zero before you set address
    // or you will fully appreciate that "ROOT sucks" :)
    InitVariables();
    //Set branch address
    Int_t currentState = gErrorIgnoreLevel;
    // gErrorIgnoreLevel = kError;
    gErrorIgnoreLevel = kBreak;


    tree_->SetBranchAddress("weight", &fWeight);
    tree_->SetBranchAddress("run",&fRunNumber);
    tree_->SetBranchAddress("lumi",&fLumiSectionNumber);
    tree_->SetBranchAddress("event",&fEventNumber);     
    tree_->SetBranchAddress("rho",&fRho);
    tree_->SetBranchAddress("recoVertices",&fNVtx);
    tree_->SetBranchAddress("pfmet",&fMet);

    tree_->SetBranchAddress("weight", &fWeight);
    tree_->SetBranchAddress("run",&fRunNumber);
    tree_->SetBranchAddress("lumi",&fLumiSectionNumber);
    tree_->SetBranchAddress("event",&fEventNumber);     
    tree_->SetBranchAddress("rho",&fRho);
    tree_->SetBranchAddress("recoVertices",&fNVtx);
    tree_->SetBranchAddress("pfmet",&fMet);
    tree_->SetBranchAddress("genl1pdgId",&fGenLep1Type);
    tree_->SetBranchAddress("genl1pt",&fGenLep1Pt);
    tree_->SetBranchAddress("genl1eta",&fGenLep1Eta );
    tree_->SetBranchAddress("genl1phi",&fGenLep1Phi  );
    tree_->SetBranchAddress("genl2pdgId",&fGenLep2Type );
    tree_->SetBranchAddress("genl2pt",&fGenLep2Pt   );
    tree_->SetBranchAddress("genl2eta",&fGenLep2Eta );
    tree_->SetBranchAddress("genl2phi",&fGenLep2Phi  );
    tree_->SetBranchAddress("genphopt",&fGenPhotonPt   );
    tree_->SetBranchAddress("genphoeta",&fGenPhotonEta );
    tree_->SetBranchAddress("genphophi",&fGenPhotonPhi  );

    tree_->SetBranchAddress("l1pdgId",&fLep1Type);
    tree_->SetBranchAddress("l1pt",&fLep1Pt);
    tree_->SetBranchAddress("l1eta",&fLep1Eta);
    tree_->SetBranchAddress("l1phi",&fLep1Phi);
    tree_->SetBranchAddress("l2pdgId",&fLep2Type);
    tree_->SetBranchAddress("l2pt",&fLep2Pt);
    tree_->SetBranchAddress("l2eta",&fLep2Eta);
    tree_->SetBranchAddress("l2phi",&fLep2Phi);
    tree_->SetBranchAddress("phopt",&fPhotonPt);
    tree_->SetBranchAddress("phoeta",&fPhotonEta);
    tree_->SetBranchAddress("phophi",&fPhotonPhi);

    tree_->SetBranchAddress("channel",&fChannel);
    tree_->SetBranchAddress("category",&fCategory);
    tree_->SetBranchAddress("zmass",&fZMass);
    tree_->SetBranchAddress("zpt",&fZPt);
    tree_->SetBranchAddress("zeta",&fZEta);
    tree_->SetBranchAddress("zphi",&fZPhi);
    tree_->SetBranchAddress("mass",&fMass);
    tree_->SetBranchAddress("pt",&fPt);
    tree_->SetBranchAddress("eta",&fEta);
    tree_->SetBranchAddress("phi",&fPhi);

    tree_->SetBranchAddress("cosBigTheta", &fAngularVarCosBigTheta);
    tree_->SetBranchAddress("cosSmallTheta", &fAngularVarCosSmallTheta);
    tree_->SetBranchAddress("angularVarPhi", &fAngularVarPhi);

    gErrorIgnoreLevel = currentState;
  }

}; 



#endif

