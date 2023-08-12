// Write a c++ program to calculate the area of circle
// pie*r*r
#include<iostream>
using namespace std;
int main()
{
  int r;
  cout<<"Enter radius";
  cin>>r;

  float area;
  area = 3.14 * r * r;

  cout<<"Area of circle having radius"<<r<<" is " << area;

  return 0;
}