// Define a function to check whether a given number is prime number or not
#include <iostream>
using namespace std;
int isPrime(int);
int main()
{
    int r,a;
    cout<<"Enter a number: ";
    cin>>a;
    r = isPrime(a);
    cout<<(r==0?"Not a prime number":"prime number");
    return 0;
}
int isPrime(int x)
{
    int i;
    if (x > 1)
    {
        for (i = 2; i < x; i++)
        {
            if (x%i==0)
            {
                return 0;
            }
        }
        if(i==x)
        {
            return 1;
        }
    }
    else
    {
        return 1;
    }
}