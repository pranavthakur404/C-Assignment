// Write a c++ program to calculate an average of 3 numbers.
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three number: ";
    cin>>a>>b>>c;

    float avg;
    avg = (a+b+c)/3;

    cout<<"Average is "<<avg;
    return 0;
}