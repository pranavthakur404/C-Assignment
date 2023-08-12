// Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
int highestValue(int);
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Max number is "<<highestValue(n);
    return 0;
}
int highestValue(int x)
{
    int max=0;
    while(x)
    {
        if(max < (x%10))
            max = (x%10);
        x = x/10;
    }
    return max;
    
}