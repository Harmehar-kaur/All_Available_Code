#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;
class student
{
    char name[100];
    int age;

public:
    student()
    {
        readdata();
        display();
    }
    void readdata()
    {
        cout << "\n Enter the name and age of the student: ";
        cin >> name >> age;
    }
    void display()
    {
        cout << "\n The student data entered is: " << name << " | " << age;
    }
};
class primary_student : public student
{
    char activity[50];
    int no_of_hours;

public:
    primary_student()
    {
        readprimary();
        displayprimary();
    }
    void readprimary()
    {
        cout << "\n Enter the activity performed and no.of hours for same in same order: \n";
        cin >> activity >> no_of_hours;
    }
    void displayprimary()
    {
        cout << "\n The student performs " << activity << " for the time " << no_of_hours;
    }
};
class secondary_student : public student
{

public:
    void display_data()
    {
        cout << "The student is categorised under the secondary class of the students.";
    }
};
class equipment : public secondary_student
{
    char equipment_name[20];
    char role[20];

public:
    equipment()
    {
        readequipment();
        display_equip();
    }
    void readequipment()
    {
        cout << "\n Enter the name of the equipment: ";
        cin >> equipment_name;
        cout << "\n Enter the role of the equipment: ";
        cin >> role;
    }
    void display_equip()
    {
        cout << "\n The name of the equipment is: " << equipment_name << "\n";
        cout << "\n The role of the equipment is: " << role << "\n";
    }
};
int main()
{
    system("cls");
    equipment e;
    primary_student p;
    cout << "\n Harmehar Kaur[CSE-1,04613202720] ";
    return 0;
}
