5_ConstKeyword.cpp\n--------------------\n#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    // PI = 3.14; // This would cause a compilation error
    cout << "Constant PI: " << PI << endl;
    return 0;
}