#include <iostream>
using namespace std;

class Room {
public:
    Room() { cout << "Empty Room" << endl; }
    Room(double l) { cout << "Square Room area: " << l*l << endl; }
};

int main() {
    Room r1;
    Room r2(5.5);
    return 0;
}