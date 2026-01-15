#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string filename = "students.txt";
    ifstream file(filename);
    if(file) cout << filename << " exists.";
    else cout << filename << " does not exist.";
    return 0;
}