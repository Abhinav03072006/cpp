#include <iostream>
using namespace std;

class Device {
public:
    Device(int id) {
        if(id < 0) throw "Invalid ID";
        cout << "Device initialized\n";
    }
};

int main() {
    try {
        Device d(-1);
    } catch (const char* e) {
        cout << "Object creation failed: " << e << endl;
    }
    return 0;
}