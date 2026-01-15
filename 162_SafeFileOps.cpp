#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file;
    file.exceptions(ifstream::failbit | ifstream::badbit);
    try {
        file.open("non_existent.txt");
    } catch (const ifstream::failure& e) {
        cout << "File Exception: " << e.what() << endl;
    }
    return 0;
}