#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    ifstream file("output.txt");
    if(file.is_open()) {
        while(getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Unable to open file.";
    }
    return 0;
}