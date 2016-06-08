// This code implementation is the intellectual property of
// the GEANT4 collaboration.
//
// By copying, distributing or modifying the Program (or any work
// based on the Program) you indicate your acceptance of this statement,
// and all its terms.
//
// $Id: ProcessesCount.hh,v 1.5 2001/03/08 16:45:17 maire Exp $
// GEANT4 tag $Name: geant4-03-01 $
//
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

// 08.03.01 Hisaya: adapted for STL   
// 26.10.98 mma   : first version

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....
//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

#ifndef ProcessesCount_HH
#define ProcessesCount_HH

#include "globals.hh"
#include "g4std/vector"

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....

class OneProcessCount
{
public:
    OneProcessCount(G4String name) {Name=name; Counter=0;};
   ~OneProcessCount() {};
   
public:
    G4String      GetName()       {return Name;};
    G4int         GetCounter()    {return Counter;};
    void          Count()         {Counter++;};
    
private:
    G4String Name;            // process name
    G4int    Counter;         // process counter
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo....


typedef G4std::vector<OneProcessCount*> ProcessesCount;

#endif





