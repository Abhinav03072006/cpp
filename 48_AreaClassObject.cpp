#include <iostream>
using namespace std;

class Area {
public:
    float circle(float r) { return 3.14 * r * r; }
    int rect(int l, int b) { return l * b; }
};

int main() {
    Area a;
    cout << "Circle Area: " << a.circle(5) << endl;
    cout << "Rect Area: " << a.rect(10, 5);
    return 0;
}