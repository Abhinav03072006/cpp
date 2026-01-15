#include <iostream>
using namespace std;

void test(int x) {
    try {
        if(x == 1) throw x;       // int
        if(x == 0) throw 'x';     // char
        if(x == -1) throw 1.0;    // double
    } catch(int i) { cout << "Caught Int\n"; }
    catch(char c) { cout << "Caught Char\n"; }
    catch(double d) { cout << "Caught Double\n"; }
}

int main() {
    test(1); test(0); test(-1);
    return 0;
}