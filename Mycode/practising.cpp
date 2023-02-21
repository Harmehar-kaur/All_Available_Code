#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int a[10], n, number, cnt = 0, pos;
    cout << "\n enter the size of the array:\n";
    cin >> n;
    cout << "\n enter the elements of array:\n";
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
        
    }
    cout << "\n Enter Element to be Searched : ";
    cin >> number;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == number)
        {
            cnt = 1;
            pos = i + 1;
            break;
        }
    }
    if (cnt == 0)
    {
        cout << "\n Element Not Found..!!";
    }
    else
    {
        cout << "\n Element " << number << " Found At Position " << pos;
    }
    return 0;
}
