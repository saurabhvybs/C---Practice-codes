//program to find the sum of all elements of an array.
#include<iostream>
using namespace std;
int main ()
{
 int arr[5];
 int sum=0;
 cout<<"Enter the elements in array:";
for(int j=0;j<5;j++)
 cin>>arr[j];
  for(auto element : arr )
 {
    sum+=element;
 }
 cout<<"the sum is: "<<sum;
return 0;
}