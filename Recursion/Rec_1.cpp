//Program to find Power of n,p;
#include<iostream>
#include<math.h>
using namespace std;
int Exponential(int n,int pow)
{
    if (pow==0)
    return 1;
    int smaller=Exponential(n,pow-1);
    int bigger=n*smaller;
    return bigger;
};
int main()
{

    int n,p;
    cout<<"Enter the no: ";
    cin>>n;
    cout<<"Enter the power: ";
    cin>>p;
    cout<<"\nThe Answer is:"<< Exponential(n,p);
    return 0;
}