#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], res[10][10], r1, c1, r2, c2;
    cout << "Enter R1 C1 for Matrix A: "; cin >> r1 >> c1;
    cout << "Enter R2 C2 for Matrix B: "; cin >> r2 >> c2;
    if(c1 != r2) { cout << "Invalid dimensions!"; return 0; }

    cout << "Enter Matrix A elements:\n";
    for(int i=0; i<r1; i++) for(int j=0; j<c1; j++) cin >> a[i][j];
    cout << "Enter Matrix B elements:\n";
    for(int i=0; i<r2; i++) for(int j=0; j<c2; j++) cin >> b[i][j];

    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) {
            res[i][j] = 0;
            for(int k=0; k<c1; k++) res[i][j] += a[i][k] * b[k][j];
        }
    }
    cout << "Result Matrix:\n";
    for(int i=0; i<r1; i++) {
        for(int j=0; j<c2; j++) cout << res[i][j] << " ";
        cout << endl;
    }
    return 0;
}