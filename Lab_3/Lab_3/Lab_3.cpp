#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;


void func(int** arr, int n)

{

    for (int i = 1; i < n - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            arr[i][j] = 0;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int q = 0; q < n; q++)
            cout << setw(4) << arr[i][q];
        cout << endl;
    }
}


int main()

{

    int n1;

    cout << "Enter size of matrix: ";

    cin >> n1;

    int** arr;

    arr = new int* [n1];

    for (int i = 0; i < n1; i++)

    {

        arr[i] = new int[n1];

    }

    for (int i = 0; i < n1; i++)

    {

        for (int q = 0; q < n1; q++)

        {

            arr[i][q] = 1;

        }

    }

    func(arr, n1);

    for (int i = 0; i < n1; i++)

    {
        delete[] arr[i];
    }

    delete[] arr;

    system("pause");

    return 0;
}
