// Program to Perform Bubble sort Using Recursion.
#include <iostream>
using namespace std;

void Bubble_sort(int arr[], int len)
{
    if (len == 0 || len == 1)
        return;
    for (int k = 0; k < len-1; k++)
    {
        if (arr[k] > arr[k + 1])
        {
            swap(arr[k], arr[k + 1]);
        }
    }
    Bubble_sort(arr, --len);
}
int main()
{
    int size;
    cout << "\nEnter the size of the array: ";
    cin >> size;
    int arr[size];
    // int *arr=new int[size];
    cout << "\nEnter the values in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Bubble_sort(arr, size);
    cout << "The New Array is: " << endl;
    for (int j = 0; j < size; j++)
    {
        cout << arr[j] << " ";
    }
    // delete[] arr;
    return 0;
}