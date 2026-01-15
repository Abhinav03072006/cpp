#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream src("merged.txt");
    ofstream p1("part1.txt"), p2("part2.txt");
    string line;
    int count = 0;

    while(getline(src, line)) {
        if(count++ < 5) p1 << line << "\n";
        else p2 << line << "\n";
    }
    cout << "File split into part1 and part2.";
    return 0;
}