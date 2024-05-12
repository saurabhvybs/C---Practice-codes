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
    int n = 0;
    cout << "fabonacci series from 1-100";
    while (fabonacci(n) <= 100)
    {
        cout << fabonacci(n) << " ";
        n++;
    }
    return 0;
}
