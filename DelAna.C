#define DelAna_cxx
// The class definition in DelAna.h has been generated automatically
// by the ROOT utility TTree::MakeSelector(). This class is derived
// from the ROOT class TSelector. For more information on the TSelector
// framework see $ROOTSYS/README/README.SELECTOR or the ROOT User Manual.


// The following methods are defined in this file:
//    Begin():        called every time a loop on the tree starts,
//                    a convenient place to create your histograms.
//    SlaveBegin():   called after Begin(), when on PROOF called only on the
//                    slave servers.
//    Process():      called for each event, in this function you decide what
//                    to read and fill your histograms.
//    SlaveTerminate: called at the end of the loop on the tree, when on PROOF
//                    called only on the slave servers.
//    Terminate():    called at the end of the loop on the tree,
//                    a convenient place to draw/fit your histograms.
//
// To use this file, try the following session on your Tree T:
//
// root> T->Process("DelAna.C")
// root> T->Process("DelAna.C","some options")
// root> T->Process("DelAna.C+")
//


#include "DelAna.h"
#include <TH2.h>
#include <TStyle.h>

void DelAna::Begin(TTree * /*tree*/)
{
   // The Begin() function is called at the start of the query.
   // When running with PROOF Begin() is only called on the client.
   // The tree argument is deprecated (on PROOF 0 is passed).
   TString option = GetOption();
 
}

void DelAna::SlaveBegin(TTree * /*tree*/)
{
   // The SlaveBegin() function is called after the Begin() function.
   // When running with PROOF SlaveBegin() is called on each slave server.
   // The tree argument is deprecated (on PROOF 0 is passed).

   TString option = GetOption();
    //Initialize global variables here.
   GEV = 1000.;    MEV2GEV = .001;
   nEvtTotal = 0;
   //Create the histogram file
   _HstFile = new TFile(_HstFileName,"recreate");
   //Call the function to book the histograms we declared in Hists.
   BookHistograms();
}

void DelAna::SlaveTerminate()
{
   // The SlaveTerminate() function is called after all entries or objects
   // have been processed. When running with PROOF SlaveTerminate() is called
   // on each slave server.
  //Write histograms and close histogram file
  _HstFile->Write();
  _HstFile->Close();
  //Output to screen.
  cout<<"Total events = "<<nEvtTotal<<endl;
  //Open the text output file
  ofstream fout(_SumFileName);
  //Put text output in the summary file.
  fout<<"Total events  = "<<nEvtTotal<<endl;
}

void DelAna::Terminate()
{
   // The Terminate() function is the last function to be called during
   // a query. It always runs on the client, it can be used to present
   // the results graphically or save the results to file.

}


Bool_t DelAna::Process(Long64_t entry)
{
   // The Process() function is called for each entry in the tree (or possibly
   // keyed object in the case of PROOF) to be processed. The entry argument
   // specifies which entry in the currently loaded tree is to be processed.
   // When processing keyed objects with PROOF, the object is already loaded
   // and is available via the fObject pointer.
   //
   // This function should contain the \"body\" of the analysis. It can contain
   // simple or elaborate selection criteria, run algorithms on the data
   // of the event and typically fill histograms.
   //
   // The processing can be stopped by calling Abort().
   //
   // Use fStatus to set the return value of TTree::Process().
   //
   // The return value is currently not used.

  //fReader.SetLocalEntry(entry);

  int readevent = ReadLimited(1,entry);
  if(readevent==0){ cout<<"Did not read in any branches.. quitting."<<endl; return kTRUE;}
  //Increment counter of number of events read in.
  nEvtTotal++;
  //Output processing information to screen based on verbosity level.
  if(_verbosity>1000 && nEvtTotal%1000==0)cout<<"Processed "<<nEvtTotal<<" event..."<<endl;      
  else if(_verbosity>0 && nEvtTotal%50000==0)cout<<"Processed "<<nEvtTotal<<" event..."<<endl;
  //cout << "running "<<Particle_<< endl;

      // START MY CODE         
    //particles.clear();
    ob particles[Particle_];
    for(int i =0;i<Particle_;i++){  

      ob temp;
      temp.v.SetPtEtaPhiM(Particle_PT[i],Particle_Eta[i], Particle_Phi[i], Particle_Mass[i]);
      temp.pid = Particle_PID[i];
      temp.status = Particle_Status[i];
      temp.index = i;
      temp.M1 = Particle_M1[i];
      //temp.M2 = Particle_M2[i];
      // temp.D1 = Particle_D1[i];
      // temp.D2 = Particle_D2[i];
      temp.Dxy = Particle_D0[i];
      temp.Dz = Particle_DZ[i];
      //cout<<" D0 "<<temp.D0<<endl;
      particles[i]=temp;

    }
    //cout<<"p size "<<(int)particles.size()<<endl;

    vector<ob> NW;
    NW.clear();
    for(int i =0;i<Particle_;i++){
      ob m = GetMother(particles[i],particles);
      //if(particles[i].pid==13)cout<<" pid "<<particles[i].pid<<" mother pid "<<m.pid<<endl;      
      if(abs(particles[i].pid)==13 or abs(particles[i].pid)==14){
    	if(particles[i].status==1 and m.pid==66) NW.push_back(particles[i]);
	
      }
      
    }
    //cout<<"dau size "<<NW.size()<<endl;
    //cout<<"d1 "<<NW[0].v.Pt()<<" d2 "<<NW[1].pid<<" d3 "<<NW[2].pid<<endl;
    
    h.NMass->Fill((NW[0].v+NW[1].v+NW[2].v).M());
    h.Dxy->Fill(NW[0].Dxy);
    h.Dz->Fill(NW[0].Dz);
  
   return kTRUE;
}



void DelAna::BookHistograms()
{
  h.NMass  = new TH1F("NMass","NMass",20,20,40); h.NMass->Sumw2();
  h.Dxy  = new TH1F("Dxy","D_{xy}",100,-5.,5.); h.Dxy->Sumw2();
  h.Dz  = new TH1F("Dz","D_z",100,-5.,5.); h.Dz->Sumw2();
}


ob DelAna::GetMother(ob j, ob pa[])
 {
   ob mo;
   mo = j;
   if(j.M1 == -1) return mo;
   if(pa[j.M1].pid!=j.pid){
     mo = pa[j.M1];
     return mo;
   }
   if(pa[j.M1].pid==j.pid){
     mo =GetMother(pa[j.M1], pa);
     
   }
   
   return mo;
 }
