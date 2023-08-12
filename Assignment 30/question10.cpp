// Write function using function overloading to add two numbers having different data types
#include<iostream>
using namespace std;
int add(int,int);
double add(double,double);
double add(int,double);
double add(double,int);
int main()
{
    cout<<"sum is ="<<add(5,5.7);
    return 0;
}
int add(int a,int b)
{
    return a + b;
}
double add(double a,double b)
{
    return a + b;
}
double add(int a,double b)
{
    return a + b;
}
double add(double a,int b)
{
    return a + b;
}