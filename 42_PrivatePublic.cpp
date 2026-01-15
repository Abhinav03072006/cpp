#include <iostream>
using namespace std;

class Vault {
private:
    int secretCode; // Accessible only inside the class
public:
    void setCode(int c) { secretCode = c; }
    void showCode() { cout << "Secret Code: " << secretCode << endl; }
};

int main() {
    Vault v;
    v.setCode(1234);
    v.showCode();
    return 0;
}