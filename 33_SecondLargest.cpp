#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, arr[50], first = INT_MIN, second = INT_MIN;
    cout << "Enter size: "; cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        } else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    cout << "Second Largest: " << second;
    return 0;
}