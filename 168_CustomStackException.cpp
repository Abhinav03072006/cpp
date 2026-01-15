#include <iostream>
using namespace std;

class StackOverflow {};

class SimpleStack {
    int top, size;
public:
    SimpleStack(int s) : top(-1), size(s) {}
    void push() {
        if (top == size - 1) throw StackOverflow();
        top++;
        cout << "Pushed successfully\n";
    }
};

int main() {
    SimpleStack s(1);
    try {
        s.push();
        s.push(); // This will throw
    } catch (StackOverflow) {
        cout << "Error: Stack is full!\n";
    }
    return 0;
}