#pragma once

namespace game {

enum class EPhase {
    STARTUP,
    MENU,
    LOAD,
    GAME,
    UNLOAD,
    SHUTDOWN,
    EXIT,
};

class IBasePhase {
    public:
        virtual EPhase getPhase() const = 0;

    public:
        virtual void onEnter() = 0;
        virtual void onLeave() = 0;
        virtual EPhase onRun() = 0;
};

}