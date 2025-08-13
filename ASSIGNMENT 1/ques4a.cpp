/*
QUES 4a
Implement the logic to
a. Reverse the elements of an array

*/

#include <iostream>
using namespace std;

void reverseArray(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
}

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        
        cout << arr[i] << " ";
    cout << "\n";
}
}


int main() {
    int n, arr[100];
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    reverseArray(arr, n);
    displayArray(arr, n);
}
