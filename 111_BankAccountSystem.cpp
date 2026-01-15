#include <iostream>
using namespace std;

class BankAccount {
    string name;
    int accNum;
    double balance;
public:
    BankAccount(string n, int a, double b) : name(n), accNum(a), balance(b) {}
    void deposit(double amt) { balance += amt; }
    void withdraw(double amt) {
        if(amt <= balance) balance -= amt;
        else cout << "Insufficient funds!\n";
    }
    void display() {
        cout << "Account: " << accNum << " | Name: " << name << " | Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount myAcc("John Doe", 10110, 500.0);
    myAcc.deposit(200);
    myAcc.withdraw(100);
    myAcc.display();
    return 0;
}