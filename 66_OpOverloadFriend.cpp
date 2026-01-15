#include <iostream>
using namespace std;

class Distance {
    int feet;
public:
    Distance(int f) : feet(f) {}
    friend Distance operator+(Distance d1, Distance d2);
    void show() { cout << feet << " ft" << endl; }
};

Distance operator+(Distance d1, Distance d2) {
    return Distance(d1.feet + d2.feet);
}

int main() {
    Distance d1(10), d2(20);
    Distance d3 = d1 + d2;
    d3.show();
    return 0;
}