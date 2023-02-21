#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;

class biodata
{
    int age, marks;
    char name[100];

public:
    biodata()
    {
        input_biodata();
        display_biodata();
    }
    void input_biodata()
    {
        cout << "\n Enter the name and age in same order:\n ";
        cin >> name >> age;
        cout << "\n Enter the max marks : \n";
        cin >> marks;
    }
    void display_biodata()
    {
        cout << "\n The data provided is:\n"
             << name << " | " << age << " | " << marks;
    }
};

class sessional1 : virtual public biodata
{
    int marks1;

public:
    sessional1()
    {
        input_sessional1();
        display_sessional1();
    }
    void input_sessional1()
    {
        cout << "\n Enter the maximum marks of sessional1: \n ";
        cin >> marks1;
    }
    void display_sessional1()
    {
        cout << "\n The maximum marks awarded is: " << marks1;
    }
};

class sessional2 : virtual public biodata
{
    int marks2;
    char month[100];

public:
    sessional2()
    {
        input_sessional2();
        display_sessional2();
    }
    void input_sessional2()
    {
        cout << "\n Enter the maximum marks and month of conduction : \n ";
        cin >> marks2 >> month;
    }
    void display_sessional2()
    {
        cout << "\n The maximum marks awarded are: " << marks2 <<" " <<  month;
    }
};

class result : public sessional1, public sessional2
{
    int res;
    public:
    result(){
        get_result();
        display_result();
    }
    void get_result(){
        cout<<"\n Enter the result:\n ";
        cin>> res;
    } 
    void display_result(){
        cout<<" \n The result is: "<< (res/2);
    }
};

int main()
{
    system("cls");
    sessional1 s1;
    sessional2 s2;
    result r;
    cout << "\n Harmehar Kaur[CSE-1,04613202720] ";
    return 0;
}