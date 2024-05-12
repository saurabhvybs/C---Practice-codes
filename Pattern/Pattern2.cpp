#include <iostream>
using namespace std;

int main()
{
    int i, j, k, l = 25, m, n = 64;

    for (i = 65; i < 91; i++)
    {
        for (k = l; k > 0; k--)
        {
            cout << " ";
        }

        for (j = 65; j <= i; j++)
        {
            cout << char(j);
        }
        if (i >= 66)
        {
            for (m = n; m >= 65; m--)
            {
                cout << char(m);
            }
        }

        cout << "\n";
        l--;
        n++;
    }

    return 0;
}