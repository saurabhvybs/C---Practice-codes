#include <iostream>
using namespace std;

int main()
{
    int i, j, k = 12, l, m = 1;

    for (i = 1; i < 8; i = i + 2)
    {
        for (j = 1; j <= i; j++)
        {
            cout << m;
        }

        l = k;
        while (l > 0)
        {
            cout << " ";
            l--;
        }
        k = k - 4;

        for (j = 1; j <= i; j++)
        {
            cout << m;
        }
        cout << "\n";
        m++;
    }
    return 0;
}
