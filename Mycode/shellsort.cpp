#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <dos.h>
using namespace std; 
void shellsort(int a[], int n)
{
    int gap = n, i, temp, flag = 1;
    while (flag == 1 || gap > 1)
    {
        flag = 0;
        gap = (gap + 1) / 2;
        for (i = 0; i < (n - gap); i++)
        {
            if (a[i + gap] < a[i])
            {
                temp = a[i + gap];
                a[i + gap] = a[i];
                a[i] = temp;
                flag = 0;
            }
        }
    }
}

int main()
{
    clock_t start, end;
    start = clock();
    int m, i;
    cout<<"\n Enter no. of elements: ";
    cin>>m;
    int x[m];
    cout<<"\n Enter elements: \n";
    for (i = 0; i < m; i++)
    {
        cin>>x[i];
    }
    shellsort(x, m);
    cout<<"\n Sorted array is : \n";
    for (i = 0; i < m; i++)
        cout<<x[i];
    end = clock();
    cout << "\nTime Taken Is: " << (end - start) / CLK_TCK;
    cout << ("\n Harmehar Kaur (CSE-1 04613202720)\n");
    return 0;
}