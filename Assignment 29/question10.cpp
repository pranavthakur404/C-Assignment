// Write a c++ program to add all the numbers of an array size 10.
#include<iostream>
using namespace std;
int main()
{
    int arr[10],sum=0,i;
    cout<<"Enter 10 numbers: ";
    for(i=0;i<10;i++)
        cin>>arr[i];

    cout<<endl;
    for(i=0;i<10;i++)
        sum=sum+arr[i];

    cout<<"sum is "<<sum;

    return 0;
}