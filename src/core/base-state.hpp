#pragma once

namespace core {

class IBaseState {
    virtual void onEnter() = 0;
    virtual void onRun() = 0;
    virtual void onLeave() = 0;
};

}