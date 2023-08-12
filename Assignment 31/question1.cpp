// Define a function to sort an array of interger is ascending or descending order depending on bool type argument (true for asccendin and false for descending user default argument to implement it)
#include <iostream>
using namespace std;
void sorting(int[], int, int = 1);
void display(int[],int);
int main()
{
    int arr[10],i;
    cout<<"Enter 10 number: ";
    for(i=0;i<10;i++)
       cin>>arr[i];
    display(arr,10);
    sorting(arr,10,0);
    display(arr,10);
    return 0;
}
void sorting(int arr[], int size, int choice)
{
    int r, temp, i;
    if (choice)
    {
        for (r = 1; r < size; r++)
        {
            for (i = 0; i < size - r; i++)
            {
                if (arr[i] > arr[i + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
        }
    }
    else
    {
         for (r = 1; r < size; r++)
        {
            for (i = 0; i < size - r; i++)
            {
                if (arr[i] < arr[i + 1])
                {
                    temp = arr[i];
                    arr[i] = arr[i+1];
                    arr[i+1] = temp;
                }
            }
        }
    }
}
void display(int arr[],int size)
{
    int i;
    cout<<endl;
    for(i=0;i<size;i++)
       cout<<arr[i]<<" ";

}