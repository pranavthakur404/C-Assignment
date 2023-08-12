// Write a c++ program to swap values of two int variables without using third variable.
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    
    cout<<"a="<<a<<"b="<<b;
    cout<<endl;

    a = a+b;
    b = a-b;
    a = a - b;

    cout<<"a="<<a<<"b="<<b;
    
    return 0;
}