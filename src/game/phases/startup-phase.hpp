#pragma once

#include "core/singleton.hpp"
#include "game/phases/base-phase.hpp"

// -----------------------------------------------------------------------------

namespace game {

class CStartupPhase : public core::CSingleton<CStartupPhase>, public IBasePhase {
    public:
        EPhase getPhase() const;

    public:
        void onEnter();
        void onLeave();
        EPhase onRun();

    private:
        template<class T>
        friend class core::CSingleton;
        
        CStartupPhase();
        ~CStartupPhase();
};

}