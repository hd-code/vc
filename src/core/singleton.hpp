namespace core {

template<class T>
class CSingleton {
    public:
        static T& instance() {
            static T instance;
            return instance;
        }

    private:
        T(const T& original) = delete; // is not implemented
        T& operator = (const T& original) = delete; // is not implemented
};

}