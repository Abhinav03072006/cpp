#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << left << setw(15) << "Item" << setw(10) << "Price" << endl;
    cout << setfill('-') << setw(25) << "-" << endl;
    cout << setfill(' ');
    cout << left << setw(15) << "Notebook" << setw(10) << 45.50 << endl;
    cout << left << setw(15) << "Pen" << setw(10) << 10.00 << endl;
    return 0;
}