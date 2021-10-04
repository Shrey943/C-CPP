#include <iostream>
using namespace std;
int main()
{

    int arr1[2][3], i, j;
    int arr2[2][3], a, b;
    int total[2][3], p, q;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Enter value for array1[" << i << "][" << j << "]: ";
            cin >> arr1[i][j];

        }
    }
    cout << "\n";
    for (a = 0; a < 2; a++)
    {
        for (b = 0; b < 3; b++)
        {
            cout << "Enter value for array2[" << i << "][" << j << "]: ";
            cin >> arr2[a][b];
        }
    }
    cout << "\n";
    for (p = 0; p < 2; p++)
    {
        for (q = 0; q < 3; q++)
        {
            total[p][q] = arr1[p][q] + arr2[p][q];
        }
    }
    cout << "Addition of both Arrays is:\n\n";
    for (p = 0; p < 2; p++)
    {
        for (q = 0; q < 3; q++)
        {
            cout << "\t" << total[p][q];
        }
        cout << "\n";
    }
}