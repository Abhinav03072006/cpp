#include <iostream>
using namespace std;

int main() {
    cout << "Demonstrating Break and Continue:" << endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 3) continue; // Skip 3
        if (i == 7) break;    // Stop at 7
        cout << i << " ";
    }
    return 0;
}