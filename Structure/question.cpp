#include <iostream>
#include <stdio.h>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;
};
struct Book input();
void display(struct Book);
int main()
{
    struct Book b1;

    return 0;
}
struct Book input()
{
    struct Book b;
    cout << "Enter bookid, name and price: ";
    cin >> b.bookid;
    //   fflush(stdin);
    cin.ignore();
    //   fgets(b.title,20,stdin);
    cin.getline(b.title, 20);
    cin >> b.price;
    return b
}
void display(struct Book b)
{
    cout<<b.bookid<<b.title<<b.price;
}