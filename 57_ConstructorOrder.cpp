#include <iostream>
using namespace std;

class Alpha {
public:
    Alpha() { cout << "Alpha Constructor" << endl; }
};

class Beta {
public:
    Beta() { cout << "Beta Constructor" << endl; }
};

class Gamma {
    Alpha a;
    Beta b;
public:
    Gamma() { cout << "Gamma Constructor" << endl; }
};

int main() {
    Gamma g;
    return 0;
}