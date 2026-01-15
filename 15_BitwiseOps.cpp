#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 9; // 5: 0101, 9: 1001
    cout << "AND: " << (a & b) << endl;
    cout << "OR: " << (a | b) << endl;
    cout << "XOR: " << (a ^ b) << endl;
    cout << "Left Shift: " << (a << 1) << endl;
    return 0;
}