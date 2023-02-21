#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class time //defining the class 
{
    int hours, mint, secd;

public:
    void input();
    void sum(time, time);
};
void time::input()//defining the member functions 
{
    cout << "\n Enter the time in format hours, minutes and seconds:  ";
    cin >> hours >> mint >> secd;
}
void time::sum(time t1, time t2)
{
    int h ,m ,s ;
    cout << "\n The sum of time provided is:\n";
    h = t1.hours + t2.hours;
    m = t1.mint + t2.mint;
    s= t1.secd + t2.secd;
    cout << h << ":" << m << ":" << s;
}
int main()// main function
{
    system("cls");
    time T1, T2, TTotal;
    T1.input();
    T2.input();
    TTotal.sum(T1, T2);
    cout << "\nHarmehar Kaur(CSE-1 04613202720) \n";
    return 0;
}