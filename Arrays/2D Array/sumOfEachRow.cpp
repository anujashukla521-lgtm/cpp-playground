#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    int sumRow1 = 0, sumRow2 = 0, sumRow3 = 0;
    cout << "Enter elements of 3*3 matrix: " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
                sumRow1 += a[i][j];
            else if (i == 1)
                sumRow2 += a[i][j];
            else
                sumRow3 += a[i][j];
        }
    }
    cout << "Sum of first row: " << sumRow1 << endl;
    cout << "Sum of second row: " << sumRow2 << endl;
    cout << "Sum of third row: " << sumRow3 << endl;
    return 0;
}