#pragma once

#include "core/base-state.hpp"

// -----------------------------------------------------------------------------

namespace logic {

class CShutdownState : public core::IBaseState {
    public:
        static CShutdownState& instance() {
            static CShutdownState state;
            return state;
        }

    public:
        void onEnter();
        void onRun();
        void onLeave();

    private:
        CShutdownState();
        ~CShutdownState();
};

}