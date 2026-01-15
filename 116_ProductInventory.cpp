#include <iostream>
using namespace std;

class Product {
    int id;
    int stock;
public:
    Product(int i, int s) : id(i), stock(s) {}
    void updateStock(int s) { stock += s; }
    void show() { cout << "ID: " << id << " | Stock: " << stock << endl; }
};

int main() {
    Product p(501, 10);
    p.updateStock(5);
    p.show();
    return 0;
}