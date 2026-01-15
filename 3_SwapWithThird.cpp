3_SwapWithThird.cpp\n--------------------\n#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20, temp;
    cout << "Before: a=" << a << ", b=" << b << endl;
    temp = a;
    a = b;
    b = temp;
    cout << "After: a=" << a << ", b=" << b << endl;
    return 0;
}