#include "app.hpp"

#include "game/states/game-state.hpp"
#include "game/states/load-state.hpp"
#include "game/states/menu-state.hpp"
#include "game/states/shutdown-state.hpp"
#include "game/states/startup-state.hpp"
#include "game/states/unload-state.hpp"

using namespace game;

// -----------------------------------------------------------------------------

CApp::CApp() : currentState(&CStartupState::instance()) {

}

CApp::~CApp() {

}

// -----------------------------------------------------------------------------

void CApp::start(int width, int height) {

}

void CApp::exit() {

}

void CApp::run() {
	
}

// -----------------------------------------------------------------------------

void CApp::onRun() {
	EState nextState = currentState->onRun();
	if (nextState != currentState->getState()) {
		onTransition(nextState);
	}
}

void CApp::onTransition(EState newState) {
	currentState->onLeave();

	switch (newState) {
		case EState::GAME:
			currentState = &CGameState::instance();
			break;

		case EState::LOAD:
			currentState = &CLoadState::instance();
			break;

		case EState::MENU:
			currentState = &CMenuState::instance();
			break;

		case EState::SHUTDOWN:
			currentState = &CShutdownState::instance();
			break;

		case EState::STARTUP:
			currentState = &CStartupState::instance();
			break;

		case EState::UNLOAD:
			currentState = &CUnloadState::instance();
			break;
	}

	currentState->onEnter();
}