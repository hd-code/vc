#include "game/states/game-state.hpp"

using namespace game;

// -----------------------------------------------------------------------------

CGameState::CGameState() {

}

CGameState::~CGameState() {
    
}

// -----------------------------------------------------------------------------

EState CGameState::getState() const {
    return EState::GAME;
}

// -----------------------------------------------------------------------------

void CGameState::onEnter() {

}

void CGameState::onLeave() {

}

EState CGameState::onRun() {
    return EState::GAME;
}