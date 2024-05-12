//program to search a no. using Binary search
#include <iostream>
using namespace std;

int Binary_search(int arr[], int high, int low, int num)
{
    if (high >= low)
    {

        int mid = (low + (high - low)) / 2;

        if (arr[mid] == num)
            return mid;
        if (arr[mid] < num)
            return Binary_search(arr, high, mid + 1, num);
        else
            return Binary_search(arr, mid - 1, low, num);
    }
    return -1;
};
int main()
{
    int size, num;
    cout << "Enter the size of array: ";
    cin >> size;
    int *arr = new int[size];
    cout << "\nEnter the elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter the element to be searched: ";
    cin >> num;
    int ans = Binary_search(arr, size - 1, 0, num);
    (ans == -1) ? cout << "Element not found at: ": cout<< "Element found at: "<<ans;
    return 0;
}