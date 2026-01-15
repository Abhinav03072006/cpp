#include <iostream>
#include <fstream>
using namespace std;

struct Product {
    int id;
    float price;
};

int main() {
    Product p = {501, 12.99};
    fstream file("prod.dat", ios::binary | ios::out | ios::in | ios::trunc);
    file.write((char*)&p, sizeof(p));

    file.seekg(0); // Go to start of file
    Product p2;
    file.read((char*)&p2, sizeof(p2));
    cout << "Product ID: " << p2.id << " Price: " << p2.price;
    file.close();
    return 0;
}