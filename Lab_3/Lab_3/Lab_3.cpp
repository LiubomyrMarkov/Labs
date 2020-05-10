#include <iostream>
using namespace std;

void Clean(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 1;
        }
    }
}

void Show(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void Func(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }
    for (int i = 0.2 * n; i < n * 0.8; i++) {
        for (int j = 0.2 * n; j < n * 0.8; j++) {
            arr[i][j] = 1;
        }
    }
    for (int i = 0.35 * n; i < n * 0.65; i++) {
        for (int j = 0.35 * n; j < n * 0.65; j++) {
            arr[i][j] = 0;
        }
    }
}

int main() {
    while (true) {
        int n = 0;
        cout << "Enter length of array: ";
        cin >> n;
        if (n < 0) {
            break;
        }
        int** arr = new int* [n];
        for (int i = 0; i < n; i++) {
            arr[i] = new int[n];
        }
        Clean(arr, n);
        Show(arr, n);
        Func(arr, n);
        Show(arr, n);
        for (int i = 0; i < n; i++) {
            delete[] arr[i];
        }
        delete[] arr;
    }
    return 0;
}
