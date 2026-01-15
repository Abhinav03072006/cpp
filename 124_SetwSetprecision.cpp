#include <iostream>
#include <iomanip> // Required for manipulators
using namespace std;

int main() {
    double pi = 3.14159265;
    cout << "Formatted PI values:" << endl;
    cout << "Width 10: |" << setw(10) << pi << "|" << endl;
    cout << "Precision 3: " << setprecision(3) << pi << endl;
    cout << "Fixed Precision 2: " << fixed << setprecision(2) << pi << endl;
    return 0;
}