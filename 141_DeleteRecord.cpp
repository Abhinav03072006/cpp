#include <iostream>
#include <fstream>
using namespace std;

struct User { int id; char name[20]; };

int main() {
    User u;
    int delId;
    cout << "Enter ID to delete: "; cin >> delId;

    ifstream file("users.dat", ios::binary);
    ofstream temp("temp.dat", ios::binary);

    while(file.read((char*)&u, sizeof(u))) {
        if(u.id != delId) {
            temp.write((char*)&u, sizeof(u));
        }
    }
    file.close(); temp.close();
    remove("users.dat");
    rename("temp.dat", "users.dat");
    cout << "Record deleted successfully.";
    return 0;
}