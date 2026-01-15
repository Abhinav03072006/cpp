#include <iostream>
using namespace std;

int main() {
    int age = 20;
    string status = (age >= 18) ? "Eligible to Vote" : "Not Eligible";
    cout << status << endl;
    return 0;
}