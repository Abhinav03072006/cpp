#include <iostream>
using namespace std;

class Account {
public:
    static float interestRate; // Shared by all objects
    void show() { cout << "Interest Rate: " << interestRate << "%" << endl; }
};

float Account::interestRate = 6.5; // Static initialization

int main() {
    Account a1, a2;
    a1.show();
    Account::interestRate = 7.0; // Changing for all
    a2.show();
    return 0;
}