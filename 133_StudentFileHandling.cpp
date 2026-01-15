#include <iostream>
#include <fstream>
using namespace std;

struct Student {
    int roll;
    char name[30];
};

int main() {
    Student s;
    ofstream file("students.txt", ios::app);
    cout << "Enter Roll and Name: ";
    cin >> s.roll >> s.name;
    file << s.roll << " " << s.name << "\n";
    file.close();
    cout << "Data saved to student record.";
    return 0;
}