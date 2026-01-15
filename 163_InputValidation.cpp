#include <iostream>
#include <limits>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    try {
        if (!(cin >> age)) throw "Invalid data type entered.";
        if (age < 0 || age > 120) throw "Age out of logical range.";
        cout << "Input valid: " << age << endl;
    } catch (const char* msg) {
        cout << "Validation Error: " << msg << endl;
    }
    return 0;
}