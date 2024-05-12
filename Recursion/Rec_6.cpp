//Program to search a no in an array using linear search
#include<iostream>
using namespace std;

bool Search(int arr[],int num,int size){
    if(size==0)
    return false;
    if(arr[0]==num)
    return true;
    Search(++arr,num,--size);

};
int main(){
    int n,num;
    cout<<"\nEnter the size of the Array: ";
    cin>>n;
    int *arr=new int (n);
    cout<<"\nEnter the values in array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"\nEnter the Element to be searched: ";
    cin>>num;
   bool ans= Search(arr,num,n);
    if(ans==true)
    cout<<"\nElement Found";
    else
    cout<<"\nElement Not Found";
}