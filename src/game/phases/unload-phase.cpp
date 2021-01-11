#include "game/phases/unload-phase.hpp"

using namespace game;

// -----------------------------------------------------------------------------

CUnloadPhase::CUnloadPhase() {

}

CUnloadPhase::~CUnloadPhase() {

}

// -----------------------------------------------------------------------------

EPhase CUnloadPhase::getPhase() const {
    return EPhase::UNLOAD;
}

// -----------------------------------------------------------------------------

void CUnloadPhase::onEnter() {

}

void CUnloadPhase::onLeave() {

}

EPhase CUnloadPhase::onRun() {
    return EPhase::SHUTDOWN;
}