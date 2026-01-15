#include <iostream>
using namespace std;

class Math {
public:
    static int add(int a, int b) { return a + b; }
};

int main() {
    // Calling without creating an object
    cout << "Sum: " << Math::add(10, 20) << endl;
    return 0;
}