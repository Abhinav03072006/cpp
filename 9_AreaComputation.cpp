9_AreaComputation.cpp\n--------------------\n#include <iostream>
using namespace std;

int main() {
    float r, l, w, b, h;
    cout << "Circle Area (radius): "; cin >> r;
    cout << "Area: " << 3.14 * r * r << endl;

    cout << "Rectangle Area (length width): "; cin >> l >> w;
    cout << "Area: " << l * w << endl;

    cout << "Triangle Area (base height): "; cin >> b >> h;
    cout << "Area: " << 0.5 * b * h << endl;
    return 0;
}