#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("newfile.txt");
    if(!file) {
        cout << "Error creating file!";
    } else {
        cout << "File 'newfile.txt' created successfully.";
        file.close();
    }
    return 0;
}