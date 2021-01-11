#include "game/phases/shutdown-phase.hpp"

using namespace game;

// -----------------------------------------------------------------------------

CShutdownPhase::CShutdownPhase() {

}

CShutdownPhase::~CShutdownPhase() {

}

// -----------------------------------------------------------------------------

EPhase CShutdownPhase::getPhase() const {
    return EPhase::SHUTDOWN;
}

// -----------------------------------------------------------------------------

void CShutdownPhase::onEnter() {

}

void CShutdownPhase::onLeave() {

}

EPhase CShutdownPhase::onRun() {
    return EPhase::EXIT;
}