#pragma once

#include "core/singleton.hpp"
#include "game/states/base-state.hpp"

namespace game {

class CApp : public core::CSingleton<CApp> {
    public:
        void start(int width, int height);
        void run();
        void exit();

    private:
        template<class T>
        friend class core::CSingleton;

        CApp();
        ~CApp();

    private:
        void onRun();
        void onTransition(EState newState);

    private:
        IBaseState* currentState;
};

}