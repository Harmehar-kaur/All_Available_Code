#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <dos.h>
using namespace std;
int main()
{
    clock_t start, end;
    start = clock();
    int n;
    cout << "\n Enter number of elements ";
    cin >> n;
    int a[n];
    cout << "\n Enter elements ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }

        cout << "\n " << i;
        cout << ".";
        for (int x = 0; x < n; x++)
        {
            cout << a[x];
        }
    }
    end = clock();
    cout << "\nTime Taken Is: " << (end - start) / CLK_TCK;
    cout << ("\n Harmehar Kaur (CSE-1 04613202720)\n");
    return 0;
}