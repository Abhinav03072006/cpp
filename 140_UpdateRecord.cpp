#include <iostream>
#include <fstream>
using namespace std;

struct User { int id; char name[20]; };

int main() {
    User u;
    fstream file("users.dat", ios::binary | ios::in | ios::out);
    int searchId;
    cout << "Enter ID to update name: "; cin >> searchId;

    while(file.read((char*)&u, sizeof(u))) {
        if(u.id == searchId) {
            cout << "Enter new name: "; cin >> u.name;
            // Move pointer back to start of current record
            int pos = (int)file.tellg() - sizeof(u);
            file.seekp(pos);
            file.write((char*)&u, sizeof(u));
            cout << "Record Updated.";
            break;
        }
    }
    file.close();
    return 0;
}