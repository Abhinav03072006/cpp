#include <iostream>
using namespace std;

class Teacher {
    string name;
public:
    Teacher(string n) : name(n) {}
    string getName() { return name; }
};

class Department {
    Teacher* lead; // Aggregation: Dept HAS a Teacher (Pointer, weak link)
public:
    Department(Teacher* t) : lead(t) {}
    void show() { cout << "Dept Lead: " << lead->getName() << endl; }
};

int main() {
    Teacher t("Dr. Smith");
    Department d(&t);
    d.show();
    return 0;
}