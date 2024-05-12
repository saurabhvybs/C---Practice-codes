#include <iostream>
#include <conio.h>
#include <array>
#include <algorithm>
using namespace std;
int main()
{
    int n, j;
    cout << "Enter the size of array :\n";
    cin >> n;

    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the value of array\n";
        cin >> arr[i];
    }
    sort(arr, arr + n);
    for (j = 1; j <= n; j++)
    {
        if (arr[j - 1] == j)
        {
            continue;
        }
        else
        {
            cout << "The missing no is" << j;
            break;
        }
    }
    return 0;
}