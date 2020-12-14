#include "game/states/unload-state.hpp"

using namespace game;

// -----------------------------------------------------------------------------

CUnloadState::CUnloadState() {

}

CUnloadState::~CUnloadState() {

}

// -----------------------------------------------------------------------------

EState CUnloadState::getState() const {
    return EState::UNLOAD;
}

// -----------------------------------------------------------------------------

void CUnloadState::onEnter() {

}

void CUnloadState::onLeave() {

}

EState CUnloadState::onRun() {
    return EState::UNLOAD;
}