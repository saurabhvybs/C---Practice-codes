#include<iostream>
using namespace std;
void Print_no(int n){

    if(n==0)
    return ;
    else
    Print_no(n-1);
    cout<<n<<" ";
    
}
int main(){
    int n;
    cout<<"Enter the no: ";
    cin>>n;
   cout<<"THe answer is: ";
   Print_no(n);
   return 0;
}