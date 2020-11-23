#include "app.hpp"

#include <exception>
#include <iostream>

using namespace game;

// -----------------------------------------------------------------------------

int main() {
    try {
        CApp::instance().Start(1920, 1080);
        CApp::instance().Run();
    }
    catch (const std::exception e) {
        std::cout << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "unknown error" << std::endl;
    }

    try {
        CApp::instance().Exit();
    }
    catch (const std::exception e) {
        std::cout << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "unknown error" << std::endl;
    }

    return 0;
}