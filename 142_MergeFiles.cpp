#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream f1("file1.txt"), f2("file2.txt");
    ofstream f3("merged.txt");
    char ch;

    while(f1.get(ch)) f3.put(ch);
    f3 << "\n"; // Separator
    while(f2.get(ch)) f3.put(ch);

    cout << "Files merged into merged.txt";
    return 0;
}