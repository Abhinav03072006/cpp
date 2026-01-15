#include <iostream>
using namespace std;

class Bank {
    double balance; // Hidden from outside
public:
    void deposit(double amt) { if(amt > 0) balance += amt; }
    double getBalance() { return balance; }
};

int main() {
    Bank b;
    b.deposit(500);
    cout << "Balance: " << b.getBalance();
    return 0;
}