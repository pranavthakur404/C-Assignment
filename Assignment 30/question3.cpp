// Define a function to calculate x raised to the power y.
#include <iostream>
using namespace std;
int calcPower(int num, int pow);
int main()
{
    int num,pow,r;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Enter a power to calculate: ";
    cin>>pow;
    r = calcPower(num,pow);
    cout<<"Power is "<<r;

    return 0;
}
int calcPower(int num, int pow)
{
    int i, result = 1;
    for (i = 1; i <= pow; i++)
        result = result * num;
    return result;
}