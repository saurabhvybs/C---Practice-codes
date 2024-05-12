//Program to print no. from 1-N
#include<iostream>
using namespace std;
void rec(int n, int No){
    if (n==0)
    return;
    cout<<No<<" ";
    rec(n-1,++No);
}
int main(){
    int n;
    cout<<" enter a no.\n";
    cin>>n;
    rec(n,1);
    return 0;

}