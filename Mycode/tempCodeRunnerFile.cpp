#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
class complex
{
    int r;
    int i;

public:
    void getdata()
    {
        cout << "\n Enter the value of real part: \n";
        cin >> r;
        cout << "\n Enter the value of imaginary part: \n";
        cin >> i;
    }
    complex operator  --()
    {
        complex temp;
        temp.r = --r;
        temp.i = --i;
        return temp;
    }
    void showdata()
    {
        cout << "\n The complex no. is: " << r << "+i" << i;
    }
};
int main()
{
    system("cls");
    complex c, c1;
    c.getdata();
    c.showdata();
    c1 = --c;
    c1.showdata();
    cout << "\n Harmehar Kaur[CSE-1,04613202720] ";
    return 0;
}