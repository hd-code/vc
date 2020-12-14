#include "game/states/shutdown-state.hpp"

using namespace game;

// -----------------------------------------------------------------------------

CShutdownState::CShutdownState() {

}

CShutdownState::~CShutdownState() {

}

// -----------------------------------------------------------------------------

EState CShutdownState::getState() const {
    return EState::SHUTDOWN;
}

// -----------------------------------------------------------------------------

void CShutdownState::onEnter() {

}

void CShutdownState::onLeave() {

}

EState CShutdownState::onRun() {
    return EState::SHUTDOWN;
}