#include <iostream>
using namespace std;

class MyClass {
public:
    void display() {
        cout << "Hello from the Class!" << endl;
    }
};

int main() {
    MyClass obj; // Creating an object
    obj.display();
    return 0;
}