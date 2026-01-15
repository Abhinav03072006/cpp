#include <iostream>
using namespace std;

class Stack {
    int top, arr[5];
public:
    Stack() { top = -1; }
    void push(int x) {
        if(top >= 4) cout << "Overflow\n";
        else arr[++top] = x;
    }
    void pop() {
        if(top < 0) cout << "Underflow\n";
        else cout << "Popped: " << arr[top--] << endl;
    }
};

int main() {
    Stack s;
    s.push(10); s.push(20);
    s.pop(); s.pop();
    return 0;
}