//Power of x^n using Recursion.
#include<iostream>
using namespace std;

int Power(int num,int pow){
    if(pow==0)
    return 1;
    if(pow==1)
    return num;

    int ans=Power(num,pow/2);
    if(pow%2==0)
    return ans*ans;
    else
    return num*ans*ans;
}

int main(){
    int n,pow;
    cout<<"Enter the no. whose power is to be taken: ";
    cin>>n;
    cout<<"\nEnter the Power: ";
    cin>>pow;
   int ans= Power(n,pow);
   cout<<"The ans is: "<<ans;
   return 0;
}