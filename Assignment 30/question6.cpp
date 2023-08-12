// Define a function to swap data of two int variable using call by reference
#include<iostream>
using namespace std;
int swapping(int &a,int &b);
int main()
{
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;
    cout<<"a="<<a<<" b="<<b;
    swapping(a,b);
    cout<<endl;
    cout<<"a="<<a<<" b="<<b;
    return 0;
}
int swapping(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}