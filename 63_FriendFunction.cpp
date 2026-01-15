#include <iostream>
using namespace std;

class PrivateBox {
    int secret;
public:
    PrivateBox() : secret(777) {}
    friend void revealSecret(PrivateBox); // Friend declaration
};

void revealSecret(PrivateBox b) {
    // Accessing private data outside the class
    cout << "Revealed Secret: " << b.secret << endl;
}

int main() {
    PrivateBox b;
    revealSecret(b);
    return 0;
}