#include <iostream>
using namespace std;

void process() {
    try {
        throw "Original Error";
    } catch (const char* e) {
        cout << "Partially handled in process(). Rethrowing...\n";
        throw; // Rethrows current exception
    }
}

int main() {
    try {
        process();
    } catch (const char* e) {
        cout << "Finally caught in main: " << e << endl;
    }
    return 0;
}