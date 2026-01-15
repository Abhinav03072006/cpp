#include <iostream>
using namespace std;

class Finder {
    int x, y;
public:
    void input() { cin >> x >> y; }
    void findMax() {
        cout << "Largest: " << (x > y ? x : y);
    }
};

int main() {
    Finder f;
    f.input();
    f.findMax();
    return 0;
}