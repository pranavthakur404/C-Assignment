// Define a functioin to print all the prime factors of a given number.
#include <iostream>
using namespace std;
void primeFactor(int);
int main()
{
    int n;
    cout << "Enter a number :";
    cin >> n;
    primeFactor(n);

    return 0;
}
void primeFactor(int n)
{
    int i = 2;
    while(n>1)
    {
        if(n%i==0)
        {
           
            n=n/i;
        }
        else
        {
            cout<<i<<" ";
            i++;
        }
    
    }
    cout<<i;
}
