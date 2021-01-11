#include "game/phases/load-phase.hpp"

using namespace game;

// -----------------------------------------------------------------------------

CLoadPhase::CLoadPhase() {

}

CLoadPhase::~CLoadPhase() {
    
}

// -----------------------------------------------------------------------------

EPhase CLoadPhase::getPhase() const {
    return EPhase::LOAD;
}

// -----------------------------------------------------------------------------

void CLoadPhase::onEnter() {

}

void CLoadPhase::onLeave() {

}

EPhase CLoadPhase::onRun() {
    return EPhase::GAME;
}