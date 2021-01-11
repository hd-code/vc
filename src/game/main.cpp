#include "app.hpp"

#include <exception>
#include <iostream>

using namespace game;

// -----------------------------------------------------------------------------

int main() {
    try {
        CApp::getInstance().start(1920, 1080);
        CApp::getInstance().run();
    }
    catch (const std::exception e) {
        std::cout << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "unknown error" << std::endl;
    }

    try {
        CApp::getInstance().exit();
    }
    catch (const std::exception e) {
        std::cout << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "unknown error" << std::endl;
    }

    return 0;
}