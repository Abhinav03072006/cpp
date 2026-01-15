#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("output.txt");
    if(file.is_open()) {
        file << "Writing data to file in C++.\n";
        file << "Second line of data.\n";
        file.close();
        cout << "Data written successfully.";
    }
    return 0;
}