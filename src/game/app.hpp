#pragma once

#include "core/singleton.hpp"
#include "game/phases/base-phase.hpp"

namespace game {

class CApp : public core::CSingleton<CApp> {
    public:
        void start(int width, int height);
        void exit();
        void run();

    private:
        template<class T>
        friend class core::CSingleton;

        CApp();
        ~CApp();

    private:
        void onRun();
        void onTransition(EPhase newState);

    private:
        IBasePhase* currentPhase;
};

}