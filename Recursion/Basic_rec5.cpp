////Program to print N-1 using Backtracking.

#include<iostream>
using namespace std;

void rec(int n,int k){
    if(k>n)
    return;

    rec(n,k+1);
    cout<<k<<" ";

}
int main(){
    int n;
    cout<<"Enter the no ";
    cin>>n;
    rec(n,1);
    return 0;

}