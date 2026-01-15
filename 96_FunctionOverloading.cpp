#include <iostream>
using namespace std;

class Demo {
public:
    void add(int a, int b) { cout << "Sum: " << a + b << endl; }
    void add(double a, double b) { cout << "Double Sum: " << a + b << endl; }
};

int main() {
    Demo d;
    d.add(5, 10);
    d.add(2.5, 3.5);
    return 0;
}