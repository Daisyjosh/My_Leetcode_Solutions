// Leetcode 303 Range Sum Query Immutable

// Pattern: Prefix Sum

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(n)

#include <iostream>
#include <vector>
using namespace std;

vector<int> buildPrefixSum(const vector<int>& nums) {
    vector<int> prefix;
    prefix.push_back(0);   

    for(int num : nums) {
        prefix.push_back(prefix.back() + num);
    }

    return prefix;
}

int rangeSum(const vector<int>& prefix, int left, int right) {
    return prefix[right + 1] - prefix[left];
}

int main() {
    vector<int> nums = {2, 4, 1, 3, 5};

    vector<int> prefix = buildPrefixSum(nums);

    int left = 1, right = 3;
    cout << rangeSum(prefix, left, right) << endl;

    return 0;
}
