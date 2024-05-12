//program to check if the loop is sorted or not
#include<iostream>
using namespace std;
bool sorted(int arr[],int n){
    int idx=0;
    if(n==0||n==1)
     return true;
    if(arr[0]>arr[1])
     {
        return false;
     }
     sorted (++arr,--n);
        };
int main()
{
    int n;
    bool ans;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"\nEnter the Array: ";
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans=sorted(arr,n);
    if(ans==true)
    cout<<"Sorted";
    else
    cout<<"Unsorted";
    return 0;
}
