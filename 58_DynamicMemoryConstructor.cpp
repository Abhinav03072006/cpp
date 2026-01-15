#include <iostream>
using namespace std;

class String {
    char* name;
public:
    String() {
        name = new char[20]; // Dynamic allocation
        cout << "Memory allocated" << endl;
    }
    ~String() {
        delete[] name; // Crucial to prevent memory leaks
        cout << "Memory deallocated" << endl;
    }
};

int main() {
    String s;
    return 0;
}