// Program of Merge Sort Using recursion;
#include <iostream>
using namespace std;
int Merge(int *arr, int end, int start)
{

    int mid = start+(end-start) / 2;

    int len1 = (mid - start) + 1;
    int len2 = (end - mid);

    int *First = new int[len1];
    int *Second = new int[len2];
    int idxMain = start;
    // copying array
    for (int i = 0; i < len1; i++)
    {
        First[i] = arr[idxMain++];
    }
    for (int j = 0; j < len2; j++)
    {
        Second[j] = arr[idxMain++];
    }
    // Merging the Two array along with sorting.
    int index1 = 0, index2 = 0;
    idxMain = start;
    while (index1 < len1 && index2 < len2)
    {
        if (First[index1] < Second[index2])
            arr[idxMain++] = First[index1++];
        else
            arr[idxMain++] = Second[index2++];
    }
    while (index1 < len1)
        arr[idxMain++] = First[index1++];
    while (index2 < len2)
        arr[idxMain++] = Second[index2++];
    delete[] First;
    delete[] Second;
}
void Merge_sort(int *arr, int size, int start)
{
    if (start >= size)
    {
        return;
    }
    int mid = start+(size-start) / 2;
    // Merge Left Part.
    Merge_sort(arr, mid, start);
    // Merge Right Part.
    Merge_sort(arr, size, mid + 1);
    // Merge Both Part
    Merge(arr, size, start);
}
int main()
{
    int size, start = 0;
    cout << "Enter the size of the array to be sorted: ";
    cin >> size;
    int *arr = new int[size];
    cout << "Enter the elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Merge_sort(arr, size - 1, start);
    cout << "The Array after Merge sort is: ";
    for (int idx = 0; idx < size; idx++)
    {
        cout << arr[idx] << " ";
    }
    delete[] arr;
}