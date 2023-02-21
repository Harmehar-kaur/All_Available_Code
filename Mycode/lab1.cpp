#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c, D;
    system("cls");
    cout << "\n Enter coefficient of x^2(a):";
    cin >> a;
    cout << "\n Enter the coefficient of x(b):";
    cin >> b;
    cout << "\n Enter the constant(c):";
    cin >> c;
    D = (b * b) - (4 * a * c);
    cout << "\n The equation " << a << "x^2 + " << b << "x + " << c;
    if (D < 0)
    {
        float root1 = (-b) / (2 * a), root2 = (-b) / (2 * a);
        cout << "\n Have complex roots" << root1 <<  " and "  << root2;
    }
    else if (D == 0)
    {
        float root = (-b) / (2 * a);
        cout << "\n Have 2 equal roots :"  << root;
    }
    else
    {
        float root1 = ((-b) + sqrt(D)) / (2 * a), root2 = ((-b)-sqrt(abs(D)))/(2 * a);
        cout << " \n Have roots : "  << root1 << " and "  << root2;
    }
    cout << "\n Harmehar kaur(CSE-1 04613202720) \n";
    getch();
    return 0;
}