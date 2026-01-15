#include <iostream>
using namespace std;

class Box {
    int weight;
public:
    void setWeight(int w) { weight = w; }
    void compare(Box b2) {
        if(weight == b2.weight) cout << "Same weight";
        else cout << "Different weight";
    }
};

int main() {
    Box b1, b2;
    b1.setWeight(10);
    b2.setWeight(10);
    b1.compare(b2);
    return 0;
}