#include <iostream>
#include <conio.h>
#include <process.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
class stack
{
    int a[5];
    int top;

public:
    stack()
    {
        int i;
        top = -1;
        if (top == -1)

            cout << "Initial Stack Empty";

        else
        {
            for (i = 0; i >= 0; i--)
                cout << "Value" << i + 1 << ":" << a[i];
        }
    }
    void push(int);
    void pop();
    void display();
};
void stack ::push(int size)
{
    int num;
    if (top == size - 1)
    {
        cout << "\n Overflow ";
    }
    else
    {

        if (top == size - 1)

            cout << "\n overFlow ";
        else
        {
            cout << "\n Enter the element to be pushed : \n";
            cin >> num;
            top += 1;
            a[top] = num;
        }
    }
}

void stack::pop()
{
    cout << "\n Popped element is =" << a[top];
    top = top - 1;
}
void stack::display()
{

    int i;
    if (top == -1)

        cout << "\n UnderFlow ";

    else

        for (i = top; i >= 0; i--)
        {
            cout <<"|" << a[i] <<"|\n";
        }
}

int main()
{
    system("cls");
    int ch;
    int size = 5;
    stack t;
    while (1)
    {
        cout << "\n 1.Push "
             << "\n 2.Pop "
             << "\n 3.Display "
             << "\n 4.Exit ";
        cout << "\n Enter your choice\n";
        cin >> ch;
        switch (ch)
        {

        case 1:
            t.push(size);
            break;

        case 2:
            t.pop();
            break;

        case 3:
            t.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "Invalid choice";
        }
    }

    return 0;
}
