// Define a function to swap two arrays
#include<iostream>
using namespace std;
int swappingArray(int arr1[],int size1,int arr2[],int size2);
void display(int arr[],int size);
void input(int arr[],int size);
int main()
{
    int arr1[5],arr2[5];
    cout<<"Enter 5 numbers of first array";
    input(arr1,5);
    cout<<"Enter 5 numbers of second array";
    input(arr2,5);

    display(arr1,5);
    display(arr2,5);

    swappingArray(arr1,5,arr2,5);

     display(arr1,5);
    display(arr2,5);
    

    return 0;
}
int swappingArray(int arr1[],int size1,int arr2[],int size2)
{   
    int i,temp;
    if(size1 == size2)
    {
        for(i=0;i<size1;i++)
        {
            temp = arr1[i];
            arr1[i] = arr2[i];
            arr2[i] = temp; 
        }
    }
}
void display(int arr[],int size)
{
    int i;
    cout<<endl;
    for(i=0;i<size;i++){
        cout<<arr[i];
    }
}
void input(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
}