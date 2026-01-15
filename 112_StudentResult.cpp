#include <iostream>
using namespace std;

class Student {
    string name;
    int marks[3];
public:
    void input() {
        cout << "Enter name: "; cin >> name;
        cout << "Enter marks for 3 subjects: ";
        for(int i=0; i<3; i++) cin >> marks[i];
    }
    void process() {
        int total = 0;
        for(int i=0; i<3; i++) total += marks[i];
        cout << "Student: " << name << " | Total: " << total << " | Avg: " << total/3.0 << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.process();
    return 0;
}