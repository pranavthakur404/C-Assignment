// Write a c++ program to find the maximum of two numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numebers: ";
    cin>>a>>b;

    int max;
    max = a>b?a:b;

    cout<<"Max number is "<<max;

    return 0;
}