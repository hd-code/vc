#include "app.hpp"

#include <exception>
#include <iostream>

// -----------------------------------------------------------------------------

int main() {
    Game::CApp app;

    try {
        app.Start(1920, 1080);
        app.Run();
    }
    catch (const std::exception e) {
        std::cout << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "unknown error" << std::endl;
    }

    try {
        app.Exit();
    }
    catch (const std::exception e) {
        std::cout << e.what() << std::endl;
    }
    catch (...) {
        std::cout << "unknown error" << std::endl;
    }

    return 0;
}