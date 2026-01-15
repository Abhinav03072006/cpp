#include <iostream>
using namespace std;

class Engine {
public:
    virtual void start() { cout << "Engine Start" << endl; }
};

int main() {
    Engine e;
    cout << "Virtual mechanism uses a vTable (virtual table) to find function addresses at runtime." << endl;
    e.start();
    return 0;
}