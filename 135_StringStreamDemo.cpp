#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string data = "101 John 85.5";
    stringstream ss(data);
    int id; string name; float marks;

    ss >> id >> name >> marks; // Parsing string into variables
    cout << "Parsed: ID=" << id << ", Name=" << name << ", Marks=" << marks;
    return 0;
}