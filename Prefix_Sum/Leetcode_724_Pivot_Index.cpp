// Leetcode 724 Find Pivot Index

// Pattern: Prefix Sum

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;

int pivotIndex(vector<int> &nums)
{
    int totalSum = 0;
    for(int num: nums)
    {
        totalSum += num;
    }
    int leftSum = 0;
    for(int i = 0; i < nums.size(); i++)
    {
        if(leftSum == totalSum - leftSum - nums[i])
        {
            return i;
        }
        leftSum += nums[i];
    }
    return -1;
}

int main()
{
    vector<int> nums = {1,7,3,6,5,6};
    int result = pivotIndex(nums);
    cout << result << endl;
    return 0;
}
