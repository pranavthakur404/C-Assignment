// Define a function to calculate LCM of three numbers.
#include <iostream>
using namespace std;
int findLCM(int, int, int);
int maxN(int a, int b, int c);
int main()
{
    int a, b, c;
    cout << "Enter three number: ";
    cin >> a >> b >> c;
    cout<<"LCM is "<<findLCM(a,b,c);

    return 0;
}
int findLCM(int a, int b, int c)
{
    int max;
    max = maxN(a,b,c);
    int i;
    for(i=max;1;i++)
    {
        if(i%a==0 && i%b==0 && i%c==0){
            return i;
        }
    }
}
int maxN(int a, int b, int c)
{
    if (a > b)
        if (a > c)
            return a;
        else
            return c;
    else
        if (b > c)
            return b;
        else
            return c;
}