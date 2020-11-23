#include "app.hpp"

#include "gui/dummy.cpp"
#include "logic/hello.hpp"

using namespace Game;

// -----------------------------------------------------------------------------

CApp::CApp() {}
CApp::~CApp() {}

// -----------------------------------------------------------------------------

void CApp::Start(int width, int height) {
	Gui::printMsg();
	Logic::Hello* tmp = new Logic::Hello();
	tmp->greet();
	delete tmp;
}

void CApp::Exit() {

}

// -----------------------------------------------------------------------------

void CApp::Run() {

}