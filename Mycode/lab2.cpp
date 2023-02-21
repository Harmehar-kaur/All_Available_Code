#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int m, n, p, q, temp; 
    system("cls");
    cout << "Enter first number :";
    cin >> m;
    cout << "Enter second number :";
    cin >> n;
    p = m;
    q = n;
    while (n != 0)
    {
        temp = m % n;
        m = n;
        n = temp;
    }
    cout << "G.C.D. = " << m;
    cout << "\nL.C.M. = " << (p * q) / m;
    cout << "\nHarmehar Kaur(CSE-1 04613202720) \n";
    return 0;
}