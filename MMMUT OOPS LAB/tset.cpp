#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>nums;
    int n,el;
    cout<<" enter the size: \n";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>el;
        nums.push_back(el);
    }
    for(auto el:nums){
        cout<<el<<" ";
    }
    return 0;
}