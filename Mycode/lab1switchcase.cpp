#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b, c, D;
    system("cls");
    cout << "Enter the coefficient of x^2:";
    cin >> a;
    cout << "Enter the coefficient of x:";
    cin >> b;
    cout << "Enter the constant:";
    cin >> c;
    D = (b * b) - (4 * a * c);
    int decision = 0;
    if (D == 0)
        decision = 0;
    else if (D > 0)
        decision = 1;
    else
        decision = 2;
    float root1, root2;
    switch (decision)
    {
    case 0:
        root1 = (-b) / (2 * a);
        cout << " have 2 equal roots :" << root1;
        break;
    case 1:
        root1 = ((-b) + sqrt(D)) / (2 * a), root2 = ((-b) - sqrt(abs(D))) / (2 * a);
        cout << " have roots : " << root1 << " and " << root2;
        break;
    case 2:
        root1 = (-b) / (2 * a), root2 = (-b) / (2 * a);
        cout << " have complex roots" << root1 << " and " << root2;
        break;
    default:
        cout << "invalid input";
        break;
    }
    cout << "\nHarmehar kaur(CSE-1 04613202720) \n";
    return 0;
}
