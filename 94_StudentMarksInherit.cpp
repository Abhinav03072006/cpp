#include <iostream>
using namespace std;

class Student {
protected:
    int roll;
public:
    void getRoll(int r) { roll = r; }
};

class Marks : public Student {
protected:
    int m1, m2;
public:
    void getMarks(int a, int b) { m1 = a; m2 = b; }
    void display() {
        cout << "Roll: " << roll << "\nTotal: " << m1 + m2 << endl;
    }
};

int main() {
    Marks obj;
    obj.getRoll(101);
    obj.getMarks(85, 90);
    obj.display();
    return 0;
}