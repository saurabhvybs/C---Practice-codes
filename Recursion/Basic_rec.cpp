//Program to print names 5 times

#include <iostream>
using namespace std;
void rec(int n){
    if (n==0)
    return ;
    cout<<"Saurabh";
    rec(n-1);
}
int main() {

rec(5);
    return 0;
}