#include <iostream>
#include <new> // Required for bad_alloc
using namespace std;

int main() {
    try {
        // Attempting to allocate an impossible amount of memory
        long long* ptr = new long long[1000000000000]; 
    } catch (bad_alloc& ba) {
        cout << "Memory Allocation Failed: " << ba.what() << endl;
    }
    return 0;
}