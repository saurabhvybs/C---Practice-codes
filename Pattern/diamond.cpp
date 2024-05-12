#include <iostream>
using namespace std;

int main()
{
    int i, j, k, l = 4, m, n = 64;
    int a, b, c, d, e = 0;

    for (i = 65; i < 70; i++)
    {
        for (k = l; k > 0; k--)
        {
            cout << " ";
        }

        for (j = 65; j <= i; j++)
        {
            cout << "*";
        }
        if (i >= 66)
        {
            for (m = n; m >= 65; m--)
            {
                cout << "*";
            }
        }
        cout << "\n";
        l--;
        n++;
    }

    for (a = 1; a < 5; a++)
    {
        for (c = 1; c <= a; c++)
        {
            cout << " ";
        }
        for (b = 5; b > a; b--)
        {
            cout << "*";
        }
        for (d = 3; d > e; d--)
        {
            cout << "*";
        }
        cout << "\n";
        e++;
    }
    return 0;
}
