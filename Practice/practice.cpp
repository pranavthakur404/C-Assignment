// Define a function to swap two arrays
#include <iostream>
using namespace std;
void input(int arr[], int size);
void swap_array(int arr1[], int arr2[], int size);
void display(int arr[], int size);
int main()
{
  int arr1[10], arr2[10];

  input(arr1, 10);
  input(arr2, 10);

  display(arr1, 10);
  display(arr2, 10);

  swap_array(arr1, arr2, 10);

  display(arr1, 10);
  display(arr2, 10);

  return 0;
}
void swap_array(int arr1[], int arr2[], int size)
{
  int temp, i;
  for (i = 0; i < size; i++)
  {
    temp = arr1[i];
    arr1[i] = arr2[i];
    arr2[i] = temp;
  }
}
void display(int arr[], int size)
{
  int i;
  cout << endl;
  for (i = 0; i < size; i++)
  {
    cout << arr[i];
  }
}
void input(int arr[], int size)
{
  int i;
  cout << "Enter " << size << " number: ";
  for (i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
}