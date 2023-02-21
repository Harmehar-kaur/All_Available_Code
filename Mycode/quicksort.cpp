#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <dos.h>
using namespace std;
int partition(int a[], int s, int e)
{
    int pivot = a[e];
    int pindex = s;
    for (int i = s; i < e; i++)
    {
        if (a[i] < pivot)
        {
            int temp = a[pindex];
            a[pindex] = a[i];
            a[i] = temp;
            pindex++;
        }
    }
    int temp = a[pindex];
    a[pindex] = a[e];
    a[e] = temp;

    return pindex;
}

void quicksort(int a[], int s, int e)
{
    if (s < e)
    {
        int p = partition(a, s, e);
        quicksort(a, s, p - 1);
        quicksort(a, p + 1, e);
    }
}

int main()
{
    clock_t start, end;
    start = clock();
    int n;
    cout<<"\n Enter the size of array : ";
    cin>>n;
    int a[n];
    cout<<"\n Enter the elements : ";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    quicksort(a, 0, n - 1);
    cout<<"\n Sorted elements : ";
    for (int i = 0; i < n; i++)
    {
        cout<< "\t" << a[i];
    }
    end = clock();
    cout << "\nTime Taken Is: " << (end - start) / CLK_TCK;
    cout << ("\n Harmehar Kaur (CSE-1 04613202720)\n");
    return 0;
}