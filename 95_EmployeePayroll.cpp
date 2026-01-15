#include <iostream>
using namespace std;

class Employee {
protected:
    float salary;
public:
    void setSalary(float s) { salary = s; }
};

class Payroll : public Employee {
public:
    void calculate() {
        cout << "Gross Salary (with 10% bonus): " << salary * 1.1 << endl;
    }
};

int main() {
    Payroll p;
    p.setSalary(50000);
    p.calculate();
    return 0;
}