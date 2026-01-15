#include <iostream>
using namespace std;

class InsufficientFunds {
public:
    double shortfall;
    InsufficientFunds(double s) : shortfall(s) {}
};

class Account {
    double bal = 500;
public:
    void withdraw(double amt) {
        if (amt > bal) throw InsufficientFunds(amt - bal);
        bal -= amt;
        cout << "Withdrawal successful. Balance: " << bal << endl;
    }
};

int main() {
    Account a;
    try {
        a.withdraw(1000);
    } catch (InsufficientFunds& e) {
        cout << "Denied! You are short by: $" << e.shortfall << endl;
    }
    return 0;
}