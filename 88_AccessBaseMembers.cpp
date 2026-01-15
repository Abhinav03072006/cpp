#include <iostream>
using namespace std;

class Parent {
protected:
    string surname = "Smith";
};

class Child : public Parent {
public:
    void identify() { cout << "Surname is: " << surname << endl; }
};

int main() {
    Child c;
    c.identify();
    return 0;
}