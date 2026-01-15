#include <iostream>
using namespace std;

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    Student s;
    cout << "Enter details (Name, Roll, Marks): ";
    cin >> s.name >> s.roll >> s.marks;
    cout << "\nDisplaying Information:\n";
    cout << "Name: " << s.name << "\nRoll: " << s.roll << "\nMarks: " << s.marks;
    return 0;
}