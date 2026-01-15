#include <iostream>
using namespace std;

class Number {
    int val;
public:
    Number(int v) : val(v) {}
    friend void swapValues(Number&, Number&);
    void show() { cout << val << " "; }
};

void swapValues(Number &n1, Number &n2) {
    int temp = n1.val;
    n1.val = n2.val;
    n2.val = temp;
}

int main() {
    Number a(10), b(20);
    swapValues(a, b);
    a.show(); b.show();
    return 0;
}