#pragma once

#include "core/singleton.hpp"
#include "game/phases/base-phase.hpp"

// -----------------------------------------------------------------------------

namespace game {

class CLoadPhase : public core::CSingleton<CLoadPhase>, public IBasePhase {
    public:
        EPhase getPhase() const;

    public:
        void onEnter();
        void onLeave();
        EPhase onRun();

    private:
        template<class T>
        friend class core::CSingleton;
        
        CLoadPhase();
        ~CLoadPhase();
};

}