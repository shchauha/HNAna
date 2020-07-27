//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Jun  4 19:03:10 2020 by ROOT version 6.20/04
// from TTree Delphes/Analysis tree
// found on file: ../RHN_Mu_13TeV_10k.root
//////////////////////////////////////////////////////////

#ifndef DelAna_h
#define DelAna_h

// #ifdef __CLING__
// R__LOAD_LIBRARY(libDelphes)
// #include "classes/DelphesClasses.h"
// #include "external/ExRootAnalysis/ExRootTreeReader.h"
// #endif

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TMath.h>
#include "Math/LorentzVector.h"
#include "TLorentzVector.h"
#include "TVector.h"
#include "TVector2.h"
#include "TVector3.h"
#include <vector>
#include <fstream>
#include <iostream>
#include "TObject.h"
#include "TVector3.h"
#include <TSelector.h>
#include <TTreeReader.h>
#include <TTreeReaderValue.h>
#include <TTreeReaderArray.h>

// Headers needed by this particular selector
#include "TClonesArray.h"

using namespace std;

struct ob {
  TLorentzVector v;
  int pid;
  int status;
  int index;
  int M1;
  //int M2;
  float Dxy;
  float Dz;
  //int D1;
  //int D2;
    
};



class DelAna : public TSelector {
public :
  //TTreeReader     fReader;  //!the tree reader
  TTree          *fChain ;   //!pointer to the analyzed TTree or TChain


// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxEvent = 1;
   static constexpr Int_t kMaxEventLHEF = 1;
   static constexpr Int_t kMaxWeightLHEF = 1;
   static constexpr Int_t kMaxParticle = 3761;
   static constexpr Int_t kMaxTrack = 121;
   static constexpr Int_t kMaxTower = 262;
   static constexpr Int_t kMaxEFlowTrack = 121;
   static constexpr Int_t kMaxEFlowPhoton = 70;
   static constexpr Int_t kMaxEFlowNeutralHadron = 164;
   static constexpr Int_t kMaxGenJet = 8;
   static constexpr Int_t kMaxGenMissingET = 1;
   static constexpr Int_t kMaxJet = 7;
   static constexpr Int_t kMaxElectron = 2;
   static constexpr Int_t kMaxPhoton = 1;
   static constexpr Int_t kMaxMuon = 3;
   static constexpr Int_t kMaxFatJet = 2;
   static constexpr Int_t kMaxMissingET = 1;
   static constexpr Int_t kMaxScalarHT = 1;

   // Declaration of leaf types
   Int_t           Event_;
   UInt_t          Event_fUniqueID[kMaxEvent];   //[Event_]
   UInt_t          Event_fBits[kMaxEvent];   //[Event_]
   Long64_t        Event_Number[kMaxEvent];   //[Event_]
   Float_t         Event_ReadTime[kMaxEvent];   //[Event_]
   Float_t         Event_ProcTime[kMaxEvent];   //[Event_]
   Int_t           Event_ProcessID[kMaxEvent];   //[Event_]
   Int_t           Event_MPI[kMaxEvent];   //[Event_]
   Float_t         Event_Weight[kMaxEvent];   //[Event_]
   Float_t         Event_CrossSection[kMaxEvent];   //[Event_]
   Float_t         Event_CrossSectionError[kMaxEvent];   //[Event_]
   Float_t         Event_Scale[kMaxEvent];   //[Event_]
   Float_t         Event_AlphaQED[kMaxEvent];   //[Event_]
   Float_t         Event_AlphaQCD[kMaxEvent];   //[Event_]
   Int_t           Event_ID1[kMaxEvent];   //[Event_]
   Int_t           Event_ID2[kMaxEvent];   //[Event_]
   Float_t         Event_X1[kMaxEvent];   //[Event_]
   Float_t         Event_X2[kMaxEvent];   //[Event_]
   Float_t         Event_ScalePDF[kMaxEvent];   //[Event_]
   Float_t         Event_PDF1[kMaxEvent];   //[Event_]
   Float_t         Event_PDF2[kMaxEvent];   //[Event_]
   Int_t           Event_size;
   Int_t           EventLHEF_;
   UInt_t          EventLHEF_fUniqueID[kMaxEventLHEF];   //[EventLHEF_]
   UInt_t          EventLHEF_fBits[kMaxEventLHEF];   //[EventLHEF_]
   Long64_t        EventLHEF_Number[kMaxEventLHEF];   //[EventLHEF_]
   Float_t         EventLHEF_ReadTime[kMaxEventLHEF];   //[EventLHEF_]
   Float_t         EventLHEF_ProcTime[kMaxEventLHEF];   //[EventLHEF_]
   Int_t           EventLHEF_ProcessID[kMaxEventLHEF];   //[EventLHEF_]
   Float_t         EventLHEF_Weight[kMaxEventLHEF];   //[EventLHEF_]
   Float_t         EventLHEF_CrossSection[kMaxEventLHEF];   //[EventLHEF_]
   Float_t         EventLHEF_ScalePDF[kMaxEventLHEF];   //[EventLHEF_]
   Float_t         EventLHEF_AlphaQED[kMaxEventLHEF];   //[EventLHEF_]
   Float_t         EventLHEF_AlphaQCD[kMaxEventLHEF];   //[EventLHEF_]
   Int_t           EventLHEF_size;
   Int_t           WeightLHEF_;
   UInt_t          WeightLHEF_fUniqueID[kMaxWeightLHEF];   //[WeightLHEF_]
   UInt_t          WeightLHEF_fBits[kMaxWeightLHEF];   //[WeightLHEF_]
   Int_t           WeightLHEF_ID[kMaxWeightLHEF];   //[WeightLHEF_]
   Float_t         WeightLHEF_Weight[kMaxWeightLHEF];   //[WeightLHEF_]
   Int_t           WeightLHEF_size;
   Int_t           Particle_;
   UInt_t          Particle_fUniqueID[kMaxParticle];   //[Particle_]
   UInt_t          Particle_fBits[kMaxParticle];   //[Particle_]
   Int_t           Particle_PID[kMaxParticle];   //[Particle_]
   Int_t           Particle_Status[kMaxParticle];   //[Particle_]
   Int_t           Particle_IsPU[kMaxParticle];   //[Particle_]
   Int_t           Particle_M1[kMaxParticle];   //[Particle_]
   Int_t           Particle_M2[kMaxParticle];   //[Particle_]
   Int_t           Particle_D1[kMaxParticle];   //[Particle_]
   Int_t           Particle_D2[kMaxParticle];   //[Particle_]
   Int_t           Particle_Charge[kMaxParticle];   //[Particle_]
   Float_t         Particle_Mass[kMaxParticle];   //[Particle_]
   Float_t         Particle_E[kMaxParticle];   //[Particle_]
   Float_t         Particle_Px[kMaxParticle];   //[Particle_]
   Float_t         Particle_Py[kMaxParticle];   //[Particle_]
   Float_t         Particle_Pz[kMaxParticle];   //[Particle_]
   Float_t         Particle_P[kMaxParticle];   //[Particle_]
   Float_t         Particle_PT[kMaxParticle];   //[Particle_]
   Float_t         Particle_Eta[kMaxParticle];   //[Particle_]
   Float_t         Particle_Phi[kMaxParticle];   //[Particle_]
   Float_t         Particle_Rapidity[kMaxParticle];   //[Particle_]
   Float_t         Particle_CtgTheta[kMaxParticle];   //[Particle_]
   Float_t         Particle_D0[kMaxParticle];   //[Particle_]
   Float_t         Particle_DZ[kMaxParticle];   //[Particle_]
   Float_t         Particle_T[kMaxParticle];   //[Particle_]
   Float_t         Particle_X[kMaxParticle];   //[Particle_]
   Float_t         Particle_Y[kMaxParticle];   //[Particle_]
   Float_t         Particle_Z[kMaxParticle];   //[Particle_]
   Int_t           Particle_size;
   Int_t           Track_;
   UInt_t          Track_fUniqueID[kMaxTrack];   //[Track_]
   UInt_t          Track_fBits[kMaxTrack];   //[Track_]
   Int_t           Track_PID[kMaxTrack];   //[Track_]
   Int_t           Track_Charge[kMaxTrack];   //[Track_]
   Float_t         Track_P[kMaxTrack];   //[Track_]
   Float_t         Track_PT[kMaxTrack];   //[Track_]
   Float_t         Track_Eta[kMaxTrack];   //[Track_]
   Float_t         Track_Phi[kMaxTrack];   //[Track_]
   Float_t         Track_CtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_EtaOuter[kMaxTrack];   //[Track_]
   Float_t         Track_PhiOuter[kMaxTrack];   //[Track_]
   Float_t         Track_T[kMaxTrack];   //[Track_]
   Float_t         Track_X[kMaxTrack];   //[Track_]
   Float_t         Track_Y[kMaxTrack];   //[Track_]
   Float_t         Track_Z[kMaxTrack];   //[Track_]
   Float_t         Track_TOuter[kMaxTrack];   //[Track_]
   Float_t         Track_XOuter[kMaxTrack];   //[Track_]
   Float_t         Track_YOuter[kMaxTrack];   //[Track_]
   Float_t         Track_ZOuter[kMaxTrack];   //[Track_]
   Float_t         Track_Xd[kMaxTrack];   //[Track_]
   Float_t         Track_Yd[kMaxTrack];   //[Track_]
   Float_t         Track_Zd[kMaxTrack];   //[Track_]
   Float_t         Track_L[kMaxTrack];   //[Track_]
   Float_t         Track_D0[kMaxTrack];   //[Track_]
   Float_t         Track_DZ[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorP[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPT[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorPhi[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorCtgTheta[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorT[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorD0[kMaxTrack];   //[Track_]
   Float_t         Track_ErrorDZ[kMaxTrack];   //[Track_]
   // TRef            Track_Particle[kMaxTrack];
   Int_t           Track_VertexIndex[kMaxTrack];   //[Track_]
   Int_t           Track_size;
   Int_t           Tower_;
   UInt_t          Tower_fUniqueID[kMaxTower];   //[Tower_]
   UInt_t          Tower_fBits[kMaxTower];   //[Tower_]
   Float_t         Tower_ET[kMaxTower];   //[Tower_]
   Float_t         Tower_Eta[kMaxTower];   //[Tower_]
   Float_t         Tower_Phi[kMaxTower];   //[Tower_]
   Float_t         Tower_E[kMaxTower];   //[Tower_]
   Float_t         Tower_T[kMaxTower];   //[Tower_]
   Int_t           Tower_NTimeHits[kMaxTower];   //[Tower_]
   Float_t         Tower_Eem[kMaxTower];   //[Tower_]
   Float_t         Tower_Ehad[kMaxTower];   //[Tower_]
   Float_t         Tower_Edges[kMaxTower][4];   //[Tower_]
   // TRefArray       Tower_Particles[kMaxTower];
   Int_t           Tower_size;
   Int_t           EFlowTrack_;
   UInt_t          EFlowTrack_fUniqueID[kMaxEFlowTrack];   //[EFlowTrack_]
   UInt_t          EFlowTrack_fBits[kMaxEFlowTrack];   //[EFlowTrack_]
   Int_t           EFlowTrack_PID[kMaxEFlowTrack];   //[EFlowTrack_]
   Int_t           EFlowTrack_Charge[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_P[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_PT[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Eta[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Phi[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_CtgTheta[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_EtaOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_PhiOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_T[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_X[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Y[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Z[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_TOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_XOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_YOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ZOuter[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Xd[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Yd[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_Zd[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_L[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_D0[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_DZ[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorP[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorPT[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorPhi[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorCtgTheta[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorT[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorD0[kMaxEFlowTrack];   //[EFlowTrack_]
   Float_t         EFlowTrack_ErrorDZ[kMaxEFlowTrack];   //[EFlowTrack_]
   // TRef            EFlowTrack_Particle[kMaxEFlowTrack];
   Int_t           EFlowTrack_VertexIndex[kMaxEFlowTrack];   //[EFlowTrack_]
   Int_t           EFlowTrack_size;
   Int_t           EFlowPhoton_;
   UInt_t          EFlowPhoton_fUniqueID[kMaxEFlowPhoton];   //[EFlowPhoton_]
   UInt_t          EFlowPhoton_fBits[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_ET[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Eta[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Phi[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_E[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_T[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Int_t           EFlowPhoton_NTimeHits[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Eem[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Ehad[kMaxEFlowPhoton];   //[EFlowPhoton_]
   Float_t         EFlowPhoton_Edges[kMaxEFlowPhoton][4];   //[EFlowPhoton_]
   // TRefArray       EFlowPhoton_Particles[kMaxEFlowPhoton];
   Int_t           EFlowPhoton_size;
   Int_t           EFlowNeutralHadron_;
   UInt_t          EFlowNeutralHadron_fUniqueID[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   UInt_t          EFlowNeutralHadron_fBits[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_ET[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Eta[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Phi[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_E[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_T[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Int_t           EFlowNeutralHadron_NTimeHits[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Eem[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Ehad[kMaxEFlowNeutralHadron];   //[EFlowNeutralHadron_]
   Float_t         EFlowNeutralHadron_Edges[kMaxEFlowNeutralHadron][4];   //[EFlowNeutralHadron_]
   // TRefArray       EFlowNeutralHadron_Particles[kMaxEFlowNeutralHadron];
   Int_t           EFlowNeutralHadron_size;
   Int_t           GenJet_;
   UInt_t          GenJet_fUniqueID[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_fBits[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_PT[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Eta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Phi[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_T[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Mass[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_DeltaEta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_DeltaPhi[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_Flavor[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_FlavorAlgo[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_FlavorPhys[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTag[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTagAlgo[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_BTagPhys[kMaxGenJet];   //[GenJet_]
   UInt_t          GenJet_TauTag[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_TauWeight[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_Charge[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_EhadOverEem[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NCharged[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NNeutrals[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_Beta[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_BetaStar[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_MeanSqDeltaR[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_PTD[kMaxGenJet];   //[GenJet_]
   Float_t         GenJet_FracPt[kMaxGenJet][5];   //[GenJet_]
   Float_t         GenJet_Tau[kMaxGenJet][5];   //[GenJet_]
   // TLorentzVector  GenJet_SoftDroppedJet[kMaxGenJet];
   // TLorentzVector  GenJet_SoftDroppedSubJet1[kMaxGenJet];
   // TLorentzVector  GenJet_SoftDroppedSubJet2[kMaxGenJet];
   // TLorentzVector  GenJet_TrimmedP4[5][kMaxGenJet];
   // TLorentzVector  GenJet_PrunedP4[5][kMaxGenJet];
   // TLorentzVector  GenJet_SoftDroppedP4[5][kMaxGenJet];
   Int_t           GenJet_NSubJetsTrimmed[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NSubJetsPruned[kMaxGenJet];   //[GenJet_]
   Int_t           GenJet_NSubJetsSoftDropped[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge23[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge34[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge45[kMaxGenJet];   //[GenJet_]
   Double_t        GenJet_ExclYmerge56[kMaxGenJet];   //[GenJet_]
   // TRefArray       GenJet_Constituents[kMaxGenJet];
   // TRefArray       GenJet_Particles[kMaxGenJet];
   // TLorentzVector  GenJet_Area[kMaxGenJet];
   Int_t           GenJet_size;
   Int_t           GenMissingET_;
   UInt_t          GenMissingET_fUniqueID[kMaxGenMissingET];   //[GenMissingET_]
   UInt_t          GenMissingET_fBits[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_MET[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_Eta[kMaxGenMissingET];   //[GenMissingET_]
   Float_t         GenMissingET_Phi[kMaxGenMissingET];   //[GenMissingET_]
   Int_t           GenMissingET_size;
   Int_t           Jet_;
   UInt_t          Jet_fUniqueID[kMaxJet];   //[Jet_]
   UInt_t          Jet_fBits[kMaxJet];   //[Jet_]
   Float_t         Jet_PT[kMaxJet];   //[Jet_]
   Float_t         Jet_Eta[kMaxJet];   //[Jet_]
   Float_t         Jet_Phi[kMaxJet];   //[Jet_]
   Float_t         Jet_T[kMaxJet];   //[Jet_]
   Float_t         Jet_Mass[kMaxJet];   //[Jet_]
   Float_t         Jet_DeltaEta[kMaxJet];   //[Jet_]
   Float_t         Jet_DeltaPhi[kMaxJet];   //[Jet_]
   UInt_t          Jet_Flavor[kMaxJet];   //[Jet_]
   UInt_t          Jet_FlavorAlgo[kMaxJet];   //[Jet_]
   UInt_t          Jet_FlavorPhys[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTag[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTagAlgo[kMaxJet];   //[Jet_]
   UInt_t          Jet_BTagPhys[kMaxJet];   //[Jet_]
   UInt_t          Jet_TauTag[kMaxJet];   //[Jet_]
   Float_t         Jet_TauWeight[kMaxJet];   //[Jet_]
   Int_t           Jet_Charge[kMaxJet];   //[Jet_]
   Float_t         Jet_EhadOverEem[kMaxJet];   //[Jet_]
   Int_t           Jet_NCharged[kMaxJet];   //[Jet_]
   Int_t           Jet_NNeutrals[kMaxJet];   //[Jet_]
   Float_t         Jet_Beta[kMaxJet];   //[Jet_]
   Float_t         Jet_BetaStar[kMaxJet];   //[Jet_]
   Float_t         Jet_MeanSqDeltaR[kMaxJet];   //[Jet_]
   Float_t         Jet_PTD[kMaxJet];   //[Jet_]
   Float_t         Jet_FracPt[kMaxJet][5];   //[Jet_]
   Float_t         Jet_Tau[kMaxJet][5];   //[Jet_]
   // TLorentzVector  Jet_SoftDroppedJet[kMaxJet];
   // TLorentzVector  Jet_SoftDroppedSubJet1[kMaxJet];
   // TLorentzVector  Jet_SoftDroppedSubJet2[kMaxJet];
   // TLorentzVector  Jet_TrimmedP4[5][kMaxJet];
   // TLorentzVector  Jet_PrunedP4[5][kMaxJet];
   // TLorentzVector  Jet_SoftDroppedP4[5][kMaxJet];
   Int_t           Jet_NSubJetsTrimmed[kMaxJet];   //[Jet_]
   Int_t           Jet_NSubJetsPruned[kMaxJet];   //[Jet_]
   Int_t           Jet_NSubJetsSoftDropped[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge23[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge34[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge45[kMaxJet];   //[Jet_]
   Double_t        Jet_ExclYmerge56[kMaxJet];   //[Jet_]
   // TRefArray       Jet_Constituents[kMaxJet];
   // TRefArray       Jet_Particles[kMaxJet];
   // TLorentzVector  Jet_Area[kMaxJet];
   Int_t           Jet_size;
   Int_t           Electron_;
   UInt_t          Electron_fUniqueID[kMaxElectron];   //[Electron_]
   UInt_t          Electron_fBits[kMaxElectron];   //[Electron_]
   Float_t         Electron_PT[kMaxElectron];   //[Electron_]
   Float_t         Electron_Eta[kMaxElectron];   //[Electron_]
   Float_t         Electron_Phi[kMaxElectron];   //[Electron_]
   Float_t         Electron_T[kMaxElectron];   //[Electron_]
   Int_t           Electron_Charge[kMaxElectron];   //[Electron_]
   Float_t         Electron_EhadOverEem[kMaxElectron];   //[Electron_]
   // TRef            Electron_Particle[kMaxElectron];
   Float_t         Electron_IsolationVar[kMaxElectron];   //[Electron_]
   Float_t         Electron_IsolationVarRhoCorr[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtCharged[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtNeutral[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPtChargedPU[kMaxElectron];   //[Electron_]
   Float_t         Electron_SumPt[kMaxElectron];   //[Electron_]
   Float_t         Electron_D0[kMaxElectron];   //[Electron_]
   Float_t         Electron_DZ[kMaxElectron];   //[Electron_]
   Float_t         Electron_ErrorD0[kMaxElectron];   //[Electron_]
   Float_t         Electron_ErrorDZ[kMaxElectron];   //[Electron_]
   Int_t           Electron_size;
   Int_t           Photon_;
   UInt_t          Photon_fUniqueID[kMaxPhoton];   //[Photon_]
   UInt_t          Photon_fBits[kMaxPhoton];   //[Photon_]
   Float_t         Photon_PT[kMaxPhoton];   //[Photon_]
   Float_t         Photon_Eta[kMaxPhoton];   //[Photon_]
   Float_t         Photon_Phi[kMaxPhoton];   //[Photon_]
   Float_t         Photon_E[kMaxPhoton];   //[Photon_]
   Float_t         Photon_T[kMaxPhoton];   //[Photon_]
   Float_t         Photon_EhadOverEem[kMaxPhoton];   //[Photon_]
   // TRefArray       Photon_Particles[kMaxPhoton];
   Float_t         Photon_IsolationVar[kMaxPhoton];   //[Photon_]
   Float_t         Photon_IsolationVarRhoCorr[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtCharged[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtNeutral[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPtChargedPU[kMaxPhoton];   //[Photon_]
   Float_t         Photon_SumPt[kMaxPhoton];   //[Photon_]
   Int_t           Photon_Status[kMaxPhoton];   //[Photon_]
   Int_t           Photon_size;
   Int_t           Muon_;
   UInt_t          Muon_fUniqueID[kMaxMuon];   //[Muon_]
   UInt_t          Muon_fBits[kMaxMuon];   //[Muon_]
   Float_t         Muon_PT[kMaxMuon];   //[Muon_]
   Float_t         Muon_Eta[kMaxMuon];   //[Muon_]
   Float_t         Muon_Phi[kMaxMuon];   //[Muon_]
   Float_t         Muon_T[kMaxMuon];   //[Muon_]
   Int_t           Muon_Charge[kMaxMuon];   //[Muon_]
   // TRef            Muon_Particle[kMaxMuon];
   Float_t         Muon_IsolationVar[kMaxMuon];   //[Muon_]
   Float_t         Muon_IsolationVarRhoCorr[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtCharged[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtNeutral[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPtChargedPU[kMaxMuon];   //[Muon_]
   Float_t         Muon_SumPt[kMaxMuon];   //[Muon_]
   Float_t         Muon_D0[kMaxMuon];   //[Muon_]
   Float_t         Muon_DZ[kMaxMuon];   //[Muon_]
   Float_t         Muon_ErrorD0[kMaxMuon];   //[Muon_]
   Float_t         Muon_ErrorDZ[kMaxMuon];   //[Muon_]
   Int_t           Muon_size;
   Int_t           FatJet_;
   UInt_t          FatJet_fUniqueID[kMaxFatJet];   //[FatJet_]
   UInt_t          FatJet_fBits[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_PT[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_Eta[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_Phi[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_T[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_Mass[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_DeltaEta[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_DeltaPhi[kMaxFatJet];   //[FatJet_]
   UInt_t          FatJet_Flavor[kMaxFatJet];   //[FatJet_]
   UInt_t          FatJet_FlavorAlgo[kMaxFatJet];   //[FatJet_]
   UInt_t          FatJet_FlavorPhys[kMaxFatJet];   //[FatJet_]
   UInt_t          FatJet_BTag[kMaxFatJet];   //[FatJet_]
   UInt_t          FatJet_BTagAlgo[kMaxFatJet];   //[FatJet_]
   UInt_t          FatJet_BTagPhys[kMaxFatJet];   //[FatJet_]
   UInt_t          FatJet_TauTag[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_TauWeight[kMaxFatJet];   //[FatJet_]
   Int_t           FatJet_Charge[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_EhadOverEem[kMaxFatJet];   //[FatJet_]
   Int_t           FatJet_NCharged[kMaxFatJet];   //[FatJet_]
   Int_t           FatJet_NNeutrals[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_Beta[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_BetaStar[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_MeanSqDeltaR[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_PTD[kMaxFatJet];   //[FatJet_]
   Float_t         FatJet_FracPt[kMaxFatJet][5];   //[FatJet_]
   Float_t         FatJet_Tau[kMaxFatJet][5];   //[FatJet_]
   // TLorentzVector  FatJet_SoftDroppedJet[kMaxFatJet];
   // TLorentzVector  FatJet_SoftDroppedSubJet1[kMaxFatJet];
   // TLorentzVector  FatJet_SoftDroppedSubJet2[kMaxFatJet];
   // TLorentzVector  FatJet_TrimmedP4[5][kMaxFatJet];
   // TLorentzVector  FatJet_PrunedP4[5][kMaxFatJet];
   // TLorentzVector  FatJet_SoftDroppedP4[5][kMaxFatJet];
   Int_t           FatJet_NSubJetsTrimmed[kMaxFatJet];   //[FatJet_]
   Int_t           FatJet_NSubJetsPruned[kMaxFatJet];   //[FatJet_]
   Int_t           FatJet_NSubJetsSoftDropped[kMaxFatJet];   //[FatJet_]
   Double_t        FatJet_ExclYmerge23[kMaxFatJet];   //[FatJet_]
   Double_t        FatJet_ExclYmerge34[kMaxFatJet];   //[FatJet_]
   Double_t        FatJet_ExclYmerge45[kMaxFatJet];   //[FatJet_]
   Double_t        FatJet_ExclYmerge56[kMaxFatJet];   //[FatJet_]
   // TRefArray       FatJet_Constituents[kMaxFatJet];
   // TRefArray       FatJet_Particles[kMaxFatJet];
   // TLorentzVector  FatJet_Area[kMaxFatJet];
   Int_t           FatJet_size;
   Int_t           MissingET_;
   UInt_t          MissingET_fUniqueID[kMaxMissingET];   //[MissingET_]
   UInt_t          MissingET_fBits[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_MET[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_Eta[kMaxMissingET];   //[MissingET_]
   Float_t         MissingET_Phi[kMaxMissingET];   //[MissingET_]
   Int_t           MissingET_size;
   Int_t           ScalarHT_;
   UInt_t          ScalarHT_fUniqueID[kMaxScalarHT];   //[ScalarHT_]
   UInt_t          ScalarHT_fBits[kMaxScalarHT];   //[ScalarHT_]
   Float_t         ScalarHT_HT[kMaxScalarHT];   //[ScalarHT_]
   Int_t           ScalarHT_size;

   // List of branches
   TBranch        *b_Event_;   //!
   TBranch        *b_Event_fUniqueID;   //!
   TBranch        *b_Event_fBits;   //!
   TBranch        *b_Event_Number;   //!
   TBranch        *b_Event_ReadTime;   //!
   TBranch        *b_Event_ProcTime;   //!
   TBranch        *b_Event_ProcessID;   //!
   TBranch        *b_Event_MPI;   //!
   TBranch        *b_Event_Weight;   //!
   TBranch        *b_Event_CrossSection;   //!
   TBranch        *b_Event_CrossSectionError;   //!
   TBranch        *b_Event_Scale;   //!
   TBranch        *b_Event_AlphaQED;   //!
   TBranch        *b_Event_AlphaQCD;   //!
   TBranch        *b_Event_ID1;   //!
   TBranch        *b_Event_ID2;   //!
   TBranch        *b_Event_X1;   //!
   TBranch        *b_Event_X2;   //!
   TBranch        *b_Event_ScalePDF;   //!
   TBranch        *b_Event_PDF1;   //!
   TBranch        *b_Event_PDF2;   //!
   TBranch        *b_Event_size;   //!
   TBranch        *b_EventLHEF_;   //!
   TBranch        *b_EventLHEF_fUniqueID;   //!
   TBranch        *b_EventLHEF_fBits;   //!
   TBranch        *b_EventLHEF_Number;   //!
   TBranch        *b_EventLHEF_ReadTime;   //!
   TBranch        *b_EventLHEF_ProcTime;   //!
   TBranch        *b_EventLHEF_ProcessID;   //!
   TBranch        *b_EventLHEF_Weight;   //!
   TBranch        *b_EventLHEF_CrossSection;   //!
   TBranch        *b_EventLHEF_ScalePDF;   //!
   TBranch        *b_EventLHEF_AlphaQED;   //!
   TBranch        *b_EventLHEF_AlphaQCD;   //!
   TBranch        *b_EventLHEF_size;   //!
   TBranch        *b_WeightLHEF_;   //!
   TBranch        *b_WeightLHEF_fUniqueID;   //!
   TBranch        *b_WeightLHEF_fBits;   //!
   TBranch        *b_WeightLHEF_ID;   //!
   TBranch        *b_WeightLHEF_Weight;   //!
   TBranch        *b_WeightLHEF_size;   //!
   TBranch        *b_Particle_;   //!
   TBranch        *b_Particle_fUniqueID;   //!
   TBranch        *b_Particle_fBits;   //!
   TBranch        *b_Particle_PID;   //!
   TBranch        *b_Particle_Status;   //!
   TBranch        *b_Particle_IsPU;   //!
   TBranch        *b_Particle_M1;   //!
   TBranch        *b_Particle_M2;   //!
   TBranch        *b_Particle_D1;   //!
   TBranch        *b_Particle_D2;   //!
   TBranch        *b_Particle_Charge;   //!
   TBranch        *b_Particle_Mass;   //!
   TBranch        *b_Particle_E;   //!
   TBranch        *b_Particle_Px;   //!
   TBranch        *b_Particle_Py;   //!
   TBranch        *b_Particle_Pz;   //!
   TBranch        *b_Particle_P;   //!
   TBranch        *b_Particle_PT;   //!
   TBranch        *b_Particle_Eta;   //!
   TBranch        *b_Particle_Phi;   //!
   TBranch        *b_Particle_Rapidity;   //!
   TBranch        *b_Particle_CtgTheta;   //!
   TBranch        *b_Particle_D0;   //!
   TBranch        *b_Particle_DZ;   //!
   TBranch        *b_Particle_T;   //!
   TBranch        *b_Particle_X;   //!
   TBranch        *b_Particle_Y;   //!
   TBranch        *b_Particle_Z;   //!
   TBranch        *b_Particle_size;   //!
   TBranch        *b_Track_;   //!
   TBranch        *b_Track_fUniqueID;   //!
   TBranch        *b_Track_fBits;   //!
   TBranch        *b_Track_PID;   //!
   TBranch        *b_Track_Charge;   //!
   TBranch        *b_Track_P;   //!
   TBranch        *b_Track_PT;   //!
   TBranch        *b_Track_Eta;   //!
   TBranch        *b_Track_Phi;   //!
   TBranch        *b_Track_CtgTheta;   //!
   TBranch        *b_Track_EtaOuter;   //!
   TBranch        *b_Track_PhiOuter;   //!
   TBranch        *b_Track_T;   //!
   TBranch        *b_Track_X;   //!
   TBranch        *b_Track_Y;   //!
   TBranch        *b_Track_Z;   //!
   TBranch        *b_Track_TOuter;   //!
   TBranch        *b_Track_XOuter;   //!
   TBranch        *b_Track_YOuter;   //!
   TBranch        *b_Track_ZOuter;   //!
   TBranch        *b_Track_Xd;   //!
   TBranch        *b_Track_Yd;   //!
   TBranch        *b_Track_Zd;   //!
   TBranch        *b_Track_L;   //!
   TBranch        *b_Track_D0;   //!
   TBranch        *b_Track_DZ;   //!
   TBranch        *b_Track_ErrorP;   //!
   TBranch        *b_Track_ErrorPT;   //!
   TBranch        *b_Track_ErrorPhi;   //!
   TBranch        *b_Track_ErrorCtgTheta;   //!
   TBranch        *b_Track_ErrorT;   //!
   TBranch        *b_Track_ErrorD0;   //!
   TBranch        *b_Track_ErrorDZ;   //!
   // TBranch        *b_Track_Particle;   //!
   TBranch        *b_Track_VertexIndex;   //!
   TBranch        *b_Track_size;   //!
   TBranch        *b_Tower_;   //!
   TBranch        *b_Tower_fUniqueID;   //!
   TBranch        *b_Tower_fBits;   //!
   TBranch        *b_Tower_ET;   //!
   TBranch        *b_Tower_Eta;   //!
   TBranch        *b_Tower_Phi;   //!
   TBranch        *b_Tower_E;   //!
   TBranch        *b_Tower_T;   //!
   TBranch        *b_Tower_NTimeHits;   //!
   TBranch        *b_Tower_Eem;   //!
   TBranch        *b_Tower_Ehad;   //!
   TBranch        *b_Tower_Edges;   //!
   // TBranch        *b_Tower_Particles;   //!
   TBranch        *b_Tower_size;   //!
   TBranch        *b_EFlowTrack_;   //!
   TBranch        *b_EFlowTrack_fUniqueID;   //!
   TBranch        *b_EFlowTrack_fBits;   //!
   TBranch        *b_EFlowTrack_PID;   //!
   TBranch        *b_EFlowTrack_Charge;   //!
   TBranch        *b_EFlowTrack_P;   //!
   TBranch        *b_EFlowTrack_PT;   //!
   TBranch        *b_EFlowTrack_Eta;   //!
   TBranch        *b_EFlowTrack_Phi;   //!
   TBranch        *b_EFlowTrack_CtgTheta;   //!
   TBranch        *b_EFlowTrack_EtaOuter;   //!
   TBranch        *b_EFlowTrack_PhiOuter;   //!
   TBranch        *b_EFlowTrack_T;   //!
   TBranch        *b_EFlowTrack_X;   //!
   TBranch        *b_EFlowTrack_Y;   //!
   TBranch        *b_EFlowTrack_Z;   //!
   TBranch        *b_EFlowTrack_TOuter;   //!
   TBranch        *b_EFlowTrack_XOuter;   //!
   TBranch        *b_EFlowTrack_YOuter;   //!
   TBranch        *b_EFlowTrack_ZOuter;   //!
   TBranch        *b_EFlowTrack_Xd;   //!
   TBranch        *b_EFlowTrack_Yd;   //!
   TBranch        *b_EFlowTrack_Zd;   //!
   TBranch        *b_EFlowTrack_L;   //!
   TBranch        *b_EFlowTrack_D0;   //!
   TBranch        *b_EFlowTrack_DZ;   //!
   TBranch        *b_EFlowTrack_ErrorP;   //!
   TBranch        *b_EFlowTrack_ErrorPT;   //!
   TBranch        *b_EFlowTrack_ErrorPhi;   //!
   TBranch        *b_EFlowTrack_ErrorCtgTheta;   //!
   TBranch        *b_EFlowTrack_ErrorT;   //!
   TBranch        *b_EFlowTrack_ErrorD0;   //!
   TBranch        *b_EFlowTrack_ErrorDZ;   //!
   // TBranch        *b_EFlowTrack_Particle;   //!
   TBranch        *b_EFlowTrack_VertexIndex;   //!
   TBranch        *b_EFlowTrack_size;   //!
   TBranch        *b_EFlowPhoton_;   //!
   TBranch        *b_EFlowPhoton_fUniqueID;   //!
   TBranch        *b_EFlowPhoton_fBits;   //!
   TBranch        *b_EFlowPhoton_ET;   //!
   TBranch        *b_EFlowPhoton_Eta;   //!
   TBranch        *b_EFlowPhoton_Phi;   //!
   TBranch        *b_EFlowPhoton_E;   //!
   TBranch        *b_EFlowPhoton_T;   //!
   TBranch        *b_EFlowPhoton_NTimeHits;   //!
   TBranch        *b_EFlowPhoton_Eem;   //!
   TBranch        *b_EFlowPhoton_Ehad;   //!
   TBranch        *b_EFlowPhoton_Edges;   //!
   // TBranch        *b_EFlowPhoton_Particles;   //!
   TBranch        *b_EFlowPhoton_size;   //!
   TBranch        *b_EFlowNeutralHadron_;   //!
   TBranch        *b_EFlowNeutralHadron_fUniqueID;   //!
   TBranch        *b_EFlowNeutralHadron_fBits;   //!
   TBranch        *b_EFlowNeutralHadron_ET;   //!
   TBranch        *b_EFlowNeutralHadron_Eta;   //!
   TBranch        *b_EFlowNeutralHadron_Phi;   //!
   TBranch        *b_EFlowNeutralHadron_E;   //!
   TBranch        *b_EFlowNeutralHadron_T;   //!
   TBranch        *b_EFlowNeutralHadron_NTimeHits;   //!
   TBranch        *b_EFlowNeutralHadron_Eem;   //!
   TBranch        *b_EFlowNeutralHadron_Ehad;   //!
   TBranch        *b_EFlowNeutralHadron_Edges;   //!
   // TBranch        *b_EFlowNeutralHadron_Particles;   //!
   TBranch        *b_EFlowNeutralHadron_size;   //!
   TBranch        *b_GenJet_;   //!
   TBranch        *b_GenJet_fUniqueID;   //!
   TBranch        *b_GenJet_fBits;   //!
   TBranch        *b_GenJet_PT;   //!
   TBranch        *b_GenJet_Eta;   //!
   TBranch        *b_GenJet_Phi;   //!
   TBranch        *b_GenJet_T;   //!
   TBranch        *b_GenJet_Mass;   //!
   TBranch        *b_GenJet_DeltaEta;   //!
   TBranch        *b_GenJet_DeltaPhi;   //!
   TBranch        *b_GenJet_Flavor;   //!
   TBranch        *b_GenJet_FlavorAlgo;   //!
   TBranch        *b_GenJet_FlavorPhys;   //!
   TBranch        *b_GenJet_BTag;   //!
   TBranch        *b_GenJet_BTagAlgo;   //!
   TBranch        *b_GenJet_BTagPhys;   //!
   TBranch        *b_GenJet_TauTag;   //!
   TBranch        *b_GenJet_TauWeight;   //!
   TBranch        *b_GenJet_Charge;   //!
   TBranch        *b_GenJet_EhadOverEem;   //!
   TBranch        *b_GenJet_NCharged;   //!
   TBranch        *b_GenJet_NNeutrals;   //!
   TBranch        *b_GenJet_Beta;   //!
   TBranch        *b_GenJet_BetaStar;   //!
   TBranch        *b_GenJet_MeanSqDeltaR;   //!
   TBranch        *b_GenJet_PTD;   //!
   TBranch        *b_GenJet_FracPt;   //!
   TBranch        *b_GenJet_Tau;   //!
   TBranch        *b_GenJet_SoftDroppedJet;   //!
   TBranch        *b_GenJet_SoftDroppedSubJet1;   //!
   TBranch        *b_GenJet_SoftDroppedSubJet2;   //!
   TBranch        *b_GenJet_TrimmedP4;   //!
   TBranch        *b_GenJet_PrunedP4;   //!
   TBranch        *b_GenJet_SoftDroppedP4;   //!
   TBranch        *b_GenJet_NSubJetsTrimmed;   //!
   TBranch        *b_GenJet_NSubJetsPruned;   //!
   TBranch        *b_GenJet_NSubJetsSoftDropped;   //!
   TBranch        *b_GenJet_ExclYmerge23;   //!
   TBranch        *b_GenJet_ExclYmerge34;   //!
   TBranch        *b_GenJet_ExclYmerge45;   //!
   TBranch        *b_GenJet_ExclYmerge56;   //!
   // TBranch        *b_GenJet_Constituents;   //!
   // TBranch        *b_GenJet_Particles;   //!
   TBranch        *b_GenJet_Area;   //!
   TBranch        *b_GenJet_size;   //!
   TBranch        *b_GenMissingET_;   //!
   TBranch        *b_GenMissingET_fUniqueID;   //!
   TBranch        *b_GenMissingET_fBits;   //!
   TBranch        *b_GenMissingET_MET;   //!
   TBranch        *b_GenMissingET_Eta;   //!
   TBranch        *b_GenMissingET_Phi;   //!
   TBranch        *b_GenMissingET_size;   //!
   TBranch        *b_Jet_;   //!
   TBranch        *b_Jet_fUniqueID;   //!
   TBranch        *b_Jet_fBits;   //!
   TBranch        *b_Jet_PT;   //!
   TBranch        *b_Jet_Eta;   //!
   TBranch        *b_Jet_Phi;   //!
   TBranch        *b_Jet_T;   //!
   TBranch        *b_Jet_Mass;   //!
   TBranch        *b_Jet_DeltaEta;   //!
   TBranch        *b_Jet_DeltaPhi;   //!
   TBranch        *b_Jet_Flavor;   //!
   TBranch        *b_Jet_FlavorAlgo;   //!
   TBranch        *b_Jet_FlavorPhys;   //!
   TBranch        *b_Jet_BTag;   //!
   TBranch        *b_Jet_BTagAlgo;   //!
   TBranch        *b_Jet_BTagPhys;   //!
   TBranch        *b_Jet_TauTag;   //!
   TBranch        *b_Jet_TauWeight;   //!
   TBranch        *b_Jet_Charge;   //!
   TBranch        *b_Jet_EhadOverEem;   //!
   TBranch        *b_Jet_NCharged;   //!
   TBranch        *b_Jet_NNeutrals;   //!
   TBranch        *b_Jet_Beta;   //!
   TBranch        *b_Jet_BetaStar;   //!
   TBranch        *b_Jet_MeanSqDeltaR;   //!
   TBranch        *b_Jet_PTD;   //!
   TBranch        *b_Jet_FracPt;   //!
   TBranch        *b_Jet_Tau;   //!
   TBranch        *b_Jet_SoftDroppedJet;   //!
   TBranch        *b_Jet_SoftDroppedSubJet1;   //!
   TBranch        *b_Jet_SoftDroppedSubJet2;   //!
   TBranch        *b_Jet_TrimmedP4;   //!
   TBranch        *b_Jet_PrunedP4;   //!
   TBranch        *b_Jet_SoftDroppedP4;   //!
   TBranch        *b_Jet_NSubJetsTrimmed;   //!
   TBranch        *b_Jet_NSubJetsPruned;   //!
   TBranch        *b_Jet_NSubJetsSoftDropped;   //!
   TBranch        *b_Jet_ExclYmerge23;   //!
   TBranch        *b_Jet_ExclYmerge34;   //!
   TBranch        *b_Jet_ExclYmerge45;   //!
   TBranch        *b_Jet_ExclYmerge56;   //!
   // TBranch        *b_Jet_Constituents;   //!
   // TBranch        *b_Jet_Particles;   //!
   TBranch        *b_Jet_Area;   //!
   TBranch        *b_Jet_size;   //!
   TBranch        *b_Electron_;   //!
   TBranch        *b_Electron_fUniqueID;   //!
   TBranch        *b_Electron_fBits;   //!
   TBranch        *b_Electron_PT;   //!
   TBranch        *b_Electron_Eta;   //!
   TBranch        *b_Electron_Phi;   //!
   TBranch        *b_Electron_T;   //!
   TBranch        *b_Electron_Charge;   //!
   TBranch        *b_Electron_EhadOverEem;   //!
   // TBranch        *b_Electron_Particle;   //!
   TBranch        *b_Electron_IsolationVar;   //!
   TBranch        *b_Electron_IsolationVarRhoCorr;   //!
   TBranch        *b_Electron_SumPtCharged;   //!
   TBranch        *b_Electron_SumPtNeutral;   //!
   TBranch        *b_Electron_SumPtChargedPU;   //!
   TBranch        *b_Electron_SumPt;   //!
   TBranch        *b_Electron_D0;   //!
   TBranch        *b_Electron_DZ;   //!
   TBranch        *b_Electron_ErrorD0;   //!
   TBranch        *b_Electron_ErrorDZ;   //!
   TBranch        *b_Electron_size;   //!
   TBranch        *b_Photon_;   //!
   TBranch        *b_Photon_fUniqueID;   //!
   TBranch        *b_Photon_fBits;   //!
   TBranch        *b_Photon_PT;   //!
   TBranch        *b_Photon_Eta;   //!
   TBranch        *b_Photon_Phi;   //!
   TBranch        *b_Photon_E;   //!
   TBranch        *b_Photon_T;   //!
   TBranch        *b_Photon_EhadOverEem;   //!
   // TBranch        *b_Photon_Particles;   //!
   TBranch        *b_Photon_IsolationVar;   //!
   TBranch        *b_Photon_IsolationVarRhoCorr;   //!
   TBranch        *b_Photon_SumPtCharged;   //!
   TBranch        *b_Photon_SumPtNeutral;   //!
   TBranch        *b_Photon_SumPtChargedPU;   //!
   TBranch        *b_Photon_SumPt;   //!
   TBranch        *b_Photon_Status;   //!
   TBranch        *b_Photon_size;   //!
   TBranch        *b_Muon_;   //!
   TBranch        *b_Muon_fUniqueID;   //!
   TBranch        *b_Muon_fBits;   //!
   TBranch        *b_Muon_PT;   //!
   TBranch        *b_Muon_Eta;   //!
   TBranch        *b_Muon_Phi;   //!
   TBranch        *b_Muon_T;   //!
   TBranch        *b_Muon_Charge;   //!
   // TBranch        *b_Muon_Particle;   //!
   TBranch        *b_Muon_IsolationVar;   //!
   TBranch        *b_Muon_IsolationVarRhoCorr;   //!
   TBranch        *b_Muon_SumPtCharged;   //!
   TBranch        *b_Muon_SumPtNeutral;   //!
   TBranch        *b_Muon_SumPtChargedPU;   //!
   TBranch        *b_Muon_SumPt;   //!
   TBranch        *b_Muon_D0;   //!
   TBranch        *b_Muon_DZ;   //!
   TBranch        *b_Muon_ErrorD0;   //!
   TBranch        *b_Muon_ErrorDZ;   //!
   TBranch        *b_Muon_size;   //!
   TBranch        *b_FatJet_;   //!
   TBranch        *b_FatJet_fUniqueID;   //!
   TBranch        *b_FatJet_fBits;   //!
   TBranch        *b_FatJet_PT;   //!
   TBranch        *b_FatJet_Eta;   //!
   TBranch        *b_FatJet_Phi;   //!
   TBranch        *b_FatJet_T;   //!
   TBranch        *b_FatJet_Mass;   //!
   TBranch        *b_FatJet_DeltaEta;   //!
   TBranch        *b_FatJet_DeltaPhi;   //!
   TBranch        *b_FatJet_Flavor;   //!
   TBranch        *b_FatJet_FlavorAlgo;   //!
   TBranch        *b_FatJet_FlavorPhys;   //!
   TBranch        *b_FatJet_BTag;   //!
   TBranch        *b_FatJet_BTagAlgo;   //!
   TBranch        *b_FatJet_BTagPhys;   //!
   TBranch        *b_FatJet_TauTag;   //!
   TBranch        *b_FatJet_TauWeight;   //!
   TBranch        *b_FatJet_Charge;   //!
   TBranch        *b_FatJet_EhadOverEem;   //!
   TBranch        *b_FatJet_NCharged;   //!
   TBranch        *b_FatJet_NNeutrals;   //!
   TBranch        *b_FatJet_Beta;   //!
   TBranch        *b_FatJet_BetaStar;   //!
   TBranch        *b_FatJet_MeanSqDeltaR;   //!
   TBranch        *b_FatJet_PTD;   //!
   TBranch        *b_FatJet_FracPt;   //!
   TBranch        *b_FatJet_Tau;   //!
   TBranch        *b_FatJet_SoftDroppedJet;   //!
   TBranch        *b_FatJet_SoftDroppedSubJet1;   //!
   TBranch        *b_FatJet_SoftDroppedSubJet2;   //!
   TBranch        *b_FatJet_TrimmedP4;   //!
   TBranch        *b_FatJet_PrunedP4;   //!
   TBranch        *b_FatJet_SoftDroppedP4;   //!
   TBranch        *b_FatJet_NSubJetsTrimmed;   //!
   TBranch        *b_FatJet_NSubJetsPruned;   //!
   TBranch        *b_FatJet_NSubJetsSoftDropped;   //!
   TBranch        *b_FatJet_ExclYmerge23;   //!
   TBranch        *b_FatJet_ExclYmerge34;   //!
   TBranch        *b_FatJet_ExclYmerge45;   //!
   TBranch        *b_FatJet_ExclYmerge56;   //!
   // TBranch        *b_FatJet_Constituents;   //!
   // TBranch        *b_FatJet_Particles;   //!
   TBranch        *b_FatJet_Area;   //!
   TBranch        *b_FatJet_size;   //!
   TBranch        *b_MissingET_;   //!
   TBranch        *b_MissingET_fUniqueID;   //!
   TBranch        *b_MissingET_fBits;   //!
   TBranch        *b_MissingET_MET;   //!
   TBranch        *b_MissingET_Eta;   //!
   TBranch        *b_MissingET_Phi;   //!
   TBranch        *b_MissingET_size;   //!
   TBranch        *b_ScalarHT_;   //!
   TBranch        *b_ScalarHT_fUniqueID;   //!
   TBranch        *b_ScalarHT_fBits;   //!
   TBranch        *b_ScalarHT_HT;   //!
   TBranch        *b_ScalarHT_size;   //!
  
   // // Readers to access the data (delete the ones you do not need).
   // TTreeReaderArray<unsigned int> Event_fUniqueID = {fReader, "Event.fUniqueID"};
   // TTreeReaderArray<unsigned int> Event_fBits = {fReader, "Event.fBits"};
   // TTreeReaderArray<Long64_t> Event_Number = {fReader, "Event.Number"};
   // TTreeReaderArray<Float_t> Event_ReadTime = {fReader, "Event.ReadTime"};
   // TTreeReaderArray<Float_t> Event_ProcTime = {fReader, "Event.ProcTime"};
   // TTreeReaderArray<Int_t> Event_ProcessID = {fReader, "Event.ProcessID"};
   // TTreeReaderArray<Int_t> Event_MPI = {fReader, "Event.MPI"};
   // TTreeReaderArray<Float_t> Event_Weight = {fReader, "Event.Weight"};
   // TTreeReaderArray<Float_t> Event_Scale = {fReader, "Event.Scale"};
   // TTreeReaderArray<Float_t> Event_AlphaQED = {fReader, "Event.AlphaQED"};
   // TTreeReaderArray<Float_t> Event_AlphaQCD = {fReader, "Event.AlphaQCD"};
   // TTreeReaderArray<Int_t> Event_ID1 = {fReader, "Event.ID1"};
   // TTreeReaderArray<Int_t> Event_ID2 = {fReader, "Event.ID2"};
   // TTreeReaderArray<Float_t> Event_X1 = {fReader, "Event.X1"};
   // TTreeReaderArray<Float_t> Event_X2 = {fReader, "Event.X2"};
   // TTreeReaderArray<Float_t> Event_ScalePDF = {fReader, "Event.ScalePDF"};
   // TTreeReaderArray<Float_t> Event_PDF1 = {fReader, "Event.PDF1"};
   // TTreeReaderArray<Float_t> Event_PDF2 = {fReader, "Event.PDF2"};
   // TTreeReaderValue<Int_t> Event_size = {fReader, "Event_size"};
   // TTreeReaderArray<unsigned int> EventLHEF_fUniqueID = {fReader, "EventLHEF.fUniqueID"};
   // TTreeReaderArray<unsigned int> EventLHEF_fBits = {fReader, "EventLHEF.fBits"};
   // TTreeReaderArray<Long64_t> EventLHEF_Number = {fReader, "EventLHEF.Number"};
   // TTreeReaderArray<Float_t> EventLHEF_ReadTime = {fReader, "EventLHEF.ReadTime"};
   // TTreeReaderArray<Float_t> EventLHEF_ProcTime = {fReader, "EventLHEF.ProcTime"};
   // TTreeReaderArray<Int_t> EventLHEF_ProcessID = {fReader, "EventLHEF.ProcessID"};
   // TTreeReaderArray<Float_t> EventLHEF_Weight = {fReader, "EventLHEF.Weight"};
   // TTreeReaderArray<Float_t> EventLHEF_ScalePDF = {fReader, "EventLHEF.ScalePDF"};
   // TTreeReaderArray<Float_t> EventLHEF_AlphaQED = {fReader, "EventLHEF.AlphaQED"};
   // TTreeReaderArray<Float_t> EventLHEF_AlphaQCD = {fReader, "EventLHEF.AlphaQCD"};
   // TTreeReaderValue<Int_t> EventLHEF_size = {fReader, "EventLHEF_size"};
   // TTreeReaderArray<unsigned int> WeightLHEF_fUniqueID = {fReader, "WeightLHEF.fUniqueID"};
   // TTreeReaderArray<unsigned int> WeightLHEF_fBits = {fReader, "WeightLHEF.fBits"};
   // TTreeReaderArray<Int_t> WeightLHEF_ID = {fReader, "WeightLHEF.ID"};
   // TTreeReaderArray<Float_t> WeightLHEF_Weight = {fReader, "WeightLHEF.Weight"};
   // TTreeReaderValue<Int_t> WeightLHEF_size = {fReader, "WeightLHEF_size"};
   // TTreeReaderArray<unsigned int> Particle_fUniqueID = {fReader, "Particle.fUniqueID"};
   // TTreeReaderArray<unsigned int> Particle_fBits = {fReader, "Particle.fBits"};
   // TTreeReaderArray<Int_t> Particle_PID = {fReader, "Particle.PID"};
   // TTreeReaderArray<Int_t> Particle_Status = {fReader, "Particle.Status"};
   // TTreeReaderArray<Int_t> Particle_IsPU = {fReader, "Particle.IsPU"};
   // TTreeReaderArray<Int_t> Particle_M1 = {fReader, "Particle.M1"};
   // TTreeReaderArray<Int_t> Particle_M2 = {fReader, "Particle.M2"};
   // TTreeReaderArray<Int_t> Particle_D1 = {fReader, "Particle.D1"};
   // TTreeReaderArray<Int_t> Particle_D2 = {fReader, "Particle.D2"};
   // TTreeReaderArray<Int_t> Particle_Charge = {fReader, "Particle.Charge"};
   // TTreeReaderArray<Float_t> Particle_Mass = {fReader, "Particle.Mass"};
   // TTreeReaderArray<Float_t> Particle_E = {fReader, "Particle.E"};
   // TTreeReaderArray<Float_t> Particle_Px = {fReader, "Particle.Px"};
   // TTreeReaderArray<Float_t> Particle_Py = {fReader, "Particle.Py"};
   // TTreeReaderArray<Float_t> Particle_Pz = {fReader, "Particle.Pz"};
   // TTreeReaderArray<Float_t> Particle_P = {fReader, "Particle.P"};
   // TTreeReaderArray<Float_t> Particle_PT = {fReader, "Particle.PT"};
   // TTreeReaderArray<Float_t> Particle_Eta = {fReader, "Particle.Eta"};
   // TTreeReaderArray<Float_t> Particle_Phi = {fReader, "Particle.Phi"};
   // TTreeReaderArray<Float_t> Particle_Rapidity = {fReader, "Particle.Rapidity"};
   // TTreeReaderArray<Float_t> Particle_CtgTheta = {fReader, "Particle.CtgTheta"};
   // TTreeReaderArray<Float_t> Particle_D0 = {fReader, "Particle.D0"};
   // TTreeReaderArray<Float_t> Particle_DZ = {fReader, "Particle.DZ"};
   // TTreeReaderArray<Float_t> Particle_T = {fReader, "Particle.T"};
   // TTreeReaderArray<Float_t> Particle_X = {fReader, "Particle.X"};
   // TTreeReaderArray<Float_t> Particle_Y = {fReader, "Particle.Y"};
   // TTreeReaderArray<Float_t> Particle_Z = {fReader, "Particle.Z"};
   // TTreeReaderValue<Int_t> Particle_size = {fReader, "Particle_size"};
   // TTreeReaderArray<unsigned int> Track_fUniqueID = {fReader, "Track.fUniqueID"};
   // TTreeReaderArray<unsigned int> Track_fBits = {fReader, "Track.fBits"};
   // TTreeReaderArray<Int_t> Track_PID = {fReader, "Track.PID"};
   // TTreeReaderArray<Int_t> Track_Charge = {fReader, "Track.Charge"};
   // TTreeReaderArray<Float_t> Track_P = {fReader, "Track.P"};
   // TTreeReaderArray<Float_t> Track_PT = {fReader, "Track.PT"};
   // TTreeReaderArray<Float_t> Track_Eta = {fReader, "Track.Eta"};
   // TTreeReaderArray<Float_t> Track_Phi = {fReader, "Track.Phi"};
   // TTreeReaderArray<Float_t> Track_CtgTheta = {fReader, "Track.CtgTheta"};
   // TTreeReaderArray<Float_t> Track_EtaOuter = {fReader, "Track.EtaOuter"};
   // TTreeReaderArray<Float_t> Track_PhiOuter = {fReader, "Track.PhiOuter"};
   // TTreeReaderArray<Float_t> Track_T = {fReader, "Track.T"};
   // TTreeReaderArray<Float_t> Track_X = {fReader, "Track.X"};
   // TTreeReaderArray<Float_t> Track_Y = {fReader, "Track.Y"};
   // TTreeReaderArray<Float_t> Track_Z = {fReader, "Track.Z"};
   // TTreeReaderArray<Float_t> Track_TOuter = {fReader, "Track.TOuter"};
   // TTreeReaderArray<Float_t> Track_XOuter = {fReader, "Track.XOuter"};
   // TTreeReaderArray<Float_t> Track_YOuter = {fReader, "Track.YOuter"};
   // TTreeReaderArray<Float_t> Track_ZOuter = {fReader, "Track.ZOuter"};
   // TTreeReaderArray<Float_t> Track_Xd = {fReader, "Track.Xd"};
   // TTreeReaderArray<Float_t> Track_Yd = {fReader, "Track.Yd"};
   // TTreeReaderArray<Float_t> Track_Zd = {fReader, "Track.Zd"};
   // TTreeReaderArray<Float_t> Track_L = {fReader, "Track.L"};
   // TTreeReaderArray<Float_t> Track_D0 = {fReader, "Track.D0"};
   // TTreeReaderArray<Float_t> Track_DZ = {fReader, "Track.DZ"};
   // TTreeReaderArray<Float_t> Track_ErrorP = {fReader, "Track.ErrorP"};
   // TTreeReaderArray<Float_t> Track_ErrorPT = {fReader, "Track.ErrorPT"};
   // TTreeReaderArray<Float_t> Track_ErrorPhi = {fReader, "Track.ErrorPhi"};
   // TTreeReaderArray<Float_t> Track_ErrorCtgTheta = {fReader, "Track.ErrorCtgTheta"};
   // TTreeReaderArray<Float_t> Track_ErrorT = {fReader, "Track.ErrorT"};
   // TTreeReaderArray<Float_t> Track_ErrorD0 = {fReader, "Track.ErrorD0"};
   // TTreeReaderArray<Float_t> Track_ErrorDZ = {fReader, "Track.ErrorDZ"};
   // // TTreeReaderArray<TRef> Track_Particle = {fReader, "Track.Particle"};
   // TTreeReaderArray<Int_t> Track_VertexIndex = {fReader, "Track.VertexIndex"};
   // TTreeReaderValue<Int_t> Track_size = {fReader, "Track_size"};
   // TTreeReaderArray<unsigned int> Tower_fUniqueID = {fReader, "Tower.fUniqueID"};
   // TTreeReaderArray<unsigned int> Tower_fBits = {fReader, "Tower.fBits"};
   // TTreeReaderArray<Float_t> Tower_ET = {fReader, "Tower.ET"};
   // TTreeReaderArray<Float_t> Tower_Eta = {fReader, "Tower.Eta"};
   // TTreeReaderArray<Float_t> Tower_Phi = {fReader, "Tower.Phi"};
   // TTreeReaderArray<Float_t> Tower_E = {fReader, "Tower.E"};
   // TTreeReaderArray<Float_t> Tower_T = {fReader, "Tower.T"};
   // TTreeReaderArray<Int_t> Tower_NTimeHits = {fReader, "Tower.NTimeHits"};
   // TTreeReaderArray<Float_t> Tower_Eem = {fReader, "Tower.Eem"};
   // TTreeReaderArray<Float_t> Tower_Ehad = {fReader, "Tower.Ehad"};
   // // TTreeReaderArray<TRefArray> Tower_Particles = {fReader, "Tower.Particles"};
   // TTreeReaderValue<Int_t> Tower_size = {fReader, "Tower_size"};
   // TTreeReaderArray<unsigned int> EFlowTrack_fUniqueID = {fReader, "EFlowTrack.fUniqueID"};
   // TTreeReaderArray<unsigned int> EFlowTrack_fBits = {fReader, "EFlowTrack.fBits"};
   // TTreeReaderArray<Int_t> EFlowTrack_PID = {fReader, "EFlowTrack.PID"};
   // TTreeReaderArray<Int_t> EFlowTrack_Charge = {fReader, "EFlowTrack.Charge"};
   // TTreeReaderArray<Float_t> EFlowTrack_P = {fReader, "EFlowTrack.P"};
   // TTreeReaderArray<Float_t> EFlowTrack_PT = {fReader, "EFlowTrack.PT"};
   // TTreeReaderArray<Float_t> EFlowTrack_Eta = {fReader, "EFlowTrack.Eta"};
   // TTreeReaderArray<Float_t> EFlowTrack_Phi = {fReader, "EFlowTrack.Phi"};
   // TTreeReaderArray<Float_t> EFlowTrack_CtgTheta = {fReader, "EFlowTrack.CtgTheta"};
   // TTreeReaderArray<Float_t> EFlowTrack_EtaOuter = {fReader, "EFlowTrack.EtaOuter"};
   // TTreeReaderArray<Float_t> EFlowTrack_PhiOuter = {fReader, "EFlowTrack.PhiOuter"};
   // TTreeReaderArray<Float_t> EFlowTrack_T = {fReader, "EFlowTrack.T"};
   // TTreeReaderArray<Float_t> EFlowTrack_X = {fReader, "EFlowTrack.X"};
   // TTreeReaderArray<Float_t> EFlowTrack_Y = {fReader, "EFlowTrack.Y"};
   // TTreeReaderArray<Float_t> EFlowTrack_Z = {fReader, "EFlowTrack.Z"};
   // TTreeReaderArray<Float_t> EFlowTrack_TOuter = {fReader, "EFlowTrack.TOuter"};
   // TTreeReaderArray<Float_t> EFlowTrack_XOuter = {fReader, "EFlowTrack.XOuter"};
   // TTreeReaderArray<Float_t> EFlowTrack_YOuter = {fReader, "EFlowTrack.YOuter"};
   // TTreeReaderArray<Float_t> EFlowTrack_ZOuter = {fReader, "EFlowTrack.ZOuter"};
   // TTreeReaderArray<Float_t> EFlowTrack_Xd = {fReader, "EFlowTrack.Xd"};
   // TTreeReaderArray<Float_t> EFlowTrack_Yd = {fReader, "EFlowTrack.Yd"};
   // TTreeReaderArray<Float_t> EFlowTrack_Zd = {fReader, "EFlowTrack.Zd"};
   // TTreeReaderArray<Float_t> EFlowTrack_L = {fReader, "EFlowTrack.L"};
   // TTreeReaderArray<Float_t> EFlowTrack_D0 = {fReader, "EFlowTrack.D0"};
   // TTreeReaderArray<Float_t> EFlowTrack_DZ = {fReader, "EFlowTrack.DZ"};
   // TTreeReaderArray<Float_t> EFlowTrack_ErrorP = {fReader, "EFlowTrack.ErrorP"};
   // TTreeReaderArray<Float_t> EFlowTrack_ErrorPT = {fReader, "EFlowTrack.ErrorPT"};
   // TTreeReaderArray<Float_t> EFlowTrack_ErrorPhi = {fReader, "EFlowTrack.ErrorPhi"};
   // TTreeReaderArray<Float_t> EFlowTrack_ErrorCtgTheta = {fReader, "EFlowTrack.ErrorCtgTheta"};
   // TTreeReaderArray<Float_t> EFlowTrack_ErrorT = {fReader, "EFlowTrack.ErrorT"};
   // TTreeReaderArray<Float_t> EFlowTrack_ErrorD0 = {fReader, "EFlowTrack.ErrorD0"};
   // TTreeReaderArray<Float_t> EFlowTrack_ErrorDZ = {fReader, "EFlowTrack.ErrorDZ"};
   // // TTreeReaderArray<TRef> EFlowTrack_Particle = {fReader, "EFlowTrack.Particle"};
   // TTreeReaderArray<Int_t> EFlowTrack_VertexIndex = {fReader, "EFlowTrack.VertexIndex"};
   // TTreeReaderValue<Int_t> EFlowTrack_size = {fReader, "EFlowTrack_size"};
   // TTreeReaderArray<unsigned int> EFlowPhoton_fUniqueID = {fReader, "EFlowPhoton.fUniqueID"};
   // TTreeReaderArray<unsigned int> EFlowPhoton_fBits = {fReader, "EFlowPhoton.fBits"};
   // TTreeReaderArray<Float_t> EFlowPhoton_ET = {fReader, "EFlowPhoton.ET"};
   // TTreeReaderArray<Float_t> EFlowPhoton_Eta = {fReader, "EFlowPhoton.Eta"};
   // TTreeReaderArray<Float_t> EFlowPhoton_Phi = {fReader, "EFlowPhoton.Phi"};
   // TTreeReaderArray<Float_t> EFlowPhoton_E = {fReader, "EFlowPhoton.E"};
   // TTreeReaderArray<Float_t> EFlowPhoton_T = {fReader, "EFlowPhoton.T"};
   // TTreeReaderArray<Int_t> EFlowPhoton_NTimeHits = {fReader, "EFlowPhoton.NTimeHits"};
   // TTreeReaderArray<Float_t> EFlowPhoton_Eem = {fReader, "EFlowPhoton.Eem"};
   // TTreeReaderArray<Float_t> EFlowPhoton_Ehad = {fReader, "EFlowPhoton.Ehad"};
   // // TTreeReaderArray<TRefArray> EFlowPhoton_Particles = {fReader, "EFlowPhoton.Particles"};
   // TTreeReaderValue<Int_t> EFlowPhoton_size = {fReader, "EFlowPhoton_size"};
   // TTreeReaderArray<unsigned int> EFlowNeutralHadron_fUniqueID = {fReader, "EFlowNeutralHadron.fUniqueID"};
   // TTreeReaderArray<unsigned int> EFlowNeutralHadron_fBits = {fReader, "EFlowNeutralHadron.fBits"};
   // TTreeReaderArray<Float_t> EFlowNeutralHadron_ET = {fReader, "EFlowNeutralHadron.ET"};
   // TTreeReaderArray<Float_t> EFlowNeutralHadron_Eta = {fReader, "EFlowNeutralHadron.Eta"};
   // TTreeReaderArray<Float_t> EFlowNeutralHadron_Phi = {fReader, "EFlowNeutralHadron.Phi"};
   // TTreeReaderArray<Float_t> EFlowNeutralHadron_E = {fReader, "EFlowNeutralHadron.E"};
   // TTreeReaderArray<Float_t> EFlowNeutralHadron_T = {fReader, "EFlowNeutralHadron.T"};
   // TTreeReaderArray<Int_t> EFlowNeutralHadron_NTimeHits = {fReader, "EFlowNeutralHadron.NTimeHits"};
   // TTreeReaderArray<Float_t> EFlowNeutralHadron_Eem = {fReader, "EFlowNeutralHadron.Eem"};
   // TTreeReaderArray<Float_t> EFlowNeutralHadron_Ehad = {fReader, "EFlowNeutralHadron.Ehad"};
   // // TTreeReaderArray<TRefArray> EFlowNeutralHadron_Particles = {fReader, "EFlowNeutralHadron.Particles"};
   // TTreeReaderValue<Int_t> EFlowNeutralHadron_size = {fReader, "EFlowNeutralHadron_size"};
   // // TTreeReaderArray<unsigned int> GenJet_fUniqueID = {fReader, "GenJet.fUniqueID"};
   // // TTreeReaderArray<unsigned int> GenJet_fBits = {fReader, "GenJet.fBits"};
   // // TTreeReaderArray<Float_t> GenJet_PT = {fReader, "GenJet.PT"};
   // // TTreeReaderArray<Float_t> GenJet_Eta = {fReader, "GenJet.Eta"};
   // // TTreeReaderArray<Float_t> GenJet_Phi = {fReader, "GenJet.Phi"};
   // // TTreeReaderArray<Float_t> GenJet_T = {fReader, "GenJet.T"};
   // // TTreeReaderArray<Float_t> GenJet_Mass = {fReader, "GenJet.Mass"};
   // // TTreeReaderArray<Float_t> GenJet_DeltaEta = {fReader, "GenJet.DeltaEta"};
   // // TTreeReaderArray<Float_t> GenJet_DeltaPhi = {fReader, "GenJet.DeltaPhi"};
   // // TTreeReaderArray<unsigned int> GenJet_Flavor = {fReader, "GenJet.Flavor"};
   // // TTreeReaderArray<unsigned int> GenJet_FlavorAlgo = {fReader, "GenJet.FlavorAlgo"};
   // // TTreeReaderArray<unsigned int> GenJet_FlavorPhys = {fReader, "GenJet.FlavorPhys"};
   // // TTreeReaderArray<unsigned int> GenJet_BTag = {fReader, "GenJet.BTag"};
   // // TTreeReaderArray<unsigned int> GenJet_BTagAlgo = {fReader, "GenJet.BTagAlgo"};
   // // TTreeReaderArray<unsigned int> GenJet_BTagPhys = {fReader, "GenJet.BTagPhys"};
   // // TTreeReaderArray<unsigned int> GenJet_TauTag = {fReader, "GenJet.TauTag"};
   // // TTreeReaderArray<Int_t> GenJet_Charge = {fReader, "GenJet.Charge"};
   // // TTreeReaderArray<Float_t> GenJet_EhadOverEem = {fReader, "GenJet.EhadOverEem"};
   // // TTreeReaderArray<Int_t> GenJet_NCharged = {fReader, "GenJet.NCharged"};
   // // TTreeReaderArray<Int_t> GenJet_NNeutrals = {fReader, "GenJet.NNeutrals"};
   // // TTreeReaderArray<Float_t> GenJet_Beta = {fReader, "GenJet.Beta"};
   // // TTreeReaderArray<Float_t> GenJet_BetaStar = {fReader, "GenJet.BetaStar"};
   // // TTreeReaderArray<Float_t> GenJet_MeanSqDeltaR = {fReader, "GenJet.MeanSqDeltaR"};
   // // TTreeReaderArray<Float_t> GenJet_PTD = {fReader, "GenJet.PTD"};
   // // TTreeReaderArray<unsigned int> GenJet_TrimmedP4 = {fReader, "GenJet.TrimmedP4[5]"};
   // // TTreeReaderArray<unsigned int> GenJet_PrunedP4 = {fReader, "GenJet.PrunedP4[5]"};
   // // TTreeReaderArray<unsigned int> GenJet_SoftDroppedP4 = {fReader, "GenJet.SoftDroppedP4[5]"};
   // // TTreeReaderArray<unsigned int> GenJet_NSubJetsTrimmed = {fReader, "GenJet.NSubJetsTrimmed"};
   // // TTreeReaderArray<Double_t> GenJet_NSubJetsPruned = {fReader, "GenJet.NSubJetsPruned"};
   // // TTreeReaderArray<Double_t> GenJet_NSubJetsSoftDropped = {fReader, "GenJet.NSubJetsSoftDropped"};
   // // TTreeReaderArray<Double_t> GenJet_Constituents = {fReader, "GenJet.Constituents"};
   // // // TTreeReaderArray<unsigned int> GenJet_Area_fUniqueID = {fReader, "GenJet.Area.fUniqueID"};
   // // // TTreeReaderArray<unsigned int> GenJet_Area_fBits = {fReader, "GenJet.Area.fBits"};
   // // // TTreeReaderArray<unsigned int> GenJet_Area_fP_fUniqueID = {fReader, "GenJet.Area.fP.fUniqueID"};
   // // // TTreeReaderArray<unsigned int> GenJet_Area_fP_fBits = {fReader, "GenJet.Area.fP.fBits"};
   // // // TTreeReaderArray<Double_t> GenJet_Area_fP_fX = {fReader, "GenJet.Area.fP.fX"};
   // // // TTreeReaderArray<Double_t> GenJet_Area_fP_fY = {fReader, "GenJet.Area.fP.fY"};
   // // // TTreeReaderArray<Double_t> GenJet_Area_fP_fZ = {fReader, "GenJet.Area.fP.fZ"};
   // // TTreeReaderValue<Int_t> GenJet_size = {fReader, "GenJet_size"};
   // // TTreeReaderArray<unsigned int> GenMissingET_fUniqueID = {fReader, "GenMissingET.fUniqueID"};
   // // TTreeReaderArray<unsigned int> GenMissingET_fBits = {fReader, "GenMissingET.fBits"};
   // // TTreeReaderArray<Float_t> GenMissingET_MET = {fReader, "GenMissingET.MET"};
   // // TTreeReaderArray<Float_t> GenMissingET_Eta = {fReader, "GenMissingET.Eta"};
   // // TTreeReaderArray<Float_t> GenMissingET_Phi = {fReader, "GenMissingET.Phi"};
   // // TTreeReaderValue<Int_t> GenMissingET_size = {fReader, "GenMissingET_size"};
   // // TTreeReaderArray<unsigned int> Jet_fUniqueID = {fReader, "Jet.fUniqueID"};
   // // TTreeReaderArray<unsigned int> Jet_fBits = {fReader, "Jet.fBits"};
   // // TTreeReaderArray<Float_t> Jet_PT = {fReader, "Jet.PT"};
   // // TTreeReaderArray<Float_t> Jet_Eta = {fReader, "Jet.Eta"};
   // // TTreeReaderArray<Float_t> Jet_Phi = {fReader, "Jet.Phi"};
   // // TTreeReaderArray<Float_t> Jet_T = {fReader, "Jet.T"};
   // // TTreeReaderArray<Float_t> Jet_Mass = {fReader, "Jet.Mass"};
   // // TTreeReaderArray<Float_t> Jet_DeltaEta = {fReader, "Jet.DeltaEta"};
   // // TTreeReaderArray<Float_t> Jet_DeltaPhi = {fReader, "Jet.DeltaPhi"};
   // // TTreeReaderArray<unsigned int> Jet_Flavor = {fReader, "Jet.Flavor"};
   // // TTreeReaderArray<unsigned int> Jet_FlavorAlgo = {fReader, "Jet.FlavorAlgo"};
   // // TTreeReaderArray<unsigned int> Jet_FlavorPhys = {fReader, "Jet.FlavorPhys"};
   // // TTreeReaderArray<unsigned int> Jet_BTag = {fReader, "Jet.BTag"};
   // // TTreeReaderArray<unsigned int> Jet_BTagAlgo = {fReader, "Jet.BTagAlgo"};
   // // TTreeReaderArray<unsigned int> Jet_BTagPhys = {fReader, "Jet.BTagPhys"};
   // // TTreeReaderArray<unsigned int> Jet_TauTag = {fReader, "Jet.TauTag"};
   // // TTreeReaderArray<Int_t> Jet_Charge = {fReader, "Jet.Charge"};
   // // TTreeReaderArray<Float_t> Jet_EhadOverEem = {fReader, "Jet.EhadOverEem"};
   // // TTreeReaderArray<Int_t> Jet_NCharged = {fReader, "Jet.NCharged"};
   // // TTreeReaderArray<Int_t> Jet_NNeutrals = {fReader, "Jet.NNeutrals"};
   // // TTreeReaderArray<Float_t> Jet_Beta = {fReader, "Jet.Beta"};
   // // TTreeReaderArray<Float_t> Jet_BetaStar = {fReader, "Jet.BetaStar"};
   // // TTreeReaderArray<Float_t> Jet_MeanSqDeltaR = {fReader, "Jet.MeanSqDeltaR"};
   // // TTreeReaderArray<Float_t> Jet_PTD = {fReader, "Jet.PTD"};
   // // TTreeReaderArray<unsigned int> Jet_TrimmedP4 = {fReader, "Jet.TrimmedP4[5]"};
   // // TTreeReaderArray<unsigned int> Jet_PrunedP4 = {fReader, "Jet.PrunedP4[5]"};
   // // TTreeReaderArray<unsigned int> Jet_SoftDroppedP4 = {fReader, "Jet.SoftDroppedP4[5]"};
   // // TTreeReaderArray<unsigned int> Jet_NSubJetsTrimmed = {fReader, "Jet.NSubJetsTrimmed"};
   // // TTreeReaderArray<Double_t> Jet_NSubJetsPruned = {fReader, "Jet.NSubJetsPruned"};
   // // TTreeReaderArray<Double_t> Jet_NSubJetsSoftDropped = {fReader, "Jet.NSubJetsSoftDropped"};
   // // TTreeReaderArray<Double_t> Jet_Constituents = {fReader, "Jet.Constituents"};
   // // // TTreeReaderArray<unsigned int> Jet_Area_fUniqueID = {fReader, "Jet.Area.fUniqueID"};
   // // // TTreeReaderArray<unsigned int> Jet_Area_fBits = {fReader, "Jet.Area.fBits"};
   // // // TTreeReaderArray<unsigned int> Jet_Area_fP_fUniqueID = {fReader, "Jet.Area.fP.fUniqueID"};
   // // // TTreeReaderArray<unsigned int> Jet_Area_fP_fBits = {fReader, "Jet.Area.fP.fBits"};
   // // // TTreeReaderArray<Double_t> Jet_Area_fP_fX = {fReader, "Jet.Area.fP.fX"};
   // // // TTreeReaderArray<Double_t> Jet_Area_fP_fY = {fReader, "Jet.Area.fP.fY"};
   // // // TTreeReaderArray<Double_t> Jet_Area_fP_fZ = {fReader, "Jet.Area.fP.fZ"};
   // // TTreeReaderValue<Int_t> Jet_size = {fReader, "Jet_size"};
   // TTreeReaderArray<unsigned int> Electron_fUniqueID = {fReader, "Electron.fUniqueID"};
   // TTreeReaderArray<unsigned int> Electron_fBits = {fReader, "Electron.fBits"};
   // TTreeReaderArray<Float_t> Electron_PT = {fReader, "Electron.PT"};
   // TTreeReaderArray<Float_t> Electron_Eta = {fReader, "Electron.Eta"};
   // TTreeReaderArray<Float_t> Electron_Phi = {fReader, "Electron.Phi"};
   // TTreeReaderArray<Float_t> Electron_T = {fReader, "Electron.T"};
   // TTreeReaderArray<Int_t> Electron_Charge = {fReader, "Electron.Charge"};
   // TTreeReaderArray<Float_t> Electron_EhadOverEem = {fReader, "Electron.EhadOverEem"};
   // // TTreeReaderArray<TRef> Electron_Particle = {fReader, "Electron.Particle"};
   // TTreeReaderArray<Float_t> Electron_IsolationVar = {fReader, "Electron.IsolationVar"};
   // TTreeReaderArray<Float_t> Electron_IsolationVarRhoCorr = {fReader, "Electron.IsolationVarRhoCorr"};
   // TTreeReaderArray<Float_t> Electron_SumPtCharged = {fReader, "Electron.SumPtCharged"};
   // TTreeReaderArray<Float_t> Electron_SumPtNeutral = {fReader, "Electron.SumPtNeutral"};
   // TTreeReaderArray<Float_t> Electron_SumPtChargedPU = {fReader, "Electron.SumPtChargedPU"};
   // TTreeReaderArray<Float_t> Electron_SumPt = {fReader, "Electron.SumPt"};
   // TTreeReaderValue<Int_t> Electron_size = {fReader, "Electron_size"};
   // TTreeReaderArray<unsigned int> Photon_fUniqueID = {fReader, "Photon.fUniqueID"};
   // TTreeReaderArray<unsigned int> Photon_fBits = {fReader, "Photon.fBits"};
   // TTreeReaderArray<Float_t> Photon_PT = {fReader, "Photon.PT"};
   // TTreeReaderArray<Float_t> Photon_Eta = {fReader, "Photon.Eta"};
   // TTreeReaderArray<Float_t> Photon_Phi = {fReader, "Photon.Phi"};
   // TTreeReaderArray<Float_t> Photon_E = {fReader, "Photon.E"};
   // TTreeReaderArray<Float_t> Photon_T = {fReader, "Photon.T"};
   // TTreeReaderArray<Float_t> Photon_EhadOverEem = {fReader, "Photon.EhadOverEem"};
   // // TTreeReaderArray<TRefArray> Photon_Particles = {fReader, "Photon.Particles"};
   // TTreeReaderArray<Float_t> Photon_IsolationVar = {fReader, "Photon.IsolationVar"};
   // TTreeReaderArray<Float_t> Photon_IsolationVarRhoCorr = {fReader, "Photon.IsolationVarRhoCorr"};
   // TTreeReaderArray<Float_t> Photon_SumPtCharged = {fReader, "Photon.SumPtCharged"};
   // TTreeReaderArray<Float_t> Photon_SumPtNeutral = {fReader, "Photon.SumPtNeutral"};
   // TTreeReaderArray<Float_t> Photon_SumPtChargedPU = {fReader, "Photon.SumPtChargedPU"};
   // TTreeReaderArray<Float_t> Photon_SumPt = {fReader, "Photon.SumPt"};
   // TTreeReaderValue<Int_t> Photon_size = {fReader, "Photon_size"};
   // TTreeReaderArray<unsigned int> Muon_fUniqueID = {fReader, "Muon.fUniqueID"};
   // TTreeReaderArray<unsigned int> Muon_fBits = {fReader, "Muon.fBits"};
   // TTreeReaderArray<Float_t> Muon_PT = {fReader, "Muon.PT"};
   // TTreeReaderArray<Float_t> Muon_Eta = {fReader, "Muon.Eta"};
   // TTreeReaderArray<Float_t> Muon_Phi = {fReader, "Muon.Phi"};
   // TTreeReaderArray<Float_t> Muon_T = {fReader, "Muon.T"};
   // TTreeReaderArray<Int_t> Muon_Charge = {fReader, "Muon.Charge"};
   // // TTreeReaderArray<TRef> Muon_Particle = {fReader, "Muon.Particle"};
   // TTreeReaderArray<Float_t> Muon_IsolationVar = {fReader, "Muon.IsolationVar"};
   // TTreeReaderArray<Float_t> Muon_IsolationVarRhoCorr = {fReader, "Muon.IsolationVarRhoCorr"};
   // TTreeReaderArray<Float_t> Muon_SumPtCharged = {fReader, "Muon.SumPtCharged"};
   // TTreeReaderArray<Float_t> Muon_SumPtNeutral = {fReader, "Muon.SumPtNeutral"};
   // TTreeReaderArray<Float_t> Muon_SumPtChargedPU = {fReader, "Muon.SumPtChargedPU"};
   // TTreeReaderArray<Float_t> Muon_SumPt = {fReader, "Muon.SumPt"};
   // TTreeReaderValue<Int_t> Muon_size = {fReader, "Muon_size"};
   // TTreeReaderArray<unsigned int> MissingET_fUniqueID = {fReader, "MissingET.fUniqueID"};
   // TTreeReaderArray<unsigned int> MissingET_fBits = {fReader, "MissingET.fBits"};
   // TTreeReaderArray<Float_t> MissingET_MET = {fReader, "MissingET.MET"};
   // TTreeReaderArray<Float_t> MissingET_Eta = {fReader, "MissingET.Eta"};
   // TTreeReaderArray<Float_t> MissingET_Phi = {fReader, "MissingET.Phi"};
   // TTreeReaderValue<Int_t> MissingET_size = {fReader, "MissingET_size"};
   // TTreeReaderArray<unsigned int> ScalarHT_fUniqueID = {fReader, "ScalarHT.fUniqueID"};
   // TTreeReaderArray<unsigned int> ScalarHT_fBits = {fReader, "ScalarHT.fBits"};
   // TTreeReaderArray<Float_t> ScalarHT_HT = {fReader, "ScalarHT.HT"};
   // TTreeReaderValue<Int_t> ScalarHT_size = {fReader, "ScalarHT_size"};


   DelAna(TTree * /*tree*/ =0) { }
   virtual ~DelAna() { }
   virtual Int_t   Version() const { return 2; }
   virtual void    Begin(TTree *tree);
   virtual void    SlaveBegin(TTree *tree);
   virtual void    Init(TTree *tree);
   virtual Bool_t  Notify();
   virtual Bool_t  Process(Long64_t entry);
   virtual Int_t   GetEntry(Long64_t entry, Int_t getall = 0) { return fChain ? fChain->GetTree()->GetEntry(entry, getall) : 0; }
   virtual void    SetOption(const char *option) { fOption = option; }
   virtual void    SetObject(TObject *obj) { fObject = obj; }
   virtual void    SetInputList(TList *input) { fInput = input; }
   virtual TList  *GetOutputList() const { return fOutput; }
   virtual void    SlaveTerminate();
   virtual void    Terminate();

   //User added functions
   //You add functions here
   int ReadLimited(int level, Long64_t entry); //This is an important function.
   void SetHstFileName(const char *HstFileName){ _HstFileName = HstFileName;}
   void SetSumFileName(const char *SumFileName){ _SumFileName = SumFileName;}
   void SetSample(int sample){_sample=sample;}
   void SetVerbose(int verbose){ _verbosity = verbose; }
   void SetData(int data){_data=data;}
   void BookHistograms();
  ob GetMother(ob j, ob pa[]);
   void Sort(int opt);
   // bool pass_muon_cuts(int level, int i, TLorentzVector v);
   // bool pass_electron_cuts(int level, int i, TLorentzVector v);
   // //bool pass_tau_cuts(int level, int i, TLorentzVector v); 
   // bool pass_jet_cuts(TLorentzVector v);
   // //bool pass_photon_cuts(int level, int i, TLorentzVector v);
   // float delta_phi(float phi1, float phi2);
   // float delta_R(float deltaphi, float deltaeta);
   // bool match_with_tight_muon(TLorentzVector l);
   // bool match_with_iso_muon(TLorentzVector l);
   // bool match_with_good_muon(TLorentzVector l);
   // bool if_jet_exist(TLorentzVector tag, TLorentzVector probe);
   // void is_MIP(TLorentzVector l);
   // float misidentification_rates();

 public:
   struct Hists {
     //Declare the histograms you want in here.
     TH1F *NMass, *Dxy, *Dz;
   };
  
   // struct Lepton {
   //   TLorentzVector v;
   //   int id; //charge
   //   int ind;
   //   float wt;
   //   int flavor;
   //   int charge;
   // };
   // bool is_tag(int type, Lepton l);
   // bool is_probe(Lepton tag, Lepton probe);
   // bool is_same_charged(Lepton tag, Lepton probe);
   // bool is_probes(Lepton tag, Lepton probe1, Lepton probe2);
   // int matching_track_index(TLorentzVector l);
   // bool if_jets_exist(Lepton tag, Lepton probe1, Lepton probe2);
   // void fills(int type, Lepton tag,int ar[2],int fake[2]);
   // bool estimate_fakes(Lepton tag, Lepton probe1, Lepton probe2);
   // float muon_iso(TLorentzVector muon,int trackindex);
 protected:
   Hists h;

 private:
   //Global variables go here. Make them global only if necessary.
   TFile *_HstFile;
   const char *_HstFileName;
   const char *_SumFileName;
   int _verbosity;
   int _sample;
   float GEV, MEV2GEV;
   int nEvtTotal;
   int _data;
  //vector<Lepton> goodMu, goodEle, goodJet, loosemu, tightmu,tracks, truthmu,isomu,allmu,gooddMu; // goodPho,goodTau,goodJet, goodLep;

  
   ClassDef(DelAna,0);

};

#endif

#ifdef DelAna_cxx

void DelAna::Init(TTree *tree)
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
  
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Event", &Event_, &b_Event_);
   fChain->SetBranchAddress("Event.fUniqueID", Event_fUniqueID, &b_Event_fUniqueID);
   fChain->SetBranchAddress("Event.fBits", Event_fBits, &b_Event_fBits);
   fChain->SetBranchAddress("Event.Number", Event_Number, &b_Event_Number);
   fChain->SetBranchAddress("Event.ReadTime", Event_ReadTime, &b_Event_ReadTime);
   fChain->SetBranchAddress("Event.ProcTime", Event_ProcTime, &b_Event_ProcTime);
   fChain->SetBranchAddress("Event.ProcessID", Event_ProcessID, &b_Event_ProcessID);
   fChain->SetBranchAddress("Event.MPI", Event_MPI, &b_Event_MPI);
   fChain->SetBranchAddress("Event.Weight", Event_Weight, &b_Event_Weight);
   fChain->SetBranchAddress("Event.CrossSection", Event_CrossSection, &b_Event_CrossSection);
   fChain->SetBranchAddress("Event.CrossSectionError", Event_CrossSectionError, &b_Event_CrossSectionError);
   fChain->SetBranchAddress("Event.Scale", Event_Scale, &b_Event_Scale);
   fChain->SetBranchAddress("Event.AlphaQED", Event_AlphaQED, &b_Event_AlphaQED);
   fChain->SetBranchAddress("Event.AlphaQCD", Event_AlphaQCD, &b_Event_AlphaQCD);
   fChain->SetBranchAddress("Event.ID1", Event_ID1, &b_Event_ID1);
   fChain->SetBranchAddress("Event.ID2", Event_ID2, &b_Event_ID2);
   fChain->SetBranchAddress("Event.X1", Event_X1, &b_Event_X1);
   fChain->SetBranchAddress("Event.X2", Event_X2, &b_Event_X2);
   fChain->SetBranchAddress("Event.ScalePDF", Event_ScalePDF, &b_Event_ScalePDF);
   fChain->SetBranchAddress("Event.PDF1", Event_PDF1, &b_Event_PDF1);
   fChain->SetBranchAddress("Event.PDF2", Event_PDF2, &b_Event_PDF2);
   fChain->SetBranchAddress("Event_size", &Event_size, &b_Event_size);
   fChain->SetBranchAddress("EventLHEF", &EventLHEF_, &b_EventLHEF_);
   fChain->SetBranchAddress("EventLHEF.fUniqueID", EventLHEF_fUniqueID, &b_EventLHEF_fUniqueID);
   fChain->SetBranchAddress("EventLHEF.fBits", EventLHEF_fBits, &b_EventLHEF_fBits);
   fChain->SetBranchAddress("EventLHEF.Number", EventLHEF_Number, &b_EventLHEF_Number);
   fChain->SetBranchAddress("EventLHEF.ReadTime", EventLHEF_ReadTime, &b_EventLHEF_ReadTime);
   fChain->SetBranchAddress("EventLHEF.ProcTime", EventLHEF_ProcTime, &b_EventLHEF_ProcTime);
   fChain->SetBranchAddress("EventLHEF.ProcessID", EventLHEF_ProcessID, &b_EventLHEF_ProcessID);
   fChain->SetBranchAddress("EventLHEF.Weight", EventLHEF_Weight, &b_EventLHEF_Weight);
   fChain->SetBranchAddress("EventLHEF.CrossSection", EventLHEF_CrossSection, &b_EventLHEF_CrossSection);
   fChain->SetBranchAddress("EventLHEF.ScalePDF", EventLHEF_ScalePDF, &b_EventLHEF_ScalePDF);
   fChain->SetBranchAddress("EventLHEF.AlphaQED", EventLHEF_AlphaQED, &b_EventLHEF_AlphaQED);
   fChain->SetBranchAddress("EventLHEF.AlphaQCD", EventLHEF_AlphaQCD, &b_EventLHEF_AlphaQCD);
   fChain->SetBranchAddress("EventLHEF_size", &EventLHEF_size, &b_EventLHEF_size);
   fChain->SetBranchAddress("WeightLHEF", &WeightLHEF_, &b_WeightLHEF_);
   fChain->SetBranchAddress("WeightLHEF.fUniqueID", &WeightLHEF_fUniqueID, &b_WeightLHEF_fUniqueID);
   fChain->SetBranchAddress("WeightLHEF.fBits", &WeightLHEF_fBits, &b_WeightLHEF_fBits);
   fChain->SetBranchAddress("WeightLHEF.ID", &WeightLHEF_ID, &b_WeightLHEF_ID);
   fChain->SetBranchAddress("WeightLHEF.Weight", &WeightLHEF_Weight, &b_WeightLHEF_Weight);
   fChain->SetBranchAddress("WeightLHEF_size", &WeightLHEF_size, &b_WeightLHEF_size);
   fChain->SetBranchAddress("Particle", &Particle_, &b_Particle_);
   fChain->SetBranchAddress("Particle.fUniqueID", Particle_fUniqueID, &b_Particle_fUniqueID);
   fChain->SetBranchAddress("Particle.fBits", Particle_fBits, &b_Particle_fBits);
   fChain->SetBranchAddress("Particle.PID", Particle_PID, &b_Particle_PID);
   fChain->SetBranchAddress("Particle.Status", Particle_Status, &b_Particle_Status);
   fChain->SetBranchAddress("Particle.IsPU", Particle_IsPU, &b_Particle_IsPU);
   fChain->SetBranchAddress("Particle.M1", Particle_M1, &b_Particle_M1);
   fChain->SetBranchAddress("Particle.M2", Particle_M2, &b_Particle_M2);
   fChain->SetBranchAddress("Particle.D1", Particle_D1, &b_Particle_D1);
   fChain->SetBranchAddress("Particle.D2", Particle_D2, &b_Particle_D2);
   fChain->SetBranchAddress("Particle.Charge", Particle_Charge, &b_Particle_Charge);
   fChain->SetBranchAddress("Particle.Mass", Particle_Mass, &b_Particle_Mass);
   fChain->SetBranchAddress("Particle.E", Particle_E, &b_Particle_E);
   fChain->SetBranchAddress("Particle.Px", Particle_Px, &b_Particle_Px);
   fChain->SetBranchAddress("Particle.Py", Particle_Py, &b_Particle_Py);
   fChain->SetBranchAddress("Particle.Pz", Particle_Pz, &b_Particle_Pz);
   fChain->SetBranchAddress("Particle.P", Particle_P, &b_Particle_P);
   fChain->SetBranchAddress("Particle.PT", Particle_PT, &b_Particle_PT);
   fChain->SetBranchAddress("Particle.Eta", Particle_Eta, &b_Particle_Eta);
   fChain->SetBranchAddress("Particle.Phi", Particle_Phi, &b_Particle_Phi);
   fChain->SetBranchAddress("Particle.Rapidity", Particle_Rapidity, &b_Particle_Rapidity);
   fChain->SetBranchAddress("Particle.CtgTheta", Particle_CtgTheta, &b_Particle_CtgTheta);
   fChain->SetBranchAddress("Particle.D0", Particle_D0, &b_Particle_D0);
   fChain->SetBranchAddress("Particle.DZ", Particle_DZ, &b_Particle_DZ);
   fChain->SetBranchAddress("Particle.T", Particle_T, &b_Particle_T);
   fChain->SetBranchAddress("Particle.X", Particle_X, &b_Particle_X);
   fChain->SetBranchAddress("Particle.Y", Particle_Y, &b_Particle_Y);
   fChain->SetBranchAddress("Particle.Z", Particle_Z, &b_Particle_Z);
   fChain->SetBranchAddress("Particle_size", &Particle_size, &b_Particle_size);
   fChain->SetBranchAddress("Track", &Track_, &b_Track_);
   fChain->SetBranchAddress("Track.fUniqueID", Track_fUniqueID, &b_Track_fUniqueID);
   fChain->SetBranchAddress("Track.fBits", Track_fBits, &b_Track_fBits);
   fChain->SetBranchAddress("Track.PID", Track_PID, &b_Track_PID);
   fChain->SetBranchAddress("Track.Charge", Track_Charge, &b_Track_Charge);
   fChain->SetBranchAddress("Track.P", Track_P, &b_Track_P);
   fChain->SetBranchAddress("Track.PT", Track_PT, &b_Track_PT);
   fChain->SetBranchAddress("Track.Eta", Track_Eta, &b_Track_Eta);
   fChain->SetBranchAddress("Track.Phi", Track_Phi, &b_Track_Phi);
   fChain->SetBranchAddress("Track.CtgTheta", Track_CtgTheta, &b_Track_CtgTheta);
   fChain->SetBranchAddress("Track.EtaOuter", Track_EtaOuter, &b_Track_EtaOuter);
   fChain->SetBranchAddress("Track.PhiOuter", Track_PhiOuter, &b_Track_PhiOuter);
   fChain->SetBranchAddress("Track.T", Track_T, &b_Track_T);
   fChain->SetBranchAddress("Track.X", Track_X, &b_Track_X);
   fChain->SetBranchAddress("Track.Y", Track_Y, &b_Track_Y);
   fChain->SetBranchAddress("Track.Z", Track_Z, &b_Track_Z);
   fChain->SetBranchAddress("Track.TOuter", Track_TOuter, &b_Track_TOuter);
   fChain->SetBranchAddress("Track.XOuter", Track_XOuter, &b_Track_XOuter);
   fChain->SetBranchAddress("Track.YOuter", Track_YOuter, &b_Track_YOuter);
   fChain->SetBranchAddress("Track.ZOuter", Track_ZOuter, &b_Track_ZOuter);
   fChain->SetBranchAddress("Track.Xd", Track_Xd, &b_Track_Xd);
   fChain->SetBranchAddress("Track.Yd", Track_Yd, &b_Track_Yd);
   fChain->SetBranchAddress("Track.Zd", Track_Zd, &b_Track_Zd);
   fChain->SetBranchAddress("Track.L", Track_L, &b_Track_L);
   fChain->SetBranchAddress("Track.D0", Track_D0, &b_Track_D0);
   fChain->SetBranchAddress("Track.DZ", Track_DZ, &b_Track_DZ);
   fChain->SetBranchAddress("Track.ErrorP", Track_ErrorP, &b_Track_ErrorP);
   fChain->SetBranchAddress("Track.ErrorPT", Track_ErrorPT, &b_Track_ErrorPT);
   fChain->SetBranchAddress("Track.ErrorPhi", Track_ErrorPhi, &b_Track_ErrorPhi);
   fChain->SetBranchAddress("Track.ErrorCtgTheta", Track_ErrorCtgTheta, &b_Track_ErrorCtgTheta);
   fChain->SetBranchAddress("Track.ErrorT", Track_ErrorT, &b_Track_ErrorT);
   fChain->SetBranchAddress("Track.ErrorD0", Track_ErrorD0, &b_Track_ErrorD0);
   fChain->SetBranchAddress("Track.ErrorDZ", Track_ErrorDZ, &b_Track_ErrorDZ);
   // fChain->SetBranchAddress("Track.Particle", Track_Particle, &b_Track_Particle);
   fChain->SetBranchAddress("Track.VertexIndex", Track_VertexIndex, &b_Track_VertexIndex);
   fChain->SetBranchAddress("Track_size", &Track_size, &b_Track_size);
   fChain->SetBranchAddress("Tower", &Tower_, &b_Tower_);
   fChain->SetBranchAddress("Tower.fUniqueID", Tower_fUniqueID, &b_Tower_fUniqueID);
   fChain->SetBranchAddress("Tower.fBits", Tower_fBits, &b_Tower_fBits);
   fChain->SetBranchAddress("Tower.ET", Tower_ET, &b_Tower_ET);
   fChain->SetBranchAddress("Tower.Eta", Tower_Eta, &b_Tower_Eta);
   fChain->SetBranchAddress("Tower.Phi", Tower_Phi, &b_Tower_Phi);
   fChain->SetBranchAddress("Tower.E", Tower_E, &b_Tower_E);
   fChain->SetBranchAddress("Tower.T", Tower_T, &b_Tower_T);
   fChain->SetBranchAddress("Tower.NTimeHits", Tower_NTimeHits, &b_Tower_NTimeHits);
   fChain->SetBranchAddress("Tower.Eem", Tower_Eem, &b_Tower_Eem);
   fChain->SetBranchAddress("Tower.Ehad", Tower_Ehad, &b_Tower_Ehad);
   fChain->SetBranchAddress("Tower.Edges[4]", Tower_Edges, &b_Tower_Edges);
   // fChain->SetBranchAddress("Tower.Particles", Tower_Particles, &b_Tower_Particles);
   fChain->SetBranchAddress("Tower_size", &Tower_size, &b_Tower_size);
   fChain->SetBranchAddress("EFlowTrack", &EFlowTrack_, &b_EFlowTrack_);
   fChain->SetBranchAddress("EFlowTrack.fUniqueID", EFlowTrack_fUniqueID, &b_EFlowTrack_fUniqueID);
   fChain->SetBranchAddress("EFlowTrack.fBits", EFlowTrack_fBits, &b_EFlowTrack_fBits);
   fChain->SetBranchAddress("EFlowTrack.PID", EFlowTrack_PID, &b_EFlowTrack_PID);
   fChain->SetBranchAddress("EFlowTrack.Charge", EFlowTrack_Charge, &b_EFlowTrack_Charge);
   fChain->SetBranchAddress("EFlowTrack.P", EFlowTrack_P, &b_EFlowTrack_P);
   fChain->SetBranchAddress("EFlowTrack.PT", EFlowTrack_PT, &b_EFlowTrack_PT);
   fChain->SetBranchAddress("EFlowTrack.Eta", EFlowTrack_Eta, &b_EFlowTrack_Eta);
   fChain->SetBranchAddress("EFlowTrack.Phi", EFlowTrack_Phi, &b_EFlowTrack_Phi);
   fChain->SetBranchAddress("EFlowTrack.CtgTheta", EFlowTrack_CtgTheta, &b_EFlowTrack_CtgTheta);
   fChain->SetBranchAddress("EFlowTrack.EtaOuter", EFlowTrack_EtaOuter, &b_EFlowTrack_EtaOuter);
   fChain->SetBranchAddress("EFlowTrack.PhiOuter", EFlowTrack_PhiOuter, &b_EFlowTrack_PhiOuter);
   fChain->SetBranchAddress("EFlowTrack.T", EFlowTrack_T, &b_EFlowTrack_T);
   fChain->SetBranchAddress("EFlowTrack.X", EFlowTrack_X, &b_EFlowTrack_X);
   fChain->SetBranchAddress("EFlowTrack.Y", EFlowTrack_Y, &b_EFlowTrack_Y);
   fChain->SetBranchAddress("EFlowTrack.Z", EFlowTrack_Z, &b_EFlowTrack_Z);
   fChain->SetBranchAddress("EFlowTrack.TOuter", EFlowTrack_TOuter, &b_EFlowTrack_TOuter);
   fChain->SetBranchAddress("EFlowTrack.XOuter", EFlowTrack_XOuter, &b_EFlowTrack_XOuter);
   fChain->SetBranchAddress("EFlowTrack.YOuter", EFlowTrack_YOuter, &b_EFlowTrack_YOuter);
   fChain->SetBranchAddress("EFlowTrack.ZOuter", EFlowTrack_ZOuter, &b_EFlowTrack_ZOuter);
   fChain->SetBranchAddress("EFlowTrack.Xd", EFlowTrack_Xd, &b_EFlowTrack_Xd);
   fChain->SetBranchAddress("EFlowTrack.Yd", EFlowTrack_Yd, &b_EFlowTrack_Yd);
   fChain->SetBranchAddress("EFlowTrack.Zd", EFlowTrack_Zd, &b_EFlowTrack_Zd);
   fChain->SetBranchAddress("EFlowTrack.L", EFlowTrack_L, &b_EFlowTrack_L);
   fChain->SetBranchAddress("EFlowTrack.D0", EFlowTrack_D0, &b_EFlowTrack_D0);
   fChain->SetBranchAddress("EFlowTrack.DZ", EFlowTrack_DZ, &b_EFlowTrack_DZ);
   fChain->SetBranchAddress("EFlowTrack.ErrorP", EFlowTrack_ErrorP, &b_EFlowTrack_ErrorP);
   fChain->SetBranchAddress("EFlowTrack.ErrorPT", EFlowTrack_ErrorPT, &b_EFlowTrack_ErrorPT);
   fChain->SetBranchAddress("EFlowTrack.ErrorPhi", EFlowTrack_ErrorPhi, &b_EFlowTrack_ErrorPhi);
   fChain->SetBranchAddress("EFlowTrack.ErrorCtgTheta", EFlowTrack_ErrorCtgTheta, &b_EFlowTrack_ErrorCtgTheta);
   fChain->SetBranchAddress("EFlowTrack.ErrorT", EFlowTrack_ErrorT, &b_EFlowTrack_ErrorT);
   fChain->SetBranchAddress("EFlowTrack.ErrorD0", EFlowTrack_ErrorD0, &b_EFlowTrack_ErrorD0);
   fChain->SetBranchAddress("EFlowTrack.ErrorDZ", EFlowTrack_ErrorDZ, &b_EFlowTrack_ErrorDZ);
   // fChain->SetBranchAddress("EFlowTrack.Particle", EFlowTrack_Particle, &b_EFlowTrack_Particle);
   fChain->SetBranchAddress("EFlowTrack.VertexIndex", EFlowTrack_VertexIndex, &b_EFlowTrack_VertexIndex);
   fChain->SetBranchAddress("EFlowTrack_size", &EFlowTrack_size, &b_EFlowTrack_size);
   fChain->SetBranchAddress("EFlowPhoton", &EFlowPhoton_, &b_EFlowPhoton_);
   fChain->SetBranchAddress("EFlowPhoton.fUniqueID", EFlowPhoton_fUniqueID, &b_EFlowPhoton_fUniqueID);
   fChain->SetBranchAddress("EFlowPhoton.fBits", EFlowPhoton_fBits, &b_EFlowPhoton_fBits);
   fChain->SetBranchAddress("EFlowPhoton.ET", EFlowPhoton_ET, &b_EFlowPhoton_ET);
   fChain->SetBranchAddress("EFlowPhoton.Eta", EFlowPhoton_Eta, &b_EFlowPhoton_Eta);
   fChain->SetBranchAddress("EFlowPhoton.Phi", EFlowPhoton_Phi, &b_EFlowPhoton_Phi);
   fChain->SetBranchAddress("EFlowPhoton.E", EFlowPhoton_E, &b_EFlowPhoton_E);
   fChain->SetBranchAddress("EFlowPhoton.T", EFlowPhoton_T, &b_EFlowPhoton_T);
   fChain->SetBranchAddress("EFlowPhoton.NTimeHits", EFlowPhoton_NTimeHits, &b_EFlowPhoton_NTimeHits);
   fChain->SetBranchAddress("EFlowPhoton.Eem", EFlowPhoton_Eem, &b_EFlowPhoton_Eem);
   fChain->SetBranchAddress("EFlowPhoton.Ehad", EFlowPhoton_Ehad, &b_EFlowPhoton_Ehad);
   fChain->SetBranchAddress("EFlowPhoton.Edges[4]", EFlowPhoton_Edges, &b_EFlowPhoton_Edges);
   // fChain->SetBranchAddress("EFlowPhoton.Particles", EFlowPhoton_Particles, &b_EFlowPhoton_Particles);
   fChain->SetBranchAddress("EFlowPhoton_size", &EFlowPhoton_size, &b_EFlowPhoton_size);
   fChain->SetBranchAddress("EFlowNeutralHadron", &EFlowNeutralHadron_, &b_EFlowNeutralHadron_);
   fChain->SetBranchAddress("EFlowNeutralHadron.fUniqueID", EFlowNeutralHadron_fUniqueID, &b_EFlowNeutralHadron_fUniqueID);
   fChain->SetBranchAddress("EFlowNeutralHadron.fBits", EFlowNeutralHadron_fBits, &b_EFlowNeutralHadron_fBits);
   fChain->SetBranchAddress("EFlowNeutralHadron.ET", EFlowNeutralHadron_ET, &b_EFlowNeutralHadron_ET);
   fChain->SetBranchAddress("EFlowNeutralHadron.Eta", EFlowNeutralHadron_Eta, &b_EFlowNeutralHadron_Eta);
   fChain->SetBranchAddress("EFlowNeutralHadron.Phi", EFlowNeutralHadron_Phi, &b_EFlowNeutralHadron_Phi);
   fChain->SetBranchAddress("EFlowNeutralHadron.E", EFlowNeutralHadron_E, &b_EFlowNeutralHadron_E);
   fChain->SetBranchAddress("EFlowNeutralHadron.T", EFlowNeutralHadron_T, &b_EFlowNeutralHadron_T);
   fChain->SetBranchAddress("EFlowNeutralHadron.NTimeHits", EFlowNeutralHadron_NTimeHits, &b_EFlowNeutralHadron_NTimeHits);
   fChain->SetBranchAddress("EFlowNeutralHadron.Eem", EFlowNeutralHadron_Eem, &b_EFlowNeutralHadron_Eem);
   fChain->SetBranchAddress("EFlowNeutralHadron.Ehad", EFlowNeutralHadron_Ehad, &b_EFlowNeutralHadron_Ehad);
   fChain->SetBranchAddress("EFlowNeutralHadron.Edges[4]", EFlowNeutralHadron_Edges, &b_EFlowNeutralHadron_Edges);
   // fChain->SetBranchAddress("EFlowNeutralHadron.Particles", EFlowNeutralHadron_Particles, &b_EFlowNeutralHadron_Particles);
   fChain->SetBranchAddress("EFlowNeutralHadron_size", &EFlowNeutralHadron_size, &b_EFlowNeutralHadron_size);
   fChain->SetBranchAddress("GenJet", &GenJet_, &b_GenJet_);
   fChain->SetBranchAddress("GenJet.fUniqueID", GenJet_fUniqueID, &b_GenJet_fUniqueID);
   fChain->SetBranchAddress("GenJet.fBits", GenJet_fBits, &b_GenJet_fBits);
   fChain->SetBranchAddress("GenJet.PT", GenJet_PT, &b_GenJet_PT);
   fChain->SetBranchAddress("GenJet.Eta", GenJet_Eta, &b_GenJet_Eta);
   fChain->SetBranchAddress("GenJet.Phi", GenJet_Phi, &b_GenJet_Phi);
   fChain->SetBranchAddress("GenJet.T", GenJet_T, &b_GenJet_T);
   fChain->SetBranchAddress("GenJet.Mass", GenJet_Mass, &b_GenJet_Mass);
   fChain->SetBranchAddress("GenJet.DeltaEta", GenJet_DeltaEta, &b_GenJet_DeltaEta);
   fChain->SetBranchAddress("GenJet.DeltaPhi", GenJet_DeltaPhi, &b_GenJet_DeltaPhi);
   fChain->SetBranchAddress("GenJet.Flavor", GenJet_Flavor, &b_GenJet_Flavor);
   fChain->SetBranchAddress("GenJet.FlavorAlgo", GenJet_FlavorAlgo, &b_GenJet_FlavorAlgo);
   fChain->SetBranchAddress("GenJet.FlavorPhys", GenJet_FlavorPhys, &b_GenJet_FlavorPhys);
   fChain->SetBranchAddress("GenJet.BTag", GenJet_BTag, &b_GenJet_BTag);
   fChain->SetBranchAddress("GenJet.BTagAlgo", GenJet_BTagAlgo, &b_GenJet_BTagAlgo);
   fChain->SetBranchAddress("GenJet.BTagPhys", GenJet_BTagPhys, &b_GenJet_BTagPhys);
   fChain->SetBranchAddress("GenJet.TauTag", GenJet_TauTag, &b_GenJet_TauTag);
   fChain->SetBranchAddress("GenJet.TauWeight", GenJet_TauWeight, &b_GenJet_TauWeight);
   fChain->SetBranchAddress("GenJet.Charge", GenJet_Charge, &b_GenJet_Charge);
   fChain->SetBranchAddress("GenJet.EhadOverEem", GenJet_EhadOverEem, &b_GenJet_EhadOverEem);
   fChain->SetBranchAddress("GenJet.NCharged", GenJet_NCharged, &b_GenJet_NCharged);
   fChain->SetBranchAddress("GenJet.NNeutrals", GenJet_NNeutrals, &b_GenJet_NNeutrals);
   fChain->SetBranchAddress("GenJet.Beta", GenJet_Beta, &b_GenJet_Beta);
   fChain->SetBranchAddress("GenJet.BetaStar", GenJet_BetaStar, &b_GenJet_BetaStar);
   fChain->SetBranchAddress("GenJet.MeanSqDeltaR", GenJet_MeanSqDeltaR, &b_GenJet_MeanSqDeltaR);
   fChain->SetBranchAddress("GenJet.PTD", GenJet_PTD, &b_GenJet_PTD);
   fChain->SetBranchAddress("GenJet.FracPt[5]", GenJet_FracPt, &b_GenJet_FracPt);
   fChain->SetBranchAddress("GenJet.Tau[5]", GenJet_Tau, &b_GenJet_Tau);
   // fChain->SetBranchAddress("GenJet.SoftDroppedJet", GenJet_SoftDroppedJet, &b_GenJet_SoftDroppedJet);
   // fChain->SetBranchAddress("GenJet.SoftDroppedSubJet1", GenJet_SoftDroppedSubJet1, &b_GenJet_SoftDroppedSubJet1);
   // fChain->SetBranchAddress("GenJet.SoftDroppedSubJet2", GenJet_SoftDroppedSubJet2, &b_GenJet_SoftDroppedSubJet2);
   // fChain->SetBranchAddress("GenJet.TrimmedP4[5]", GenJet_TrimmedP4, &b_GenJet_TrimmedP4);
   // fChain->SetBranchAddress("GenJet.PrunedP4[5]", GenJet_PrunedP4, &b_GenJet_PrunedP4);
   // fChain->SetBranchAddress("GenJet.SoftDroppedP4[5]", GenJet_SoftDroppedP4, &b_GenJet_SoftDroppedP4);
   fChain->SetBranchAddress("GenJet.NSubJetsTrimmed", GenJet_NSubJetsTrimmed, &b_GenJet_NSubJetsTrimmed);
   fChain->SetBranchAddress("GenJet.NSubJetsPruned", GenJet_NSubJetsPruned, &b_GenJet_NSubJetsPruned);
   fChain->SetBranchAddress("GenJet.NSubJetsSoftDropped", GenJet_NSubJetsSoftDropped, &b_GenJet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("GenJet.ExclYmerge23", GenJet_ExclYmerge23, &b_GenJet_ExclYmerge23);
   fChain->SetBranchAddress("GenJet.ExclYmerge34", GenJet_ExclYmerge34, &b_GenJet_ExclYmerge34);
   fChain->SetBranchAddress("GenJet.ExclYmerge45", GenJet_ExclYmerge45, &b_GenJet_ExclYmerge45);
   fChain->SetBranchAddress("GenJet.ExclYmerge56", GenJet_ExclYmerge56, &b_GenJet_ExclYmerge56);
   // fChain->SetBranchAddress("GenJet.Constituents", GenJet_Constituents, &b_GenJet_Constituents);
   // fChain->SetBranchAddress("GenJet.Particles", GenJet_Particles, &b_GenJet_Particles);
   // fChain->SetBranchAddress("GenJet.Area", GenJet_Area, &b_GenJet_Area);
   fChain->SetBranchAddress("GenJet_size", &GenJet_size, &b_GenJet_size);
   fChain->SetBranchAddress("GenMissingET", &GenMissingET_, &b_GenMissingET_);
   fChain->SetBranchAddress("GenMissingET.fUniqueID", GenMissingET_fUniqueID, &b_GenMissingET_fUniqueID);
   fChain->SetBranchAddress("GenMissingET.fBits", GenMissingET_fBits, &b_GenMissingET_fBits);
   fChain->SetBranchAddress("GenMissingET.MET", GenMissingET_MET, &b_GenMissingET_MET);
   fChain->SetBranchAddress("GenMissingET.Eta", GenMissingET_Eta, &b_GenMissingET_Eta);
   fChain->SetBranchAddress("GenMissingET.Phi", GenMissingET_Phi, &b_GenMissingET_Phi);
   fChain->SetBranchAddress("GenMissingET_size", &GenMissingET_size, &b_GenMissingET_size);
   fChain->SetBranchAddress("Jet", &Jet_, &b_Jet_);
   fChain->SetBranchAddress("Jet.fUniqueID", Jet_fUniqueID, &b_Jet_fUniqueID);
   fChain->SetBranchAddress("Jet.fBits", Jet_fBits, &b_Jet_fBits);
   fChain->SetBranchAddress("Jet.PT", Jet_PT, &b_Jet_PT);
   fChain->SetBranchAddress("Jet.Eta", Jet_Eta, &b_Jet_Eta);
   fChain->SetBranchAddress("Jet.Phi", Jet_Phi, &b_Jet_Phi);
   fChain->SetBranchAddress("Jet.T", Jet_T, &b_Jet_T);
   fChain->SetBranchAddress("Jet.Mass", Jet_Mass, &b_Jet_Mass);
   fChain->SetBranchAddress("Jet.DeltaEta", Jet_DeltaEta, &b_Jet_DeltaEta);
   fChain->SetBranchAddress("Jet.DeltaPhi", Jet_DeltaPhi, &b_Jet_DeltaPhi);
   fChain->SetBranchAddress("Jet.Flavor", Jet_Flavor, &b_Jet_Flavor);
   fChain->SetBranchAddress("Jet.FlavorAlgo", Jet_FlavorAlgo, &b_Jet_FlavorAlgo);
   fChain->SetBranchAddress("Jet.FlavorPhys", Jet_FlavorPhys, &b_Jet_FlavorPhys);
   fChain->SetBranchAddress("Jet.BTag", Jet_BTag, &b_Jet_BTag);
   fChain->SetBranchAddress("Jet.BTagAlgo", Jet_BTagAlgo, &b_Jet_BTagAlgo);
   fChain->SetBranchAddress("Jet.BTagPhys", Jet_BTagPhys, &b_Jet_BTagPhys);
   fChain->SetBranchAddress("Jet.TauTag", Jet_TauTag, &b_Jet_TauTag);
   fChain->SetBranchAddress("Jet.TauWeight", Jet_TauWeight, &b_Jet_TauWeight);
   fChain->SetBranchAddress("Jet.Charge", Jet_Charge, &b_Jet_Charge);
   fChain->SetBranchAddress("Jet.EhadOverEem", Jet_EhadOverEem, &b_Jet_EhadOverEem);
   fChain->SetBranchAddress("Jet.NCharged", Jet_NCharged, &b_Jet_NCharged);
   fChain->SetBranchAddress("Jet.NNeutrals", Jet_NNeutrals, &b_Jet_NNeutrals);
   fChain->SetBranchAddress("Jet.Beta", Jet_Beta, &b_Jet_Beta);
   fChain->SetBranchAddress("Jet.BetaStar", Jet_BetaStar, &b_Jet_BetaStar);
   fChain->SetBranchAddress("Jet.MeanSqDeltaR", Jet_MeanSqDeltaR, &b_Jet_MeanSqDeltaR);
   fChain->SetBranchAddress("Jet.PTD", Jet_PTD, &b_Jet_PTD);
   fChain->SetBranchAddress("Jet.FracPt[5]", Jet_FracPt, &b_Jet_FracPt);
   fChain->SetBranchAddress("Jet.Tau[5]", Jet_Tau, &b_Jet_Tau);
   // fChain->SetBranchAddress("Jet.SoftDroppedJet", Jet_SoftDroppedJet, &b_Jet_SoftDroppedJet);
   // fChain->SetBranchAddress("Jet.SoftDroppedSubJet1", Jet_SoftDroppedSubJet1, &b_Jet_SoftDroppedSubJet1);
   // fChain->SetBranchAddress("Jet.SoftDroppedSubJet2", Jet_SoftDroppedSubJet2, &b_Jet_SoftDroppedSubJet2);
   // fChain->SetBranchAddress("Jet.TrimmedP4[5]", Jet_TrimmedP4, &b_Jet_TrimmedP4);
   // fChain->SetBranchAddress("Jet.PrunedP4[5]", Jet_PrunedP4, &b_Jet_PrunedP4);
   // fChain->SetBranchAddress("Jet.SoftDroppedP4[5]", Jet_SoftDroppedP4, &b_Jet_SoftDroppedP4);
   fChain->SetBranchAddress("Jet.NSubJetsTrimmed", Jet_NSubJetsTrimmed, &b_Jet_NSubJetsTrimmed);
   fChain->SetBranchAddress("Jet.NSubJetsPruned", Jet_NSubJetsPruned, &b_Jet_NSubJetsPruned);
   fChain->SetBranchAddress("Jet.NSubJetsSoftDropped", Jet_NSubJetsSoftDropped, &b_Jet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("Jet.ExclYmerge23", Jet_ExclYmerge23, &b_Jet_ExclYmerge23);
   fChain->SetBranchAddress("Jet.ExclYmerge34", Jet_ExclYmerge34, &b_Jet_ExclYmerge34);
   fChain->SetBranchAddress("Jet.ExclYmerge45", Jet_ExclYmerge45, &b_Jet_ExclYmerge45);
   fChain->SetBranchAddress("Jet.ExclYmerge56", Jet_ExclYmerge56, &b_Jet_ExclYmerge56);
   // fChain->SetBranchAddress("Jet.Constituents", Jet_Constituents, &b_Jet_Constituents);
   // fChain->SetBranchAddress("Jet.Particles", Jet_Particles, &b_Jet_Particles);
   // fChain->SetBranchAddress("Jet.Area", Jet_Area, &b_Jet_Area);
   fChain->SetBranchAddress("Jet_size", &Jet_size, &b_Jet_size);
   fChain->SetBranchAddress("Electron", &Electron_, &b_Electron_);
   fChain->SetBranchAddress("Electron.fUniqueID", Electron_fUniqueID, &b_Electron_fUniqueID);
   fChain->SetBranchAddress("Electron.fBits", Electron_fBits, &b_Electron_fBits);
   fChain->SetBranchAddress("Electron.PT", Electron_PT, &b_Electron_PT);
   fChain->SetBranchAddress("Electron.Eta", Electron_Eta, &b_Electron_Eta);
   fChain->SetBranchAddress("Electron.Phi", Electron_Phi, &b_Electron_Phi);
   fChain->SetBranchAddress("Electron.T", Electron_T, &b_Electron_T);
   fChain->SetBranchAddress("Electron.Charge", Electron_Charge, &b_Electron_Charge);
   fChain->SetBranchAddress("Electron.EhadOverEem", Electron_EhadOverEem, &b_Electron_EhadOverEem);
   // fChain->SetBranchAddress("Electron.Particle", Electron_Particle, &b_Electron_Particle);
   fChain->SetBranchAddress("Electron.IsolationVar", Electron_IsolationVar, &b_Electron_IsolationVar);
   fChain->SetBranchAddress("Electron.IsolationVarRhoCorr", Electron_IsolationVarRhoCorr, &b_Electron_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Electron.SumPtCharged", Electron_SumPtCharged, &b_Electron_SumPtCharged);
   fChain->SetBranchAddress("Electron.SumPtNeutral", Electron_SumPtNeutral, &b_Electron_SumPtNeutral);
   fChain->SetBranchAddress("Electron.SumPtChargedPU", Electron_SumPtChargedPU, &b_Electron_SumPtChargedPU);
   fChain->SetBranchAddress("Electron.SumPt", Electron_SumPt, &b_Electron_SumPt);
   fChain->SetBranchAddress("Electron.D0", Electron_D0, &b_Electron_D0);
   fChain->SetBranchAddress("Electron.DZ", Electron_DZ, &b_Electron_DZ);
   fChain->SetBranchAddress("Electron.ErrorD0", Electron_ErrorD0, &b_Electron_ErrorD0);
   fChain->SetBranchAddress("Electron.ErrorDZ", Electron_ErrorDZ, &b_Electron_ErrorDZ);
   fChain->SetBranchAddress("Electron_size", &Electron_size, &b_Electron_size);
   fChain->SetBranchAddress("Photon", &Photon_, &b_Photon_);
   fChain->SetBranchAddress("Photon.fUniqueID", Photon_fUniqueID, &b_Photon_fUniqueID);
   fChain->SetBranchAddress("Photon.fBits", Photon_fBits, &b_Photon_fBits);
   fChain->SetBranchAddress("Photon.PT", Photon_PT, &b_Photon_PT);
   fChain->SetBranchAddress("Photon.Eta", Photon_Eta, &b_Photon_Eta);
   fChain->SetBranchAddress("Photon.Phi", Photon_Phi, &b_Photon_Phi);
   fChain->SetBranchAddress("Photon.E", Photon_E, &b_Photon_E);
   fChain->SetBranchAddress("Photon.T", Photon_T, &b_Photon_T);
   fChain->SetBranchAddress("Photon.EhadOverEem", Photon_EhadOverEem, &b_Photon_EhadOverEem);
   // fChain->SetBranchAddress("Photon.Particles", Photon_Particles, &b_Photon_Particles);
   fChain->SetBranchAddress("Photon.IsolationVar", Photon_IsolationVar, &b_Photon_IsolationVar);
   fChain->SetBranchAddress("Photon.IsolationVarRhoCorr", Photon_IsolationVarRhoCorr, &b_Photon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Photon.SumPtCharged", Photon_SumPtCharged, &b_Photon_SumPtCharged);
   fChain->SetBranchAddress("Photon.SumPtNeutral", Photon_SumPtNeutral, &b_Photon_SumPtNeutral);
   fChain->SetBranchAddress("Photon.SumPtChargedPU", Photon_SumPtChargedPU, &b_Photon_SumPtChargedPU);
   fChain->SetBranchAddress("Photon.SumPt", Photon_SumPt, &b_Photon_SumPt);
   fChain->SetBranchAddress("Photon.Status", Photon_Status, &b_Photon_Status);
   fChain->SetBranchAddress("Photon_size", &Photon_size, &b_Photon_size);
   fChain->SetBranchAddress("Muon", &Muon_, &b_Muon_);
   fChain->SetBranchAddress("Muon.fUniqueID", Muon_fUniqueID, &b_Muon_fUniqueID);
   fChain->SetBranchAddress("Muon.fBits", Muon_fBits, &b_Muon_fBits);
   fChain->SetBranchAddress("Muon.PT", Muon_PT, &b_Muon_PT);
   fChain->SetBranchAddress("Muon.Eta", Muon_Eta, &b_Muon_Eta);
   fChain->SetBranchAddress("Muon.Phi", Muon_Phi, &b_Muon_Phi);
   fChain->SetBranchAddress("Muon.T", Muon_T, &b_Muon_T);
   fChain->SetBranchAddress("Muon.Charge", Muon_Charge, &b_Muon_Charge);
   // fChain->SetBranchAddress("Muon.Particle", Muon_Particle, &b_Muon_Particle);
   fChain->SetBranchAddress("Muon.IsolationVar", Muon_IsolationVar, &b_Muon_IsolationVar);
   fChain->SetBranchAddress("Muon.IsolationVarRhoCorr", Muon_IsolationVarRhoCorr, &b_Muon_IsolationVarRhoCorr);
   fChain->SetBranchAddress("Muon.SumPtCharged", Muon_SumPtCharged, &b_Muon_SumPtCharged);
   fChain->SetBranchAddress("Muon.SumPtNeutral", Muon_SumPtNeutral, &b_Muon_SumPtNeutral);
   fChain->SetBranchAddress("Muon.SumPtChargedPU", Muon_SumPtChargedPU, &b_Muon_SumPtChargedPU);
   fChain->SetBranchAddress("Muon.SumPt", Muon_SumPt, &b_Muon_SumPt);
   fChain->SetBranchAddress("Muon.D0", Muon_D0, &b_Muon_D0);
   fChain->SetBranchAddress("Muon.DZ", Muon_DZ, &b_Muon_DZ);
   fChain->SetBranchAddress("Muon.ErrorD0", Muon_ErrorD0, &b_Muon_ErrorD0);
   fChain->SetBranchAddress("Muon.ErrorDZ", Muon_ErrorDZ, &b_Muon_ErrorDZ);
   fChain->SetBranchAddress("Muon_size", &Muon_size, &b_Muon_size);
   fChain->SetBranchAddress("FatJet", &FatJet_, &b_FatJet_);
   fChain->SetBranchAddress("FatJet.fUniqueID", FatJet_fUniqueID, &b_FatJet_fUniqueID);
   fChain->SetBranchAddress("FatJet.fBits", FatJet_fBits, &b_FatJet_fBits);
   fChain->SetBranchAddress("FatJet.PT", FatJet_PT, &b_FatJet_PT);
   fChain->SetBranchAddress("FatJet.Eta", FatJet_Eta, &b_FatJet_Eta);
   fChain->SetBranchAddress("FatJet.Phi", FatJet_Phi, &b_FatJet_Phi);
   fChain->SetBranchAddress("FatJet.T", FatJet_T, &b_FatJet_T);
   fChain->SetBranchAddress("FatJet.Mass", FatJet_Mass, &b_FatJet_Mass);
   fChain->SetBranchAddress("FatJet.DeltaEta", FatJet_DeltaEta, &b_FatJet_DeltaEta);
   fChain->SetBranchAddress("FatJet.DeltaPhi", FatJet_DeltaPhi, &b_FatJet_DeltaPhi);
   fChain->SetBranchAddress("FatJet.Flavor", FatJet_Flavor, &b_FatJet_Flavor);
   fChain->SetBranchAddress("FatJet.FlavorAlgo", FatJet_FlavorAlgo, &b_FatJet_FlavorAlgo);
   fChain->SetBranchAddress("FatJet.FlavorPhys", FatJet_FlavorPhys, &b_FatJet_FlavorPhys);
   fChain->SetBranchAddress("FatJet.BTag", FatJet_BTag, &b_FatJet_BTag);
   fChain->SetBranchAddress("FatJet.BTagAlgo", FatJet_BTagAlgo, &b_FatJet_BTagAlgo);
   fChain->SetBranchAddress("FatJet.BTagPhys", FatJet_BTagPhys, &b_FatJet_BTagPhys);
   fChain->SetBranchAddress("FatJet.TauTag", FatJet_TauTag, &b_FatJet_TauTag);
   fChain->SetBranchAddress("FatJet.TauWeight", FatJet_TauWeight, &b_FatJet_TauWeight);
   fChain->SetBranchAddress("FatJet.Charge", FatJet_Charge, &b_FatJet_Charge);
   fChain->SetBranchAddress("FatJet.EhadOverEem", FatJet_EhadOverEem, &b_FatJet_EhadOverEem);
   fChain->SetBranchAddress("FatJet.NCharged", FatJet_NCharged, &b_FatJet_NCharged);
   fChain->SetBranchAddress("FatJet.NNeutrals", FatJet_NNeutrals, &b_FatJet_NNeutrals);
   fChain->SetBranchAddress("FatJet.Beta", FatJet_Beta, &b_FatJet_Beta);
   fChain->SetBranchAddress("FatJet.BetaStar", FatJet_BetaStar, &b_FatJet_BetaStar);
   fChain->SetBranchAddress("FatJet.MeanSqDeltaR", FatJet_MeanSqDeltaR, &b_FatJet_MeanSqDeltaR);
   fChain->SetBranchAddress("FatJet.PTD", FatJet_PTD, &b_FatJet_PTD);
   fChain->SetBranchAddress("FatJet.FracPt[5]", FatJet_FracPt, &b_FatJet_FracPt);
   fChain->SetBranchAddress("FatJet.Tau[5]", FatJet_Tau, &b_FatJet_Tau);
   // fChain->SetBranchAddress("FatJet.SoftDroppedJet", FatJet_SoftDroppedJet, &b_FatJet_SoftDroppedJet);
   // fChain->SetBranchAddress("FatJet.SoftDroppedSubJet1", FatJet_SoftDroppedSubJet1, &b_FatJet_SoftDroppedSubJet1);
   // fChain->SetBranchAddress("FatJet.SoftDroppedSubJet2", FatJet_SoftDroppedSubJet2, &b_FatJet_SoftDroppedSubJet2);
   // fChain->SetBranchAddress("FatJet.TrimmedP4[5]", FatJet_TrimmedP4, &b_FatJet_TrimmedP4);
   // fChain->SetBranchAddress("FatJet.PrunedP4[5]", FatJet_PrunedP4, &b_FatJet_PrunedP4);
   // fChain->SetBranchAddress("FatJet.SoftDroppedP4[5]", FatJet_SoftDroppedP4, &b_FatJet_SoftDroppedP4);
   fChain->SetBranchAddress("FatJet.NSubJetsTrimmed", FatJet_NSubJetsTrimmed, &b_FatJet_NSubJetsTrimmed);
   fChain->SetBranchAddress("FatJet.NSubJetsPruned", FatJet_NSubJetsPruned, &b_FatJet_NSubJetsPruned);
   fChain->SetBranchAddress("FatJet.NSubJetsSoftDropped", FatJet_NSubJetsSoftDropped, &b_FatJet_NSubJetsSoftDropped);
   fChain->SetBranchAddress("FatJet.ExclYmerge23", FatJet_ExclYmerge23, &b_FatJet_ExclYmerge23);
   fChain->SetBranchAddress("FatJet.ExclYmerge34", FatJet_ExclYmerge34, &b_FatJet_ExclYmerge34);
   fChain->SetBranchAddress("FatJet.ExclYmerge45", FatJet_ExclYmerge45, &b_FatJet_ExclYmerge45);
   fChain->SetBranchAddress("FatJet.ExclYmerge56", FatJet_ExclYmerge56, &b_FatJet_ExclYmerge56);
   // fChain->SetBranchAddress("FatJet.Constituents", FatJet_Constituents, &b_FatJet_Constituents);
   // fChain->SetBranchAddress("FatJet.Particles", FatJet_Particles, &b_FatJet_Particles);
   // fChain->SetBranchAddress("FatJet.Area", FatJet_Area, &b_FatJet_Area);
   fChain->SetBranchAddress("FatJet_size", &FatJet_size, &b_FatJet_size);
   fChain->SetBranchAddress("MissingET", &MissingET_, &b_MissingET_);
   fChain->SetBranchAddress("MissingET.fUniqueID", MissingET_fUniqueID, &b_MissingET_fUniqueID);
   fChain->SetBranchAddress("MissingET.fBits", MissingET_fBits, &b_MissingET_fBits);
   fChain->SetBranchAddress("MissingET.MET", MissingET_MET, &b_MissingET_MET);
   fChain->SetBranchAddress("MissingET.Eta", MissingET_Eta, &b_MissingET_Eta);
   fChain->SetBranchAddress("MissingET.Phi", MissingET_Phi, &b_MissingET_Phi);
   fChain->SetBranchAddress("MissingET_size", &MissingET_size, &b_MissingET_size);
   fChain->SetBranchAddress("ScalarHT", &ScalarHT_, &b_ScalarHT_);
   fChain->SetBranchAddress("ScalarHT.fUniqueID", ScalarHT_fUniqueID, &b_ScalarHT_fUniqueID);
   fChain->SetBranchAddress("ScalarHT.fBits", ScalarHT_fBits, &b_ScalarHT_fBits);
   fChain->SetBranchAddress("ScalarHT.HT", ScalarHT_HT, &b_ScalarHT_HT);
   fChain->SetBranchAddress("ScalarHT_size", &ScalarHT_size, &b_ScalarHT_size);
 
}

Bool_t DelAna::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

int DelAna::ReadLimited(int level, Long64_t entry)
{
  // This function is meant to speed up your run-time.
  // It does this by not reading in all branches for an event,
  // but only those that we tell it to.
  // With level=0, the whole event is read-in. This is default behavior.
  // With level=1, you turn on only needed variables.

  if(level==0){ GetEntry(entry); return 1; }
  if(level==1){
    //Turn on only those branches that we need

    b_Particle_->GetEntry(entry);   //!
   b_Particle_fUniqueID->GetEntry(entry);   //!
   b_Particle_fBits->GetEntry(entry);   //!
   b_Particle_PID->GetEntry(entry);   //!
   b_Particle_Status->GetEntry(entry);   //!
   b_Particle_IsPU->GetEntry(entry);   //!
   b_Particle_M1->GetEntry(entry);   //!
   b_Particle_M2->GetEntry(entry);   //!
   b_Particle_D1->GetEntry(entry);   //!
   b_Particle_D2->GetEntry(entry);   //!
   b_Particle_Charge->GetEntry(entry);   //!
   b_Particle_Mass->GetEntry(entry);   //!
   b_Particle_E->GetEntry(entry);   //!
   b_Particle_Px->GetEntry(entry);   //!
   b_Particle_Py->GetEntry(entry);   //!
   b_Particle_Pz->GetEntry(entry);   //!
   b_Particle_P->GetEntry(entry);   //!
   b_Particle_PT->GetEntry(entry);   //!
   b_Particle_Eta->GetEntry(entry);   //!
   b_Particle_Phi->GetEntry(entry);   //!
   b_Particle_Rapidity->GetEntry(entry);   //!
   b_Particle_CtgTheta->GetEntry(entry);   //!
   b_Particle_D0->GetEntry(entry);   //!
   b_Particle_DZ->GetEntry(entry);   //!
   b_Particle_T->GetEntry(entry);   //!
   b_Particle_X->GetEntry(entry);   //!
   b_Particle_Y->GetEntry(entry);   //!
   b_Particle_Z->GetEntry(entry);   //!
   b_Particle_size->GetEntry(entry);   //!
    
    return 1;
  }
  
  return 0;
}

#endif // #ifdef DelAna_cxx
