#include <iostream>
using namespace std;

class Outer {
public:
    class Inner {
    public:
        void show() { cout << "Inside Inner Class" << endl; }
    };
};

int main() {
    Outer::Inner in;
    in.show();
    return 0;
}