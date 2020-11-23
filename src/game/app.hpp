#pragma once

namespace game {

class CApp {
    public:
        static CApp& instance() {
            static CApp app;
            return app;
        }

        void Start(int width, int height);
        void Run();
        void Exit();

    private:
        CApp();
        ~CApp();
};

}