#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char ch;
    ifstream source("output.txt");
    ofstream target("copy.txt");

    if(!source || !target) {
        cout << "Error opening files!";
        return 1;
    }

    while(source.get(ch)) {
        target.put(ch);
    }

    cout << "Content copied successfully.";
    source.close();
    target.close();
    return 0;
}