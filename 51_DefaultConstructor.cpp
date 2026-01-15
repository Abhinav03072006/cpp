#include <iostream>
using namespace std;

class MyClass {
public:
    // Default Constructor
    MyClass() {
        cout << "Default Constructor Called!" << endl;
    }
};

int main() {
    MyClass obj;
    return 0;
}