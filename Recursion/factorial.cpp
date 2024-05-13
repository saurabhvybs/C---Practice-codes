//Program to print the factorial of a no. using recursion.
#include<iostream>
using namespace std;
int fabonacci(int n){
    if (n==0)
    return 1;

   return fabonacci(n-1)*n;
}
int main(){
    int n;
    cout<<"Enter the no.";
    cin>>n;
    cout<<"\nThe fabonacci of:"<<fabonacci(n);
    return 0;
}