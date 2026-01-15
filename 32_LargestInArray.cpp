#include <iostream>
using namespace std;

int main() {
    int n, arr[50], maxVal;
    cout << "Enter number of elements: "; cin >> n;
    for(int i = 0; i < n; i++) cin >> arr[i];
    maxVal = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > maxVal) maxVal = arr[i];
    }
    cout << "Largest element: " << maxVal;
    return 0;
}