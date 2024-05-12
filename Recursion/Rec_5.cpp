//program to find sum of elements in an array using recursion.
#include<iostream>
using namespace std;
int sum=0;
int Sum(int arr[],int n){
    if(n==0)
    return 0;
    //Recursion Relation
    sum+=arr[0];
    Sum(++arr,--n);
    return sum;

};
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int *arr=new int (n);
    cout<<"\nEnter the values in array: ";
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    cout<<"\nThe sum is: "<<Sum(arr,n);
    return 0;
    
}