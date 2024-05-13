// Program to print the sum of 1-N nos using Parameterized Recursion.
#include <iostream>
using namespace std;

int rec(int n,int sum){

    if(n<=0){
        return sum;
    }
    rec(n-1,sum+n);
}
int main(){
    int n,sum=0;
    cout<<"Enter the no: ";
    cin>>n;
   int ans= rec(n,sum);
   cout<<"\nThe Sum is: "<<ans;
   return 0;
}