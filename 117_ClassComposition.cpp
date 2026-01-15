#include <iostream>
using namespace std;

class Processor {
public:
    void boot() { cout << "Processor booting...\n"; }
};

class Computer {
    Processor proc; // Composition: Computer OWNED a Processor
public:
    void start() {
        proc.boot();
        cout << "System ready." << endl;
    }
};

int main() {
    Computer pc;
    pc.start();
    return 0;
}