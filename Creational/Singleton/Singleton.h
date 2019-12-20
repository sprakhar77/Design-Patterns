#include<atomic>
#include <mutex>

class Singleton
{
public:
    static Singleton *getInstance();
    void performTask() const;
    void reset();

    // Delete the copy constructor and assingment operator
    Singleton(const Singleton &singleton) = delete;
    Singleton &operator = (const Singleton &singleton) = delete;

private:
    Singleton(){}
    static std::atomic<Singleton *>instance;
    static std::mutex mutex;
};

