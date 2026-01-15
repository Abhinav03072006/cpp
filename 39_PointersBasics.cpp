#include <iostream>
using namespace std;

int main() {
    int var = 20;
    int *ptr = &var;
    cout << "Value of var: " << var << endl;
    cout << "Address of var (&var): " << &var << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed by ptr (*ptr): " << *ptr << endl;
    return 0;
}