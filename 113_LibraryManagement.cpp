#include <iostream>
using namespace std;

class Book {
    string title;
    bool isIssued;
public:
    Book(string t) : title(t), isIssued(false) {}
    void issue() { isIssued = true; }
    void returnBook() { isIssued = false; }
    void status() {
        cout << "Book: " << title << " | Status: " << (isIssued ? "Issued" : "Available") << endl;
    }
};

int main() {
    Book b("C++ Primer");
    b.status();
    b.issue();
    b.status();
    return 0;
}