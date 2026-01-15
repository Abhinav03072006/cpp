#include <iostream>
using namespace std;

class BaseErr {};
class DerivedErr : public BaseErr {};

int main() {
    try {
        throw DerivedErr();
    } catch (DerivedErr d) {
        cout << "Caught Derived Exception First\n";
    } catch (BaseErr b) {
        cout << "Caught Base Exception\n";
    }
    return 0;
}