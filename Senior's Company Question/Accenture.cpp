#include <iostream>
#include <string>

using namespace std;
int main()
{
    string str;
    int len, i, u_count = 0, l_count = 0, j;
    cout << "Enter the String: ";
    getline(cin, str);
    len = str.length();
    for (i = 0; i < len; i++)
    {
        if (isupper(str[i]))
            u_count++;
        else
            l_count++;
    }
    if (u_count > l_count)
    {
        for (j = 0; j < len; j++)
            str[j] = toupper(str[j]);
    }
    cout << "The New String: " << str;
    return 0;
}