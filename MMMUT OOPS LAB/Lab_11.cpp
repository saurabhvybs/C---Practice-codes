//reversing the first and last digit of a no
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, len=0,num=0,first,last,r;
    cout << "Enter the Digit: ";
    cin >> n;
    num=n;
    int no=n;
    while (n > 0)      // CALCULATING THE LENGTH.
    {
        n = n / 10;
        len++;
    }
    cout<<"the length is: "<<len;
    int k=0;
    while (num != 0)
    {
        ++k;           //calculating index 
         r = num % 10;
        if (k == 1)
        last=r;      // storing last
        else if(k==len)
        first=r;     //storing first
         num=num/10;
    }
    cout<<"\nthe first no. is: "<<first<<"\nThe last no. is: "<<last;
    
        no=no/10;              // no is copy of number.
        no=no*10+first;
        no=(no- (first*pow(10,len-1)))+(last*ceil(pow(10,len-1)));
        cout<<"\nthe swapped two: "<<no;

    return 0;
}