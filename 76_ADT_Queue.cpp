#include <iostream>
using namespace std;

class Queue {
    int front, rear, arr[5];
public:
    Queue() { front = 0; rear = 0; }
    void enqueue(int x) { arr[rear++] = x; }
    void dequeue() { cout << "Dequeued: " << arr[front++] << endl; }
};

int main() {
    Queue q;
    q.enqueue(100); q.enqueue(200);
    q.dequeue();
    return 0;
}