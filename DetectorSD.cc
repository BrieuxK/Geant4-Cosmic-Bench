#include "DetectorSD.hh"
#include "G4HCofThisEvent.hh"
#include "G4Step.hh"

SensitiveDetector(const G4String& name,
                  const G4String& hitsCollectionName,
                  G4int nofCells); 
: G4VSensitiveDetector::~SensitiveDetector(name) 
{
    collectionName.insert(hitsCollectionName);
}

SensitiveDetector::~SensitiveDetector()
{}
/*
void CalorimeterSD::Initialize(G4HCofThisEvent* hce)
{
  // Create hits collection
  fHitsCollection
    = new CalorHitsCollection(SensitiveDetectorName, collectionName[0]);

  // Add this collection in hce
  auto hcID
    = G4SDManager::GetSDMpointer()->GetCollectionID(collectionName[0]);
  hce->AddHitsCollection( hcID, fHitsCollection );

  // Create hits
  // fNofCells for cells + one more for total sums
  for (G4int i=0; i<fNofCells+1; i++ ) {
    fHitsCollection->insert(new CalorHit());
  }
}
*/
G4bool SensitiveDetector::ProcessHits(G4Step, *aStep, G4TouchableHistory *ROhist)
{
    G4Track *track = aStep->GetTrack();
    
    G4StepPoint *preStepPoint = aStep->GetPreStepPoint();
    G4StepPoint *postStepPoint = aStep->GetPostStepPoint();
    
    G4ThreeVector posParticle = preStepPoint->GetPosition();
    
    G4cout << "Position de la particule : " << posParticle << G4endl;
/*
    const G4VTouchable *touchable = aStep->GetPreStepPoint()->GetTouchable();
    
    G4int copyNo = touchable->GetCopyNumber();
    G4cout << "Copy number : " << copyNo << G4endl;
*/
}
