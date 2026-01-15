#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Throw (1) int (2) char (3) float: "; cin >> choice;
        if(choice == 1) throw 10;
        if(choice == 2) throw 'A';
        if(choice == 3) throw 1.1f;
    } catch (...) { // Catch-all handler
        cout << "An unexpected exception was caught!" << endl;
    }
    return 0;
}