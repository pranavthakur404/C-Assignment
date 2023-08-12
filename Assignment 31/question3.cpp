// Define a function to rotate an array by n position in the d direction. Implement position and direction using default arguments. Argument d can be -1 or 1 denoting left or right direction. Argument n should be the last argument with default value 1
#include <iostream>
using namespace std;
void rotateArray(int arr[], int, int = 1, int = 1);
void display(int[], int);
int main()
{
    int arr[5], i;
    cout << "Enter 5 number: ";
    for (i = 0; i < 5; i++)
        cin >> arr[i];
    display(arr, 5);
    rotateArray(arr, 5, 1);
    display(arr, 5);

    return 0;
}
void rotateArray(int arr[], int size, int d, int n)
{
    int temp, i, j;
    if (d==1)
    {
        for (j = 1; j <= n; j++)
        {
            temp = arr[size - 1];
            for (i = size - 1; i > 0; i--)
                arr[i] = arr[i - 1];
            arr[0] = temp;
        }
    }
    else if(d==-1)
    {
        for (j = 1; j <= n; j++)
        {
            temp = arr[0];
            for (i = 0; i<=size-2; i++)
                arr[i] = arr[i + 1];
            arr[size-1] = temp;
        }
    }
}
void display(int arr[], int size)
{
    int i;
    cout << endl;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
}