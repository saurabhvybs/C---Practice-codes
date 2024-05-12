#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<string>bank={"011001","000000","010100","001000"};
        vector<int> rowDeviceCounts;
        for (int i = 0; i < bank.size(); i++)
        {
            string row = bank[i];
            int device_count = count(row.begin(), row.end(), '1');
            rowDeviceCounts.push_back(device_count);
        }
        for(auto el: rowDeviceCounts){
            cout<<el<<" ";
        }
        return 0;
}