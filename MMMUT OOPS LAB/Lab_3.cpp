// Write a C++ program to find out the greatest and the smallest among three numbers using pointer.
#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    int *p1, *p2, *p3;
    cout << "Enter the values: \n";
    cin >> a >> b >> c;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    cout << "The Greatest No. is: " << ((*p1 >= *p2 && *p1 >= *p3) ? *p1 : ((*p2 >= *p1 && *p2 >= *p3) ? *p2 : *p3))<<"\n";
    cout << "The Smallest No. is: " << ((*p1 <= *p2 && *p1 <= *p3) ? *p1 : ((*p2 <= *p1 && *p2 <= *p3) ? *p2 : *p3));
    return 0;
}