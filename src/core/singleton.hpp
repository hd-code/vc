#pragma once

namespace core {

template<class T>
class CSingleton {
    public:
        static T& getInstance() {
            static T instance;
            return instance;
        }

    protected:
        CSingleton() = default;
        ~CSingleton() = default;

    private:
        CSingleton(const T& original) = delete; // is not implemented
        T& operator = (const T& original) = delete; // is not implemented
};

}