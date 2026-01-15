#include <iostream>
using namespace std;

class Complex {
    int r, i;
public:
    Complex(int real, int imag) : r(real), i(imag) {}
    friend Complex add(Complex, Complex);
    void display() { cout << r << " + " << i << "i" << endl; }
};

Complex add(Complex c1, Complex c2) {
    return Complex(c1.r + c2.r, c1.i + c2.i);
}

int main() {
    Complex n1(3, 4), n2(5, 2);
    Complex res = add(n1, n2);
    res.display();
    return 0;
}