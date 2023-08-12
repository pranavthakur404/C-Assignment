// Define a functioin to calculate HCF of two numbers.
#include<iostream>
using namespace std;
int hcf(int,int);
int main()
{
    int a,b;
    cout<<"Enter two number: ";
    cin>>a>>b;  
    cout<<"HCF is "<<hcf(a,b);
    return 0;
}
int hcf(int a,int b)
{
    int min,i;
    min = a < b ? a : b;    
    for(i=2;i<=min;i++)
    {
       if(a%i==0 && b%i==0)
       {
         return i;
       }
    }
    
}