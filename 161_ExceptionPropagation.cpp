#include <iostream>
using namespace std;

void level3() { throw 404; }
void level2() { level3(); }
void level1() { level2(); }

int main() {
    try {
        level1(); // Error propagates up the call stack
    } catch (int e) {
        cout << "Caught propagated error: " << e << endl;
    }
    return 0;
}