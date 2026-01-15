#include <iostream>
using namespace std;

class MathOp {
public:
    void operate(int a, int b) {
        cout << "Sum: " << a + b << endl;
        cout << "Diff: " << a - b << endl;
    }
};

int main() {
    MathOp m;
    m.operate(50, 20);
    return 0;
}