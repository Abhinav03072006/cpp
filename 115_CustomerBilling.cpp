#include <iostream>
using namespace std;

class Bill {
    string item;
    double price;
    int qty;
public:
    void setData(string i, double p, int q) { item = i; price = p; qty = q; }
    void print() {
        cout << item << "\t" << qty << "\t" << price << "\tTotal: " << qty*price << endl;
    }
};

int main() {
    Bill b;
    b.setData("Laptop", 1200.0, 1);
    cout << "Item\tQty\tPrice\tTotal\n";
    b.print();
    return 0;
}