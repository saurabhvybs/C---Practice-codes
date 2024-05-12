#include <iostream>
#include <vector>
#include <string>
using namespace std;

void print_vec(const vector<int> &vec)
{
    for (auto elem : vec)
    {
        cout << elem ;
    }
}

int main()
{

    vector<int> arr, arr_even, arr_odd;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cout << "Enter the Value in array: \n";
        cin >> x;
        arr.push_back(x);
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] % 2 == 0)
        {
            arr_even.push_back(arr[j]);
        }
        else
        {
            arr_odd.push_back(arr[j]);
        }
    }
    cout << "THE OUTPUT IS: " << endl;
    print_vec(arr_even);
    print_vec(arr_odd);

    return 0;
}