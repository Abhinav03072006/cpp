#include <iostream>
using namespace std;

class Simple {
    int n;
public:
    void display(int n) {
        // 'n' refers to the local parameter
        // 'this->n' refers to the class member variable
        this->n = 50;
        cout << "Local n: " << n << endl;
        cout << "Member n: " << this->n << endl;
    }
};

int main() {
    Simple s;
    s.display(10);
    return 0;
}