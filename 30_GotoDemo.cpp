#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive number: ";
    input: 
    cin >> num;
    if (num <= 0) {
        cout << "Invalid. Try again: ";
        goto input;
    }
    cout << "You entered: " << num;
    return 0;
}