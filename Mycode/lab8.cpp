#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
class staff
{
    char name[100];
    int code;

public:
    staff()
    {
        enter_data();
        display_data();
    }
    void enter_data()
    {
        cout << "\n Enter the name and code of the staff member:  ";
        cin >> name >> code;
    }
    void display_data()
    {
        cout << "\n The data is: "
             << name << "|"
             << code;
    }
};
class teacher : public staff
{
    char subject[100];

public:
    teacher()
    {
        enter_teacher();
        display_teacher();
    }
    void enter_teacher()
    {
        cout << " \n Enter the subject taught by the teacher: ";
        cin >> subject;
    }
    void display_teacher()
    {
        cout << " \n The teacher teaches the subject: " << subject;
    }
};
class typist : public staff
{
    int speed;

public:
    typist()
    {
        details_typist();
    }
    void details_typist()
    {
        cout << "\n Enter the speed of the typist: ";
        cin >> speed;
    }
};
class officer : public staff
{
    char grade[100];

public:
    officer()
    {
        details_officer();
    }
    void details_officer()
    {
        cout << "\n Enter the grade of the officer: ";
        cin >> grade;
    }
};
class regular : public typist
{
    int sal;

public:
    regular()
    {
        details_regular();
    }
    void details_regular()
    {
        cout << "Enter the salary of the regular typist:  ";
        cin >> sal;
    }
};
class casual : public typist
{
    int dailywages;

public:
    casual()
    {
        details_casual();
    }
    void details_casual()
    {
        cout << " \n Enter the daily wage of the worker:  ";
        cin >> dailywages;
    }
};
int main()
{
    system("cls");
    teacher t;
    officer o;
    regular r;
    casual c;
    cout << "\n Harmehar Kaur [CSE-1,04613202720]";
    return 0;
}