#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <time.h>
#include <dos.h>
using namespace std;

class binarySearch
{
    int size;
    int ar[10];
    int elementsearched;

public:
    binarySearch()
    {
        sizeofarray();
        ar[10] = ar[size];
        getinfo();
        Searchbinary(ar, size, elementsearched);
    }
    void sizeofarray()
    {
        cout << ("\n Enter the number of elements : ");
        cin >> size;
    }
    void getinfo()
    {
        // user input elements of array
        cout << ("\n Enter elements in increasing order : ");
        for (int i = 0; i < size; i++)
        {
            cin >> ar[i];
        }
        // value to be searched

        cout << ("\n Enter the value to be searched : ");
        cin >> elementsearched;
    }
    int Searchbinary(int arr[], int n, int x)
    {

        int start = 0, end = n - 1;
        // Repeat until the pointers start and end meet each other
        while (start <= end)
        {
            int mid = (start + end) / 2; // Middle Index
            if (arr[mid] == x)
            { // element found
                return mid;
            }
            else if (x < arr[mid])
            { // x is on the left side
                end = mid - 1;
            }
            else
            { // x is on the right side
                start = mid + 1;
            }
        }
        return -1; // Element is not found
    }
};
int main()
{
    clock_t start, end;
    start = clock();
    binarySearch obj;
    end = clock();
    cout << "\nTime Taken Is: " << (end - start) / CLK_TCK;
    cout << ("\n Harmehar Kaur (CSE-1 04613202720)\n");
    return 0;
}
