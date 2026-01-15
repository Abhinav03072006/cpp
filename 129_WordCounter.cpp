#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("output.txt");
    string word;
    int count = 0;
    while(file >> word) {
        count++;
    }
    cout << "Total words in file: " << count << endl;
    file.close();
    return 0;
}