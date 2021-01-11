#include "game/phases/menu-phase.hpp"

using namespace game;

// -----------------------------------------------------------------------------

CMenuPhase::CMenuPhase() {

}

CMenuPhase::~CMenuPhase() {
    
}

// -----------------------------------------------------------------------------

EPhase CMenuPhase::getPhase() const {
    return EPhase::MENU;
}

// -----------------------------------------------------------------------------

void CMenuPhase::onEnter() {

}

void CMenuPhase::onLeave() {

}

EPhase CMenuPhase::onRun() {
    return EPhase::LOAD;
}