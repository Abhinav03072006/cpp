#include <iostream>
using namespace std;

class Tracer {
public:
    Tracer() { cout << "Resource Acquired\n"; }
    ~Tracer() { cout << "Resource Cleaned (Unwound)\n"; }
};

void func() {
    Tracer t;
    throw 10; // Exception triggers stack unwinding
}

int main() {
    try {
        func();
    } catch (int e) {
        cout << "Caught Exception: " << e << endl;
    }
    return 0;
}