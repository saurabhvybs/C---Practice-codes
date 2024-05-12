// Write a C++ program to generate Fibonacci series using recursive functions.
#include <iostream>
#include <conio.h>

using namespace std;

int fabonacci(int n)
{
    if (n <= 1)
        return n;
    else
    {
        return fabonacci(n - 1) + fabonacci(n - 2);
    }
}
int main()
{
    int n = 0,term;
    cout << "Enter the no of Terms u Wanna Print: ";
    cin>>term;
    while (n!=term)
    {
        cout << fabonacci(n) << " ";
        n++;
    }
    return 0;
}
