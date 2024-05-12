// c++ program to find sum and product of all elements of the array
#include <iostream>
using namespace std;
int main()
{
    int n, i, sum = 0, pro=1;
    cout << "Enter the size of the Array :\n";
    cin >> n;
    int *array = new int[n];
    cout << "Enter the values in array :\n";
    for (i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    for (int j = 0; j < n; j++)
    {
        sum += array[j];
        pro*=array[j];
    }
    delete[] array;
    cout << "The Sum of the elements of Array is :" << sum;
    cout<<"\n The Product of elements of the Array is :" << pro;
    return 0;
}
