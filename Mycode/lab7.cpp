#include <stdio.h>
#include <conio.h>
#include <iostream>
using namespace std;
class book_title
{
    char name[50];
    int book_no;

public:
    book_title()
    {
        enter_book();
        display_book();
    }
    void enter_book()
    {
        cout << "\n Enter the number alloted to the book: ";
        cin >> book_no;
        cout << "\n Enter the name of the book: ";
        cin >> name;
    }

    void display_book()
    {
        cout << "\n The number alloted to the book: " << book_no;
        cout << "\n The name of the book: " << name;
    }
};
class book1 : public book_title
{
    int pagecount;
    char authorname[50];

public:
    book1()
    {
        input_details();
        display_dets();
    }
    void input_details()
    {
        cout << "\n Enter the page count of the book: ";
        cin >> pagecount;
        cout << "\n Enter the author of the book: ";
        cin >> authorname;
    }
    void display_dets()
    {
        cout << "\n The page count of the book: " << pagecount;
        cout << "\n The author of the book: " << authorname;
    }
};
class book2 : public book_title
{
    int price;

public:
    book2()
    {
        put_book2();
    }
    void put_book2()
    {
        cout << "\n Enter the price of the book: ";
        cin >> price;
        cout << "\n The price of book: " << price;
    }
};
int main()
{
    book1 b1;
    book2 b2;
    cout << "\n Harmehar Kaur [CSE-1,04613202720]";
    return 0;
}
