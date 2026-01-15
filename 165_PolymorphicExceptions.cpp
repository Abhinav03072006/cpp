#include <iostream>
using namespace std;

class BaseException { public: virtual void msg() { cout << "Base Error\n"; } };
class NetworkException : public BaseException { public: void msg() override { cout << "Network Timeout\n"; } };

int main() {
    try {
        throw NetworkException();
    } catch (BaseException& e) { // Catching by reference preserves polymorphism
        e.msg();
    }
    return 0;
}