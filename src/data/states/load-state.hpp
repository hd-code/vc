#pragma once

#include "core/base-state.hpp"

// -----------------------------------------------------------------------------

namespace data {

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