//
// ********************************************************************
// * License and Disclaimer                                           *
// *                                                                  *
// * The  Geant4 software  is  copyright of the Copyright Holders  of *
// * the Geant4 Collaboration.  It is provided  under  the terms  and *
// * conditions of the Geant4 Software License,  included in the file *
// * LICENSE and available at  http://cern.ch/geant4/license .  These *
// * include a list of copyright holders.                             *
// *                                                                  *
// * Neither the authors of this software system, nor their employing *
// * institutes,nor the agencies providing financial support for this *
// * work  make  any representation or  warranty, express or implied, *
// * regarding  this  software system or assume any liability for its *
// * use.  Please see the license in the file  LICENSE  and URL above *
// * for the full disclaimer and the limitation of liability.         *
// *                                                                  *
// * This  code  implementation is the result of  the  scientific and *
// * technical work of the GEANT4 collaboration.                      *
// * By using,  copying,  modifying or  distributing the software (or *
// * any work based  on the software)  you  agree  to acknowledge its *
// * use  in  resulting  scientific  publications,  and indicate your *
// * acceptance of all terms of the Geant4 Software license.          *
// ********************************************************************
//
// $Id: HWDetectorConstruction.hh 69565 2013-05-08 12:35:31Z gcosmo $
//
/// \file HWDetectorConstruction.hh
/// \brief Definition of the HWDetectorConstruction class

#ifndef HWDetectorConstruction_h
#define HWDetectorConstruction_h 1

#include "G4VUserDetectorConstruction.hh"
#include "globals.hh"

class G4VPhysicalVolume;

/// Detector construction class to define materials and geometry.

class HWDetectorConstruction : public G4VUserDetectorConstruction
{
  public:
    HWDetectorConstruction();
    virtual ~HWDetectorConstruction();

  public:
    virtual G4VPhysicalVolume* Construct();

    const G4VPhysicalVolume* GetHeadPV() const;    
    const G4VPhysicalVolume* GetChestPV() const;    

  private:
    G4VPhysicalVolume*  fHeadPV;
    G4VPhysicalVolume*  fChestPV;
};

inline const G4VPhysicalVolume* HWDetectorConstruction::GetHeadPV() const {
  return fHeadPV;
}

inline const G4VPhysicalVolume* HWDetectorConstruction::GetChestPV() const {
  return fChestPV;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

#endif

