// define a function to check whether a given number is a term in a Fibonacci series ot not
#include <iostream>
using namespace std;
int isFibonacciN(int x);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    isFibonacciN(n);

    return 0;
}
int isFibonacciN(int x)
{
    int a = -1, b = 1, c = 0, i;
    while (1)
    {
        c = a + b;
        if (c >= x)
        {
            if (c == x)
            {
                cout << "Yes";
                break;
            }
            else
            {
                cout << "No";
                break;
            }
        }
        a = b;
        b = c;
    }
}
