#include <iostream>
using namespace std;

int main() {
    char s1[100], s2[100];
    cout << "Enter source string: "; cin >> s1;
    int i = 0;
    while(s1[i] != '\0') {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    cout << "Copied string: " << s2;
    return 0;
}