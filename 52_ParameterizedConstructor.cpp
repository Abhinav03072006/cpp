#include <iostream>
using namespace std;

class Point {
    int x, y;
public:
    // Parameterized Constructor
    Point(int x1, int y1) {
        x = x1; y = y1;
        cout << "Point created at (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p1(10, 20);
    return 0;
}