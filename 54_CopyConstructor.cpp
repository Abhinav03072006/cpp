#include <iostream>
using namespace std;

class Sample {
    int data;
public:
    Sample(int d) : data(d) {}
    // Copy Constructor
    Sample(const Sample &obj) {
        data = obj.data;
        cout << "Copy Constructor Called! Data: " << data << endl;
    }
};

int main() {
    Sample s1(100);
    Sample s2 = s1; // Triggers copy constructor
    return 0;
}