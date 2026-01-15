#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt", ios::app); // Open in Append mode
    if(file.is_open()) {
        file << "This line is appended to the existing file.\n";
        file.close();
        cout << "Data appended.";
    }
    return 0;
}