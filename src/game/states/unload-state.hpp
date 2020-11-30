#pragma once

#include "core/singleton.hpp"
#include "game/states/base-state.hpp"

// -----------------------------------------------------------------------------

namespace game {

class CUnloadState : public core::CSingleton<CUnloadState>, public IBaseState {
    public:
        EState getState() const;

    public:
        void onEnter();
        EState onRun();
        void onLeave();

    private:
        template<class T>
        friend class core::CSingleton;
        
        CUnloadState();
        ~CUnloadState();
};

}