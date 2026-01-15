#include <iostream>
using namespace std;

class MyClass {
    const int val; // Constant member
public:
    // Must use Initialization List for const members
    MyClass(int v) : val(v) {
        cout << "Const value initialized to: " << val << endl;
    }
};

int main() {
    MyClass m(50);
    return 0;
}