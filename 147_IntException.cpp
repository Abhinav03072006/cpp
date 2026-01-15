#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: "; cin >> age;
    try {
        if(age < 18) throw 404; // Error code for underage
        cout << "Access Granted." << endl;
    } catch (int code) {
        cout << "Error Code: " << code << " - Underage Access Denied." << endl;
    }
    return 0;
}