#include "app.hpp"

#include "game/phases/game-phase.hpp"
#include "game/phases/load-phase.hpp"
#include "game/phases/menu-phase.hpp"
#include "game/phases/shutdown-phase.hpp"
#include "game/phases/startup-phase.hpp"
#include "game/phases/unload-phase.hpp"

#include <iostream>

using namespace game;

// -----------------------------------------------------------------------------

CApp::CApp() : currentPhase(&CStartupPhase::getInstance()) {

}

CApp::~CApp() {

}

// -----------------------------------------------------------------------------

void CApp::start(int width, int height) {

}

void CApp::exit() {

}

void CApp::run() {
	while (currentPhase != nullptr) {
		onRun();
	}
}

// -----------------------------------------------------------------------------

void CApp::onRun() {
	std::cout << int(currentPhase->getPhase()) << std::endl;
	EPhase nextPhase = currentPhase->onRun();
	if (nextPhase != currentPhase->getPhase()) {
		onTransition(nextPhase);
	}
}

void CApp::onTransition(EPhase nextPhase) {
	currentPhase->onLeave();

	switch (nextPhase) {
		case EPhase::EXIT:
			currentPhase = nullptr;
			return;

		case EPhase::GAME:
			currentPhase = &CGamePhase::getInstance();
			break;

		case EPhase::LOAD:
			currentPhase = &CLoadPhase::getInstance();
			break;

		case EPhase::MENU:
			currentPhase = &CMenuPhase::getInstance();
			break;

		case EPhase::SHUTDOWN:
			currentPhase = &CShutdownPhase::getInstance();
			break;

		case EPhase::STARTUP:
			currentPhase = &CStartupPhase::getInstance();
			break;

		case EPhase::UNLOAD:
			currentPhase = &CUnloadPhase::getInstance();
			break;
	}

	currentPhase->onEnter();
}