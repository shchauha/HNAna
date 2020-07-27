#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>
//#include "DelAna.h"

//This is the driver script, which becomes our main program
//Here we set the options which we wish to use, which files
//we want to run over and so on.

//the argument decides what input sample we want to run over.
//we give separate names of output files for each set of
//input files.
void ana(int sample=1)
{
  gROOT->Time();

  const char *hstfilename, *sumfilename;

  TChain *chain = new TChain("Delphes");
  DelAna m_selec;//declared an instance of our class.

  std::cout<<"Declared chains"<<std::endl;
  
    
  if(sample==1){
    chain->Add("/home/shchauha/2020/Analysis/RHN/RHN_Mu_13TeV_10k_v2.root");
    // chain->Add("DY50.root");
    //can have more chain->Add() lines here.
    hstfilename = "hst_RHN_v2.root";//output histogram file
    sumfilename = "sum_RHN_v2.txt"; //output text file
  }

  std::cout<<"Output files are "<<hstfilename<<" and "<<sumfilename<<std::endl;
  m_selec.SetHstFileName(hstfilename);
  m_selec.SetSumFileName(sumfilename);
  m_selec.SetVerbose(2000);//set verbosity level for output.
  m_selec.SetData(0);
  m_selec.SetSample(sample);

  //this calls the Process function for each event in the chain
  //and runs the m_selec code over it.
  chain->Process(&m_selec);

  gROOT->Time();
}

int main(int argc, char *argv[])
{
  //gSystem->Load("libDelphes");
  if(argc<2){
    std::cout<<" Please give one integer argument "<<std::endl;
    return 0;
  }
  int sample_id = atoi(argv[1]);

  ana(sample_id);
  return 0;
}

