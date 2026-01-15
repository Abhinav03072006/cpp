#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks (0-100): "; cin >> marks;
    if (marks >= 90) cout << "Grade: A+";
    else if (marks >= 80) cout << "Grade: A";
    else if (marks >= 70) cout << "Grade: B";
    else if (marks >= 60) cout << "Grade: C";
    else cout << "Grade: F (Fail)";
    return 0;
}