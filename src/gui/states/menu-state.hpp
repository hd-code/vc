#pragma once

#include "core/base-state.hpp"

// -----------------------------------------------------------------------------

namespace gui {

class CMenuState : public core::IBaseState {
    public:
        static CMenuState& instance() {
            static CMenuState state;
            return state;
        }

    public:
        void onEnter();
        void onRun();
        void onLeave();

    private:
        CMenuState();
        ~CMenuState();
};

}