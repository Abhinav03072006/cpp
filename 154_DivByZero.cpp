#include <iostream>
using namespace std;

int main() {
    int num, den;
    cout << "Enter Numerator and Denominator: "; cin >> num >> den;
    try {
        if(den == 0) throw "Logical Error: Division by Zero";
        cout << "Result: " << num / den << endl;
    } catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}