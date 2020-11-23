#pragma once

#include "core/base-state.hpp"

// -----------------------------------------------------------------------------

namespace logic {

class CStartupState : public core::IBaseState {
    public:
        static CStartupState& instance() {
            static CStartupState state;
            return state;
        }

    public:
        void onEnter();
        void onRun();
        void onLeave();

    private:
        CStartupState();
        ~CStartupState();
};

}