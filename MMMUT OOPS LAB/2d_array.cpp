//Program to find the element in a 2d array
#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
   for(auto elements : arr){
        for(auto i : elements){
            cout<<i<<" ";
        }
   }


}