//Program of Quick Sort using recursion.
#include <iostream>
using namespace std;
int Partition(int *arr,int start,int end)//function to find the index of the pivot.
{
    int i=start;
    int j=end;
    int pivot=arr[start];
    while(i<j){
        while(arr[i]<=pivot && i<end)    //loop to find index of no in array which is greater than pivot wich is initially taken the first element of the array.
        i++; // i<end is a barrier so that loop dont go after the end index.
        while(arr[j]>pivot && j>start)   //loop to find index of no which is smaller than pivot.
        j--;
        if(i<j){ //if i<j means they didn't crossed each other so swap them so that smaller element from pivot on right go in left and larger element than pivot in left comes in right.
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[start],arr[j]);    //in last only j has the index of pivot which is the first elemnt of the array we took initially so we swap them then gives the pivot its right index
    return j;
}
void Quick_sort(int arr[], int low, int high)
{
    if(low<high)
    {
        int pivot=Partition(arr,low,high); //findinf the index of the partition or pivot 
        Quick_sort(arr,low,pivot-1); // recursive call for left side of the array to sort
        Quick_sort(arr,pivot+1,high); // recursive call for right side of the array to be sorted.
    }
}
int main()
{
    cout << "Enter the size of the array: ";
    int n;
    cin>>n;
    int *arr = new int[n];
    cout<<"Enter the elements in array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Quick_sort(arr, 0, n);

    cout << "the sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}