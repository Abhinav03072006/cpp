#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;
    // Sum of first 10 numbers
    do {
        sum += i;
        i++;
    } while (i <= 10);
    cout << "Sum of first 10 numbers: " << sum << endl;
    return 0;
}