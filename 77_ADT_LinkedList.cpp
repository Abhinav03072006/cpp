#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class LinkedList {
    Node* head;
public:
    LinkedList() { head = NULL; }
    void insert(int val) {
        Node* newNode = new Node();
        newNode->data = val;
        newNode->next = head;
        head = newNode;
    }
    void show() {
        Node* temp = head;
        while(temp) { cout << temp->data << " -> "; temp = temp->next; }
        cout << "NULL";
    }
};

int main() {
    LinkedList list;
    list.insert(10); list.insert(20);
    list.show();
    return 0;
}