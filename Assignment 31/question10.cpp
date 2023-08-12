// Define a function to merge two sorted array of same size;
#include <iostream>
using namespace std;
int merge(int [],int,int [],int,int []);
int sort(int [],int);
void display(int [],int);
void input(int [],int); 
int main()
{
    int arr1[5],arr2[5],arr3[10];
    cout<<"Enter 5 number of first Array";
    input(arr1,5);
    cout<<"Enter 5 number of second Array";
    input(arr2,5);

    display(arr1,5);
    display(arr2,5);

    merge(arr1,5,arr2,5,arr3);

    display(arr1,5);
    display(arr2,5);
    display(arr3,10);

    return 0;
}
int merge(int arr1[],int size1,int arr2[],int size2,int arr3[])
{
    sort(arr1,5);
    sort(arr2,5);
    int i,j;
    for(i=0,j=0;i<size1;i++,j++)
    {
      arr3[j] = arr1[i];
    }
    for(i=0;i<size2;i++,j++)
    {
      arr3[j] = arr2[i];
    }

}
int sort(int arr[],int size)
{
    int r,i,temp;
    for(r=1;r<size;r++)
    {
        for(i=0;i<size-r;i++)
        {
            if(arr[i] > arr[i+1])
            {
               temp = arr[i];
               arr[i] = arr[i+1];
               arr[i+1] = temp;
            }
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