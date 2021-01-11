#pragma once

#include "core/singleton.hpp"
#include "game/phases/base-phase.hpp"

// -----------------------------------------------------------------------------

namespace game {

class CUnloadPhase : public core::CSingleton<CUnloadPhase>, public IBasePhase {
    public:
        EPhase getPhase() const;

    public:
        void onEnter();
        void onLeave();
        EPhase onRun();

    private:
        template<class T>
        friend class core::CSingleton;
        
        CUnloadPhase();
        ~CUnloadPhase();
};

}