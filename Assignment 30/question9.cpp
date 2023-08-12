// Write function using function overloading to find maximum of two numbers and both numbers can be integer or real
#include<iostream>
void maxNum(int,int);
void maxNum(double,double);
using namespace std;
int main()
{
    maxNum(5.8,1.8);
} 
void maxNum(int a,int b){
    int max;
    max =  a > b ? a : b;
    cout<<"Max number is "<<max;
}
void maxNum(double a,double b)
{
    double max;
    max = a > b ? a : b;
    cout<<"Max number is "<<max;
}
