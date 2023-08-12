// Rule 1 in c++ (we have an option to use struct keyword in c++ except while defining structure)
// #include<iostream>
// using namespace std;
// struct Book
// {
//     int bookid;
//     char title[20];
//     float price;
// };
// Book input();
// void display(Book b);
// int main()
// {
//     Book b;
//     b = input();
//     display(b);

//     return 0;
// }
// Book input()
// {
//     Book b;
//     cout<<"Enter bookid, title and price of the book";
//     cin>>b.bookid;
//     cin.ignore();
//     cin.getline(b.title,20);
//     cin>>b.price;
//     return b;
// }
// void display(Book b)
// {
//     cout<<b.bookid<<b.title<<b.price;
// }

#include <iostream>
using namespace std;
struct Book
{
    int bookid;
    char title[20];
    float price;

    void display()
    {
        cout<<bookid<<title<<price;
    }

    void input()
    {
    cout << "Enter bookid, title and price of the book";
    cin >> bookid;
    cin.ignore();
    cin.getline(title, 20);
    cin >> price;
    }
};
int main()
{
    Book b;
    b.input();
    b.display();

    return 0;
}

