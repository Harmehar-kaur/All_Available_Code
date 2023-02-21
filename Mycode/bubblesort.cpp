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
    // size of array
    int n;
    cout<<("\n Enter the number of elements : ");
    cin>>n;
    // declare array a of size n
    int a[n];
    //input values of array from user
    cout<<("\n Enter elements : ");
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    //performing bubblesort
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            //comparing two consecutive elements if a[j] is greater than a[j+1]
            // we swap the elements
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //printing the sorted array
    cout<<("\n Sorted Array : ");
    for (int i = 0; i < n; i++)
    {
        cout<<("%d ", a[i]);
    }
   end = clock();
    cout << "\nTime Taken Is: " << (end - start) / CLK_TCK;
    cout << ("\n Harmehar Kaur (CSE-1 04613202720)\n");
    return 0;
}