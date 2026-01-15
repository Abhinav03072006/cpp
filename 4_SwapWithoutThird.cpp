4_SwapWithoutThird.cpp\n--------------------\n#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;
    cout << "Before: a=" << a << ", b=" << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After: a=" << a << ", b=" << b << endl;
    return 0;
}