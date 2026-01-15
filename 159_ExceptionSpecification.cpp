#include <iostream>
using namespace std;

// This function is specified NOT to throw exceptions
void safeFunc() noexcept {
    cout << "This function is guaranteed not to throw.\n";
}

int main() {
    safeFunc();
    return 0;
}