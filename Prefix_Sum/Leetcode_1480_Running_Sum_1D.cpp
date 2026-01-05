// Leetcode 1480 Running Sum of ID Array

// Pattern: Prefix Sum

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity O(1)

#include <iostream>
#include <vector>
using namespace std;

 vector<int> runningSum(vector<int> &nums)
{
    for(int i = 1; i < nums.size(); i++)
    {
        nums[i] = nums[i] + nums[i-1];

    }
    return nums;
}

int main()
{
    vector<int> nums = {1,2,3,4};
    vector<int> result = runningSum(nums);
    for(int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    return 0;
}