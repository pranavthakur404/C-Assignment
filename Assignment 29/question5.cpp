// Write a C++ program to calculate volume of cuboid.
#include<iostream>
using namespace std;
int main()
{
    int l,w,h,volume;
    cout<<"Enter length, width and height: ";
    cin>>l>>w>>h;
    volume = l*w*h;

    cout<<"Volume is "<< volume;

    return 0;
}