#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class bubble
{
    int a[100], n;

public:
    bubble()
    {
        a[0] = 1;
    }
    void input();
    void sorting();
    void output();
};
void bubble::input()
{
    cout << "Enter the size of array: \n";
    cin >> n;
    cout << "Enter the array: \n";
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << "Entered array: \n";
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
}
void bubble::sorting()
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            // comparing two consecutive elements if a[j] is greater than a[j+1]
            //  we swap the elements
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
void bubble::output()
{
    cout << "\n Sorted Array : ";
    for (int i = 0; i < n; i++)
        cout << a[i] << "\t";
}

int main()
{
    system("cls");
    bubble bsort;
    bsort.input();
    bsort.sorting();
    bsort.output();
    cout << "\n Harmehar kaur(CSE-1 04613202720) \n";
    return 0;
}