//Program to print 1-N using Backtracking.

#include<iostream>
using namespace std;
void rec(int n){
    if(n<1)
    return;
    rec(n-1);
    cout<<n<<"\n";
}
int main(){
    int n;
    cout<<"Enter the no.";
    cin>>n;
    rec(n);
    return 0;
}