// Write a function using he default argument that is able to add 2 or 3 numbers
#include<iostream>
using namespace std;
int add(int,int,int=0);
int main()
{
    int r;
    cout<<"Enter two or three numbers you want to add: ";
    r=add(5,6,5);
    cout<<"Sum is "<<r;
    return 0;
}
int add(int a,int b,int c)
{
    return a+b+c;
}