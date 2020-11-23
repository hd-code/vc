#pragma once

#include "core/base-state.hpp"

// -----------------------------------------------------------------------------

namespace data {

class CGameState : public core::IBaseState {
    public:
        static CGameState& instance() {
            static CGameState state;
            return state;
        }

    public:
        void onEnter();
        void onRun();
        void onLeave();

    private:
        CGameState();
        ~CGameState();
};

}