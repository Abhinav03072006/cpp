#include <iostream>
using namespace std;

struct Term {
    int coeff;
    int exp;
};

class Polynomial {
    Term terms[10];
    int n;
public:
    void input() {
        cout << "Enter number of terms: "; cin >> n;
        for(int i=0; i<n; i++) cin >> terms[i].coeff >> terms[i].exp;
    }
    void display() {
        for(int i=0; i<n; i++) cout << terms[i].coeff << "x^" << terms[i].exp << (i<n-1?" + ":"");
    }
};

int main() {
    Polynomial p;
    p.input(); p.display();
    return 0;
}