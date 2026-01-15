#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Outer Try Block\n";
        try {
            cout << "Inner Try Block\n";
            throw 1.5f;
        } catch (float f) {
            cout << "Caught Float in Inner\n";
            throw; // Pass to outer
        }
    } catch (...) {
        cout << "Caught in Outer Handle\n";
    }
    return 0;
}