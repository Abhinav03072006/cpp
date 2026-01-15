#include <iostream>
#include <exception>
using namespace std;

class OverSpeedException : public exception {
public:
    const char* what() const throw() {
        return "Speed limit exceeded! Slow down.";
    }
};

int main() {
    int speed = 120;
    try {
        if(speed > 100) throw OverSpeedException();
    } catch (OverSpeedException& e) {
        cout << "Alert: " << e.what() << endl;
    }
    return 0;
}