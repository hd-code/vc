#pragma once

namespace game {

enum class EState {
    STARTUP,
    MENU,
    LOAD,
    GAME,
    UNLOAD,
    SHUTDOWN,
};

class IBaseState {
    public:
        virtual EState getState() const = 0;

    public:
        virtual void onEnter() = 0;
        virtual EState onRun() = 0;
        virtual void onLeave() = 0;
};

}