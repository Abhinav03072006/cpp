#include <iostream>
#include <string>
using namespace std;

int main() {
    string pwd;
    cout << "Enter password: "; cin >> pwd;
    try {
        if(pwd.length() < 6) throw string("Weak Password");
        cout << "Password set!" << endl;
    } catch (string msg) {
        cout << "Security Alert: " << msg << endl;
    }
    return 0;
}