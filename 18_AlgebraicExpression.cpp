#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Evaluating: (a^2 + b^2 + 2ab)
    float a = 2, b = 3;
    float result = pow(a, 2) + pow(b, 2) + (2 * a * b);
    cout << "Result: " << result << endl;
    return 0;
}