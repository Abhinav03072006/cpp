#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40};
    ofstream out("data.bin", ios::binary);
    out.write((char*)&numbers, sizeof(numbers));
    out.close();

    int readNums[4];
    ifstream in("data.bin", ios::binary);
    in.read((char*)&readNums, sizeof(readNums));
    for(int i=0; i<4; i++) cout << readNums[i] << " ";
    return 0;
}