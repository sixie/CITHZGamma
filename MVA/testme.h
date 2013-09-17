//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Oct 18 19:50:36 2012 by ROOT version 5.34/00
// from TTree h2LepPhotonTree/h2LepPhotonTree
// found on file: Trees/AllNtuple_s12-zllm50-v7a_noskim_0128.root
//////////////////////////////////////////////////////////

#ifndef testme_h
#define testme_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class testme {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   UInt_t          run;
   UInt_t          lumi;
   UInt_t          event;
   Float_t         electronZmass;
   Float_t         mllg;
   Float_t         ele1MVA;
   Float_t         ele2MVA;
   Float_t         ele1charge;
   Float_t         ele1energy;
   Float_t         ele1px;
   Float_t         ele1py;
   Float_t         ele1pz;
   Float_t         ele1pt;
   Float_t         ele1eta;
   Float_t         ele1mass;
   Float_t         ele1phi;
   Float_t         ele1RegressionEnergyV0;
   Float_t         ele1RegressionEnergyV1;
   Float_t         ele1RegressionEnergyV2;
   Float_t         ele1RegressionEnergyErrorV0;
   Float_t         ele1RegressionEnergyErrorV1;
   Float_t         ele1RegressionEnergyErrorV2;
   Float_t         ele2charge;
   Float_t         ele2energy;
   Float_t         ele2px;
   Float_t         ele2py;
   Float_t         ele2pz;
   Float_t         ele2pt;
   Float_t         ele2eta;
   Float_t         ele2mass;
   Float_t         ele2phi;
   Float_t         ele2RegressionEnergyV0;
   Float_t         ele2RegressionEnergyV1;
   Float_t         ele2RegressionEnergyV2;
   Float_t         ele2RegressionEnergyErrorV0;
   Float_t         ele2RegressionEnergyErrorV1;
   Float_t         ele2RegressionEnergyErrorV2;
   Float_t         ele1dEtaIn;
   Float_t         ele1dPhiIn;
   Float_t         ele1sigmaIEtaIEta;
   Float_t         ele1HadOverEm;
   Float_t         ele1D0;
   Float_t         ele1DZ;
   Float_t         ele1OneOverEMinusOneOverP;
   Float_t         ele1PFIsoOverPt;
   Bool_t          ele1Conversion;
   Float_t         ele1missinghits;
   Float_t         ele2dEtaIn;
   Float_t         ele2dPhiIn;
   Float_t         ele2sigmaIEtaIEta;
   Float_t         ele2HadOverEm;
   Float_t         ele2D0;
   Float_t         ele2DZ;
   Float_t         ele2OneOverEMinusOneOverP;
   Float_t         ele2PFIsoOverPt;
   Bool_t          ele2Conversion;
   Float_t         ele2missinghits;
   Float_t         chargediso_ele1;
   Float_t         gammaiso_ele1;
   Float_t         neutraliso_ele1;
   Float_t         rho_ele1;
   Float_t         effectivearea_ele1;
   Float_t         chargediso_ele2;
   Float_t         gammaiso_ele2;
   Float_t         neutraliso_ele2;
   Float_t         rho_ele2;
   Float_t         effectivearea_ele2;
   Float_t         costheta_lm_electrons;
   Float_t         costheta_lp_electrons;
   Float_t         phi_electrons;
   Float_t         cosTheta_electrons;
   Float_t         cosThetaG_electrons;
   Float_t         costheta_lm_muons;
   Float_t         costheta_lp_muons;
   Float_t         phi_muons;
   Float_t         cosTheta_muons;
   Float_t         cosThetaG_muons;
   Bool_t          muonZgVeto;
   Float_t         muonZmass;
   Float_t         m1E;
   Float_t         m1Pt;
   Float_t         m1Mass;
   Float_t         m1Px;
   Float_t         m1Py;
   Float_t         m1Pz;
   Float_t         m1Eta;
   Float_t         m1Phi;
   Float_t         m1Charge;
   Float_t         m1PtErr;
   Float_t         m2E;
   Float_t         m2Pt;
   Float_t         m2Mass;
   Float_t         m2Px;
   Float_t         m2Py;
   Float_t         m2Pz;
   Float_t         m2Eta;
   Float_t         m2Phi;
   Float_t         m2Charge;
   Float_t         m2PtErr;
   Float_t         photonidmva;
   Float_t         photonr9;
   Float_t         photonenergy;
   Float_t         photonpx;
   Float_t         photonpy;
   Float_t         photonpz;
   Float_t         photonpt;
   Float_t         photoneta;
   Float_t         photonmass;
   Float_t         photonphi;
   Float_t         photonenergyerror;
   Float_t         NPu;
   Float_t         NPuPlus;
   Float_t         NPuMinus;
   Float_t         photonmatchmc;

   // List of branches
   TBranch        *b_run;   //!
   TBranch        *b_lumi;   //!
   TBranch        *b_event;   //!
   TBranch        *b_electronZmass;   //!
   TBranch        *b_mllg;   //!
   TBranch        *b_ele1MVA;   //!
   TBranch        *b_ele2MVA;   //!
   TBranch        *b_ele1charge;   //!
   TBranch        *b_ele1energy;   //!
   TBranch        *b_ele1px;   //!
   TBranch        *b_ele1py;   //!
   TBranch        *b_ele1pz;   //!
   TBranch        *b_ele1pt;   //!
   TBranch        *b_ele1eta;   //!
   TBranch        *b_ele1mass;   //!
   TBranch        *b_ele1phi;   //!
   TBranch        *b_ele1RegressionEnergyV0;   //!
   TBranch        *b_ele1RegressionEnergyV1;   //!
   TBranch        *b_ele1RegressionEnergyV2;   //!
   TBranch        *b_ele1RegressionEnergyErrorV0;   //!
   TBranch        *b_ele1RegressionEnergyErrorV1;   //!
   TBranch        *b_ele1RegressionEnergyErrorV2;   //!
   TBranch        *b_ele2charge;   //!
   TBranch        *b_ele2energy;   //!
   TBranch        *b_ele2px;   //!
   TBranch        *b_ele2py;   //!
   TBranch        *b_ele2pz;   //!
   TBranch        *b_ele2pt;   //!
   TBranch        *b_ele2eta;   //!
   TBranch        *b_ele2mass;   //!
   TBranch        *b_ele2phi;   //!
   TBranch        *b_ele2RegressionEnergyV0;   //!
   TBranch        *b_ele2RegressionEnergyV1;   //!
   TBranch        *b_ele2RegressionEnergyV2;   //!
   TBranch        *b_ele2RegressionEnergyErrorV0;   //!
   TBranch        *b_ele2RegressionEnergyErrorV1;   //!
   TBranch        *b_ele2RegressionEnergyErrorV2;   //!
   TBranch        *b_ele1dEtaIn;   //!
   TBranch        *b_ele1dPhiIn;   //!
   TBranch        *b_ele1sigmaIEtaIEta;   //!
   TBranch        *b_ele1HadOverEm;   //!
   TBranch        *b_ele1D0;   //!
   TBranch        *b_ele1DZ;   //!
   TBranch        *b_ele1OneOverEMinusOneOverP;   //!
   TBranch        *b_ele1PFIsoOverPt;   //!
   TBranch        *b_ele1Conversion;   //!
   TBranch        *b_ele1missinghits;   //!
   TBranch        *b_ele2dEtaIn;   //!
   TBranch        *b_ele2dPhiIn;   //!
   TBranch        *b_ele2sigmaIEtaIEta;   //!
   TBranch        *b_ele2HadOverEm;   //!
   TBranch        *b_ele2D0;   //!
   TBranch        *b_ele2DZ;   //!
   TBranch        *b_ele2OneOverEMinusOneOverP;   //!
   TBranch        *b_ele2PFIsoOverPt;   //!
   TBranch        *b_ele2Conversion;   //!
   TBranch        *b_ele2missinghits;   //!
   TBranch        *b_chargediso_ele1;   //!
   TBranch        *b_gammaiso_ele1;   //!
   TBranch        *b_neutraliso_ele1;   //!
   TBranch        *b_rho_ele1;   //!
   TBranch        *b_effectivearea_ele1;   //!
   TBranch        *b_chargediso_ele2;   //!
   TBranch        *b_gammaiso_ele2;   //!
   TBranch        *b_neutraliso_ele2;   //!
   TBranch        *b_rho_ele2;   //!
   TBranch        *b_effectivearea_ele2;   //!
   TBranch        *b_costheta_lm_electrons;   //!
   TBranch        *b_costheta_lp_electrons;   //!
   TBranch        *b_phi_electrons;   //!
   TBranch        *b_cosTheta_electrons;   //!
   TBranch        *b_cosThetaG_electrons;   //!
   TBranch        *b_costheta_lm_muons;   //!
   TBranch        *b_costheta_lp_muons;   //!
   TBranch        *b_phi_muons;   //!
   TBranch        *b_cosTheta_muons;   //!
   TBranch        *b_cosThetaG_muons;   //!
   TBranch        *b_muonZgVeto;   //!
   TBranch        *b_muonZmass;   //!
   TBranch        *b_m1E;   //!
   TBranch        *b_m1Pt;   //!
   TBranch        *b_m1Mass;   //!
   TBranch        *b_m1Px;   //!
   TBranch        *b_m1Py;   //!
   TBranch        *b_m1Pz;   //!
   TBranch        *b_m1Eta;   //!
   TBranch        *b_m1Phi;   //!
   TBranch        *b_m1Charge;   //!
   TBranch        *b_m1PtErr;   //!
   TBranch        *b_m2E;   //!
   TBranch        *b_m2Pt;   //!
   TBranch        *b_m2Mass;   //!
   TBranch        *b_m2Px;   //!
   TBranch        *b_m2Py;   //!
   TBranch        *b_m2Pz;   //!
   TBranch        *b_m2Eta;   //!
   TBranch        *b_m2Phi;   //!
   TBranch        *b_m2Charge;   //!
   TBranch        *b_m2PtErr;   //!
   TBranch        *b_photonidmva;   //!
   TBranch        *b_photonr9;   //!
   TBranch        *b_photonenergy;   //!
   TBranch        *b_photonpx;   //!
   TBranch        *b_photonpy;   //!
   TBranch        *b_photonpz;   //!
   TBranch        *b_photonpt;   //!
   TBranch        *b_photoneta;   //!
   TBranch        *b_photonmass;   //!
   TBranch        *b_photonphi;   //!
   TBranch        *b_photonenergyerror;   //!
   TBranch        *b_NPu;   //!
   TBranch        *b_NPuPlus;   //!
   TBranch        *b_NPuMinus;   //!
   TBranch        *b_photonmatchmc;   //!

   testme(TTree *tree=0);
   virtual ~testme();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef testme_cxx
testme::testme(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("Trees/AllNtuple_s12-zllm50-v7a_noskim_0128.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("Trees/AllNtuple_s12-zllm50-v7a_noskim_0128.root");
      }
      f->GetObject("h2LepPhotonTree",tree);

   }
   Init(tree);
}

testme::~testme()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t testme::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t testme::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void testme::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("run", &run, &b_run);
   fChain->SetBranchAddress("lumi", &lumi, &b_lumi);
   fChain->SetBranchAddress("event", &event, &b_event);
   fChain->SetBranchAddress("electronZmass", &electronZmass, &b_electronZmass);
   fChain->SetBranchAddress("mllg", &mllg, &b_mllg);
   fChain->SetBranchAddress("ele1MVA", &ele1MVA, &b_ele1MVA);
   fChain->SetBranchAddress("ele2MVA", &ele2MVA, &b_ele2MVA);
   fChain->SetBranchAddress("ele1charge", &ele1charge, &b_ele1charge);
   fChain->SetBranchAddress("ele1energy", &ele1energy, &b_ele1energy);
   fChain->SetBranchAddress("ele1px", &ele1px, &b_ele1px);
   fChain->SetBranchAddress("ele1py", &ele1py, &b_ele1py);
   fChain->SetBranchAddress("ele1pz", &ele1pz, &b_ele1pz);
   fChain->SetBranchAddress("ele1pt", &ele1pt, &b_ele1pt);
   fChain->SetBranchAddress("ele1eta", &ele1eta, &b_ele1eta);
   fChain->SetBranchAddress("ele1mass", &ele1mass, &b_ele1mass);
   fChain->SetBranchAddress("ele1phi", &ele1phi, &b_ele1phi);
   fChain->SetBranchAddress("ele1RegressionEnergyV0", &ele1RegressionEnergyV0, &b_ele1RegressionEnergyV0);
   fChain->SetBranchAddress("ele1RegressionEnergyV1", &ele1RegressionEnergyV1, &b_ele1RegressionEnergyV1);
   fChain->SetBranchAddress("ele1RegressionEnergyV2", &ele1RegressionEnergyV2, &b_ele1RegressionEnergyV2);
   fChain->SetBranchAddress("ele1RegressionEnergyErrorV0", &ele1RegressionEnergyErrorV0, &b_ele1RegressionEnergyErrorV0);
   fChain->SetBranchAddress("ele1RegressionEnergyErrorV1", &ele1RegressionEnergyErrorV1, &b_ele1RegressionEnergyErrorV1);
   fChain->SetBranchAddress("ele1RegressionEnergyErrorV2", &ele1RegressionEnergyErrorV2, &b_ele1RegressionEnergyErrorV2);
   fChain->SetBranchAddress("ele2charge", &ele2charge, &b_ele2charge);
   fChain->SetBranchAddress("ele2energy", &ele2energy, &b_ele2energy);
   fChain->SetBranchAddress("ele2px", &ele2px, &b_ele2px);
   fChain->SetBranchAddress("ele2py", &ele2py, &b_ele2py);
   fChain->SetBranchAddress("ele2pz", &ele2pz, &b_ele2pz);
   fChain->SetBranchAddress("ele2pt", &ele2pt, &b_ele2pt);
   fChain->SetBranchAddress("ele2eta", &ele2eta, &b_ele2eta);
   fChain->SetBranchAddress("ele2mass", &ele2mass, &b_ele2mass);
   fChain->SetBranchAddress("ele2phi", &ele2phi, &b_ele2phi);
   fChain->SetBranchAddress("ele2RegressionEnergyV0", &ele2RegressionEnergyV0, &b_ele2RegressionEnergyV0);
   fChain->SetBranchAddress("ele2RegressionEnergyV1", &ele2RegressionEnergyV1, &b_ele2RegressionEnergyV1);
   fChain->SetBranchAddress("ele2RegressionEnergyV2", &ele2RegressionEnergyV2, &b_ele2RegressionEnergyV2);
   fChain->SetBranchAddress("ele2RegressionEnergyErrorV0", &ele2RegressionEnergyErrorV0, &b_ele2RegressionEnergyErrorV0);
   fChain->SetBranchAddress("ele2RegressionEnergyErrorV1", &ele2RegressionEnergyErrorV1, &b_ele2RegressionEnergyErrorV1);
   fChain->SetBranchAddress("ele2RegressionEnergyErrorV2", &ele2RegressionEnergyErrorV2, &b_ele2RegressionEnergyErrorV2);
   fChain->SetBranchAddress("ele1dEtaIn", &ele1dEtaIn, &b_ele1dEtaIn);
   fChain->SetBranchAddress("ele1dPhiIn", &ele1dPhiIn, &b_ele1dPhiIn);
   fChain->SetBranchAddress("ele1sigmaIEtaIEta", &ele1sigmaIEtaIEta, &b_ele1sigmaIEtaIEta);
   fChain->SetBranchAddress("ele1HadOverEm", &ele1HadOverEm, &b_ele1HadOverEm);
   fChain->SetBranchAddress("ele1D0", &ele1D0, &b_ele1D0);
   fChain->SetBranchAddress("ele1DZ", &ele1DZ, &b_ele1DZ);
   fChain->SetBranchAddress("ele1OneOverEMinusOneOverP", &ele1OneOverEMinusOneOverP, &b_ele1OneOverEMinusOneOverP);
   fChain->SetBranchAddress("ele1PFIsoOverPt", &ele1PFIsoOverPt, &b_ele1PFIsoOverPt);
   fChain->SetBranchAddress("ele1Conversion", &ele1Conversion, &b_ele1Conversion);
   fChain->SetBranchAddress("ele1missinghits", &ele1missinghits, &b_ele1missinghits);
   fChain->SetBranchAddress("ele2dEtaIn", &ele2dEtaIn, &b_ele2dEtaIn);
   fChain->SetBranchAddress("ele2dPhiIn", &ele2dPhiIn, &b_ele2dPhiIn);
   fChain->SetBranchAddress("ele2sigmaIEtaIEta", &ele2sigmaIEtaIEta, &b_ele2sigmaIEtaIEta);
   fChain->SetBranchAddress("ele2HadOverEm", &ele2HadOverEm, &b_ele2HadOverEm);
   fChain->SetBranchAddress("ele2D0", &ele2D0, &b_ele2D0);
   fChain->SetBranchAddress("ele2DZ", &ele2DZ, &b_ele2DZ);
   fChain->SetBranchAddress("ele2OneOverEMinusOneOverP", &ele2OneOverEMinusOneOverP, &b_ele2OneOverEMinusOneOverP);
   fChain->SetBranchAddress("ele2PFIsoOverPt", &ele2PFIsoOverPt, &b_ele2PFIsoOverPt);
   fChain->SetBranchAddress("ele2Conversion", &ele2Conversion, &b_ele2Conversion);
   fChain->SetBranchAddress("ele2missinghits", &ele2missinghits, &b_ele2missinghits);
   fChain->SetBranchAddress("chargediso_ele1", &chargediso_ele1, &b_chargediso_ele1);
   fChain->SetBranchAddress("gammaiso_ele1", &gammaiso_ele1, &b_gammaiso_ele1);
   fChain->SetBranchAddress("neutraliso_ele1", &neutraliso_ele1, &b_neutraliso_ele1);
   fChain->SetBranchAddress("rho_ele1", &rho_ele1, &b_rho_ele1);
   fChain->SetBranchAddress("effectivearea_ele1", &effectivearea_ele1, &b_effectivearea_ele1);
   fChain->SetBranchAddress("chargediso_ele2", &chargediso_ele2, &b_chargediso_ele2);
   fChain->SetBranchAddress("gammaiso_ele2", &gammaiso_ele2, &b_gammaiso_ele2);
   fChain->SetBranchAddress("neutraliso_ele2", &neutraliso_ele2, &b_neutraliso_ele2);
   fChain->SetBranchAddress("rho_ele2", &rho_ele2, &b_rho_ele2);
   fChain->SetBranchAddress("effectivearea_ele2", &effectivearea_ele2, &b_effectivearea_ele2);
   fChain->SetBranchAddress("costheta_lm_electrons", &costheta_lm_electrons, &b_costheta_lm_electrons);
   fChain->SetBranchAddress("costheta_lp_electrons", &costheta_lp_electrons, &b_costheta_lp_electrons);
   fChain->SetBranchAddress("phi_electrons", &phi_electrons, &b_phi_electrons);
   fChain->SetBranchAddress("cosTheta_electrons", &cosTheta_electrons, &b_cosTheta_electrons);
   fChain->SetBranchAddress("cosThetaG_electrons", &cosThetaG_electrons, &b_cosThetaG_electrons);
   fChain->SetBranchAddress("costheta_lm_muons", &costheta_lm_muons, &b_costheta_lm_muons);
   fChain->SetBranchAddress("costheta_lp_muons", &costheta_lp_muons, &b_costheta_lp_muons);
   fChain->SetBranchAddress("phi_muons", &phi_muons, &b_phi_muons);
   fChain->SetBranchAddress("cosTheta_muons", &cosTheta_muons, &b_cosTheta_muons);
   fChain->SetBranchAddress("cosThetaG_muons", &cosThetaG_muons, &b_cosThetaG_muons);
   fChain->SetBranchAddress("muonZgVeto", &muonZgVeto, &b_muonZgVeto);
   fChain->SetBranchAddress("muonZmass", &muonZmass, &b_muonZmass);
   fChain->SetBranchAddress("m1E", &m1E, &b_m1E);
   fChain->SetBranchAddress("m1Pt", &m1Pt, &b_m1Pt);
   fChain->SetBranchAddress("m1Mass", &m1Mass, &b_m1Mass);
   fChain->SetBranchAddress("m1Px", &m1Px, &b_m1Px);
   fChain->SetBranchAddress("m1Py", &m1Py, &b_m1Py);
   fChain->SetBranchAddress("m1Pz", &m1Pz, &b_m1Pz);
   fChain->SetBranchAddress("m1Eta", &m1Eta, &b_m1Eta);
   fChain->SetBranchAddress("m1Phi", &m1Phi, &b_m1Phi);
   fChain->SetBranchAddress("m1Charge", &m1Charge, &b_m1Charge);
   fChain->SetBranchAddress("m1PtErr", &m1PtErr, &b_m1PtErr);
   fChain->SetBranchAddress("m2E", &m2E, &b_m2E);
   fChain->SetBranchAddress("m2Pt", &m2Pt, &b_m2Pt);
   fChain->SetBranchAddress("m2Mass", &m2Mass, &b_m2Mass);
   fChain->SetBranchAddress("m2Px", &m2Px, &b_m2Px);
   fChain->SetBranchAddress("m2Py", &m2Py, &b_m2Py);
   fChain->SetBranchAddress("m2Pz", &m2Pz, &b_m2Pz);
   fChain->SetBranchAddress("m2Eta", &m2Eta, &b_m2Eta);
   fChain->SetBranchAddress("m2Phi", &m2Phi, &b_m2Phi);
   fChain->SetBranchAddress("m2Charge", &m2Charge, &b_m2Charge);
   fChain->SetBranchAddress("m2PtErr", &m2PtErr, &b_m2PtErr);
   fChain->SetBranchAddress("photonidmva", &photonidmva, &b_photonidmva);
   fChain->SetBranchAddress("photonr9", &photonr9, &b_photonr9);
   fChain->SetBranchAddress("photonenergy", &photonenergy, &b_photonenergy);
   fChain->SetBranchAddress("photonpx", &photonpx, &b_photonpx);
   fChain->SetBranchAddress("photonpy", &photonpy, &b_photonpy);
   fChain->SetBranchAddress("photonpz", &photonpz, &b_photonpz);
   fChain->SetBranchAddress("photonpt", &photonpt, &b_photonpt);
   fChain->SetBranchAddress("photoneta", &photoneta, &b_photoneta);
   fChain->SetBranchAddress("photonmass", &photonmass, &b_photonmass);
   fChain->SetBranchAddress("photonphi", &photonphi, &b_photonphi);
   fChain->SetBranchAddress("photonenergyerror", &photonenergyerror, &b_photonenergyerror);
   fChain->SetBranchAddress("NPu", &NPu, &b_NPu);
   fChain->SetBranchAddress("NPuPlus", &NPuPlus, &b_NPuPlus);
   fChain->SetBranchAddress("NPuMinus", &NPuMinus, &b_NPuMinus);
   fChain->SetBranchAddress("photonmatchmc", &photonmatchmc, &b_photonmatchmc);
   Notify();
}

Bool_t testme::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void testme::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t testme::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef testme_cxx
