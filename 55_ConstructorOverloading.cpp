#include <iostream>
using namespace std;

class Area {
public:
    Area() { cout << "Area undefined" << endl; }
    Area(int side) { cout << "Square: " << side*side << endl; }
    Area(int l, int b) { cout << "Rect: " << l*b << endl; }
};

int main() {
    Area a1;
    Area a2(4);
    Area a3(4, 5);
    return 0;
}