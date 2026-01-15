#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("students.txt");
    int roll, searchRoll;
    string name;
    bool found = false;
    cout << "Enter Roll to search: "; cin >> searchRoll;

    while(file >> roll >> name) {
        if(roll == searchRoll) {
            cout << "Record Found: " << name << endl;
            found = true;
            break;
        }
    }
    if(!found) cout << "Record not found.";
    return 0;
}