// -*- C++ -*-
//
// Package:    GenJetMaker
// Class:      GenJetMaker
//
/**\class GenJetMaker GenJetMaker.h CMS2/NtupleMaker/interface/GenJetMaker.h

Description:  GenJet Collection

Implementation:
*/
//
//
//
// Original Author:  Sanjay Padhi
//         Created:  Thu Aug 21 15:47:53 CEST 2008
// $Id: GenJetMaker.h,v 1.1 2008/08/22 07:49:35 spadhi Exp $
//
//

#ifndef CMS2_GENJETMAKER_H
#define CMS2_GENJETMAKER_H

// system include files
#include <memory>
#include <string>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/ParameterSet/interface/InputTag.h"

class GenJetMaker : public edm::EDProducer {
public:
  explicit GenJetMaker (const edm::ParameterSet&);
  ~GenJetMaker();

private:
  virtual void beginJob(const edm::EventSetup&) ;
  virtual void produce(edm::Event&, const edm::EventSetup&);
  virtual void endJob() ;

  // ----------member data ---------------------------
  edm::InputTag genJetsInputTag;
};
#endif