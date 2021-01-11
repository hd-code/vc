#include "game/phases/game-phase.hpp"

using namespace game;

// -----------------------------------------------------------------------------

CGamePhase::CGamePhase() {

}

CGamePhase::~CGamePhase() {
    
}

// -----------------------------------------------------------------------------

EPhase CGamePhase::getPhase() const {
    return EPhase::GAME;
}

// -----------------------------------------------------------------------------

void CGamePhase::onEnter() {

}

void CGamePhase::onLeave() {

}

EPhase CGamePhase::onRun() {
    return EPhase::UNLOAD;
}