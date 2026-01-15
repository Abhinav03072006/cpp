#include <iostream>
using namespace std;

class Shape { public: void info() { cout << "This is a shape." << endl; } };
class Circle : public Shape {};
class Square : public Shape {};

int main() {
    Circle c; Square s;
    c.info();
    s.info();
    return 0;
}