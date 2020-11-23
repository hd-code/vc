#pragma once

#include "core/base-state.hpp"

// -----------------------------------------------------------------------------

namespace logic {

class CLoadState : public core::IBaseState {
    public:
        static CLoadState& instance() {
            static CLoadState state;
            return state;
        }

    public:
        void onEnter();
        void onRun();
        void onLeave();

    private:
        CLoadState();
        ~CLoadState();
};

}