#include <iostream>
#include <string>
#include <stdio.h>
#include <sstream>
using namespace std;

int factorial(int k)
{
    int fact = 1;
    if (k == 0 || k == 1)
        return 1;
    else
    {
        for (int j = 1; j <= k; j++)
        {
            fact = fact * j;
        }
        return fact;
    }
}

int main()
{
    string str;
    int n, p, c;
    int max_p = 1, total_combi;

    // where n= no of chairs,p= no. of people,c = space between them.
    cout << "Enter the value in n p c format:\t";
    getline(cin, str);

    istringstream iss(str); // Extracting the value from string and storing them in variables.
    iss >> n >> p >> c;
    if (n > p && c == 1)
    {
        for (int i = 3; (i < n && i < n + 1); i = i + 2)
        {
            max_p++; // Gives us the max person that can sit in optimal condition.
        }
        if (p == max_p) // case 1: when the gap b/w the employees is 1.
        {
            if (n % 2 == 0)
            {
                total_combi = factorial(max_p) * 2;
                cout << " MAXIMUM NO OF SITTING ARRANGEMENTS: " << total_combi;
            }
            else
            {
                total_combi = factorial(max_p) * 3;
                cout << " MAXIMUM NO OF SITTING ARRANGEMENTS: " << total_combi;
            }
        }
    }
    else
    cout<<"Chairs Are Less than Person";
    return 0;
}
