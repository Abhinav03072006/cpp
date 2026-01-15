#include <iostream>
using namespace std;

int main() {
    try {
        int choice;
        cout << "Throw (1) int (2) const char*: "; cin >> choice;
        if(choice == 1) throw 500;
        else throw "Generic Error";
    } catch (int e) {
        cout << "Caught Integer: " << e << endl;
    } catch (const char* e) {
        cout << "Caught String: " << e << endl;
    }
    return 0;
}