#include "game/phases/startup-phase.hpp"

using namespace game;

// -----------------------------------------------------------------------------

CStartupPhase::CStartupPhase() {

}

CStartupPhase::~CStartupPhase() {

}

// -----------------------------------------------------------------------------

EPhase CStartupPhase::getPhase() const {
    return EPhase::STARTUP;
}

// -----------------------------------------------------------------------------

void CStartupPhase::onEnter() {

}

void CStartupPhase::onLeave() {

}

EPhase CStartupPhase::onRun() {
    return EPhase::MENU;
}