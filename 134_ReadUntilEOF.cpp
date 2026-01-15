#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("students.txt");
    string line;
    cout << "Reading file until EOF:\n";
    while(getline(file, line)) { // Returns false at End Of File
        cout << line << endl;
    }
    file.close();
    return 0;
}