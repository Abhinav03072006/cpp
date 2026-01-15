#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Open for output, in append mode, and binary
    fstream file;
    file.open("test.dat", ios::out | ios::app | ios::binary);
    if(file.is_open()) {
        cout << "File opened with multiple modes successfully.";
        file.close();
    }
    return 0;
}