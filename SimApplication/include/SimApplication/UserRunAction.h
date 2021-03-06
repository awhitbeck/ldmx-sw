#ifndef SIMAPPLICATION_USERRUNACTION_H_
#define SIMAPPLICATION_USERRUNACTION_H_

// LDMX
#include "SimPlugins/PluginManagerAccessor.h"

// Geant4
#include "G4UserRunAction.hh"
#include "G4Run.hh"

namespace sim {

class UserRunAction:
        public G4UserRunAction,
        public PluginManagerAccessor {

    public:
        UserRunAction();
        virtual ~UserRunAction();

        void BeginOfRunAction(const G4Run*);
        void EndOfRunAction(const G4Run*);
};

}

#endif
