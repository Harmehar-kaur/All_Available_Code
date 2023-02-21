#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int m, n, p, q, j;
    int a[100][100], b[100][100], c[100][100];
    system("cls");
    cout << "Enter number of rows in 'a' matrix:";
    cin >> m;
    cout << "Enter number of columns in 'a' matrix:  ";
    cin >> n;
    cout << "Enter the number of rows in 'b' matrix: ";
    cin >> p;
    cout << "Enter number of columns in 'b' matrix: ";
    cin >> q;
    if (n == p)
    {
        cout << "Enter elements of 'a' matrix: \n";
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> a[i][j];
        cout << "Enter elements of 'b' matrix: \n";
        for (int i = 0; i < p; i++)
            for (int j = 0; j < q; j++)
                cin >> b[i][j];
        for (int i = 0; i < m; i++)
        {
            c[i][j] = 0;
            for (int j = 0; j < q; j++)
                for (int k = 0; k < n; k++)
                    c[i][j] += a[i][k] * b[k][j];
        }
        cout << "resultant matrix: \n ";
        for (int i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
                cout << c[i][j] << "\t";
            cout << "\n";
        }
    }

    cout << "\nHarmehar Kaur(CSE-1 04613202720) \n";
    return 0;
}