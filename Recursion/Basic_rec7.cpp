//Program to print sum of 1-N no. using functional recursion.(i.e where you actually return value through function)
#include<iostream>
using namespace std;

int rec(int n){
    if(n==0){
        return 0;
    }
    return n+rec(n-1);
}
int main(){
    int n,ans=0;
    cout<<"Enter the no.";
    cin>>n;
    ans=rec(n);
    cout<<"\nThe sum is: "<<ans;
    return 0;
}