#pragma once

#include "core/base-state.hpp"

// -----------------------------------------------------------------------------

namespace logic {

class CUnloadState : public core::IBaseState {
    public:
        static CUnloadState& instance() {
            static CUnloadState state;
            return state;
        }

    public:
        void onEnter();
        void onRun();
        void onLeave();

    private:
        CUnloadState();
        ~CUnloadState();
};

}