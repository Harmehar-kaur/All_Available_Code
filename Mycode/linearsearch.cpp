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
    // user input size of array
    int n;
    cout << ("\n Enter the number of elements : ");
    cin>>n;
    //declaring an array "a" of size n
    int a[n];
    // Enter elements in the array
    cout << ("\n Enter elements : ");
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    // enter the value to be searched , store in num
    int num;
    cout << ("\n Enter the value to be searched : ");
    cin >> num;
    // loc variable will store the position of element num
    int loc = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == num)
        {
            loc = i + 1;
            break;
        }
    }
    // Checks if loc= -1 means element not present in the array
    if (loc == -1)
    {
        cout<<("\n Element not found ");
    }
    // element present in array display the position
    else
    {
        cout<<"\n Element found at :" <<loc;
    }
    end = clock();
    cout << "\nTime Taken Is: " << (end - start) / CLK_TCK;
    cout << ("\n Harmehar Kaur (CSE-1 04613202720)\n");
    return 0;
}