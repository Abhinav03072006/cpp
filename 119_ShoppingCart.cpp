#include <iostream>
using namespace std;

class Cart {
    double total;
public:
    Cart() : total(0) {}
    void addItem(double price) { total += price; }
    void checkout() { cout << "Final Bill: $" << total << endl; }
};

int main() {
    Cart myCart;
    myCart.addItem(19.99);
    myCart.addItem(5.50);
    myCart.checkout();
    return 0;
}