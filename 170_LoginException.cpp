#include <iostream>
using namespace std;

class Login {
public:
    void authenticate(string p) {
        if (p != "admin123") throw "Incorrect Password Access Denied";
        cout << "Login Successful!\n";
    }
};

int main() {
    Login user;
    string pass;
    cout << "Enter Password: "; cin >> pass;
    try {
        user.authenticate(pass);
    } catch (const char* e) {
        cout << "Security Logic: " << e << endl;
    }
    return 0;
}