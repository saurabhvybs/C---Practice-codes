#include <iostream>
#include <vector>
using namespace std;

class Solution
{
    vector<int> arr;

public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        for (int i = 0; i < nums.size(); i++)
        {
            for (int j = i + 1; j < nums.size(); j++)
            {
                int sum = nums[i] + nums[j];
                if (sum == target)
                {
                    arr.push_back(i);
                    arr.push_back(j);
                    return arr;  // Added return statement to return the vector
                }
            }
        }
        // Return an empty vector if no solution is found
        return {};
    }
};

int main()
{
    vector<int> nums;
    int target = 6;
    nums = {3, 2, 4};

    Solution obj;
    vector<int> result = obj.twoSum(nums, target);

    // Print the elements of the vector
    cout << "[";
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
        if (i < result.size() - 1)
            cout << ", ";
    }
    cout << "]" << endl;

    return 0;
}
