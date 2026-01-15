#include <iostream>
using namespace std;

class Alpha {
private:
    int data = 42;
    friend class Beta; // Beta can access everything in Alpha
};

class Beta {
public:
    void showAlpha(Alpha a) {
        cout << "Alpha's private data: " << a.data << endl;
    }
};

int main() {
    Alpha a;
    Beta b;
    b.showAlpha(a);
    return 0;
}