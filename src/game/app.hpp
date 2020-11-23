#pragma once

namespace Game {

class CApp {
    public:
        CApp();
        ~CApp();

        void Start(int width, int height);
        void Run();
        void Exit();
};

}