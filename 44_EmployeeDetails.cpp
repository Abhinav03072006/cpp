#include <iostream>
using namespace std;

class Employee {
    int id;
    char name[30];
public:
    void getData() {
        cout << "Enter ID and Name: ";
        cin >> id >> name;
    }
    void putData() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Employee emp;
    emp.getData();
    emp.putData();
    return 0;
}