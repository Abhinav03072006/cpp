#include <iostream>
using namespace std;

class Employee {
    int id;
    double basic;
public:
    Employee(int i, double b) : id(i), basic(b) {}
    double calculateGross() { return basic + (basic * 0.2); } // Basic + 20% Allowance
    void display() {
        cout << "ID: " << id << " | Gross Salary: " << calculateGross() << endl;
    }
};

int main() {
    Employee e1(101, 30000);
    e1.display();
    return 0;
}