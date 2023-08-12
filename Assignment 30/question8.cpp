// Define overloaded functions to calculate area of circle, area of rectangle and area of triangle?
#include<iostream>
using namespace std;
float area(int a);
int area(int a,int b);
float area(double base,double height);
int main()
{
    cout<<"Area of circle is "<<area(5.0,6.0);


    return 0;
}
float area(int a)
{
    return 1.34 * (a*a);
}
int area(int a,int b)
{
    return a*b;
}
float area(double base,double height)
{
    return (base*height)/2;
}