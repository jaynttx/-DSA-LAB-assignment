/*
ques-->4d
(d) Write a program to sort the strings in alphabetical order.
*/

#include <iostream>
using namespace std;

bool compareStrings(char a[], char b[]) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] < b[i]) return false;
        if (a[i] > b[i]) return true;
        i++;
    }
    if (b[i] == '\0' && a[i] != '\0') return true;
    return false;
}

void copyString(char dest[], char src[]) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void sortStrings(char arr[][100], int n) {
    char temp[100];
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (compareStrings(arr[i], arr[j])) {
                copyString(temp, arr[i]);
                copyString(arr[i], arr[j]);
                copyString(arr[j], temp);
            }
        }
    }
    for (int i = 0; i < n; i++) cout << arr[i] << "\n";
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    char arr[100][100];
    for (int i = 0; i < n; i++) cin.getline(arr[i], 100);
    sortStrings(arr, n);
}