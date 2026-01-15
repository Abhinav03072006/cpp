#include <iostream>
using namespace std;

class Database {
public:
    static int connections;
    Database() { connections++; }
};

// Static member must be initialized outside the class
int Database::connections = 100;

int main() {
    cout << "Initial connections: " << Database::connections << endl;
    Database d1;
    cout << "After object creation: " << Database::connections << endl;
    return 0;
}