//Program to print the no in words using recursion.
#include <iostream>
#include <string>

using namespace std;
void to_words(string str[], int n)
{
    if(n==0)
    return;

    int rem=n%10;
    n=n/10;
    to_words(str,n);
     cout<<" "<<str[rem];
}

int main()
{
    int n;
    string arr[10] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

    cout << "Enter the number: ";
    cin >> n;

    to_words(arr, n);
    return 0;
}
