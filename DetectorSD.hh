#ifndef DETECTORSD_HH
#define DETECTORSD_HH

#include "G4VSensitiveDetector.hh"

class SensitiveDetector : public G4VSensitiveDetector
{
public:
    SensitiveDetector(G4String);
    ~SensitiveDetector();
    
    G4bool ProcessHits(G4Step *, G4TouchableHistory *);
    
    //G4VPhysicalVolume *Construct();
/*
private:
    virtual G4bool ProcessHits(G4Step *, G4TouchableHistory *);
*/
};

#endif
