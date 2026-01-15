#include <iostream>
#include <fstream>
using namespace std;

class Person {
public:
    char name[50];
    int age;
};

int main() {
    Person p1 = {"Alice", 25}, p2;
    ofstream out("person.dat", ios::binary);
    out.write((char*)&p1, sizeof(p1));
    out.close();

    ifstream in("person.dat", ios::binary);
    in.read((char*)&p2, sizeof(p2));
    cout << "Read from file: " << p2.name << ", " << p2.age << endl;
    return 0;
}