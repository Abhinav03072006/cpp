#include <iostream>
using namespace std;

class Life {
public:
    Life() { cout << "Object Born (Constructor)\n"; }
    void performTask() { cout << "Object Working (Methods)\n"; }
    ~Life() { cout << "Object Died (Destructor)\n"; }
};

int main() {
    cout << "Start Main\n";
    {
        Life l;
        l.performTask();
    }
    cout << "End Main\n";
    return 0;
}