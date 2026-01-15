#include <iostream>
using namespace std;

int main() {
    try {
        // Trying to allocate a massive block
        long long* arr = new long long[999999999999];
    } catch (const std::bad_alloc& e) {
        cout << "Memory Error: " << e.what() << endl;
    }
    return 0;
}