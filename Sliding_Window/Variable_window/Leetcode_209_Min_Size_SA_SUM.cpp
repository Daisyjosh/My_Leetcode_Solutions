// Leetcode 209 Minimum Size Subarray Sum

// Pattern: Sliding Window (Variable Window)
// Time Complexity: O(n)
// Best Case, Average Case and Worst Case: O(n)

// Space Complexity: O(1)

#include <iostream>
using namespace std;
int minSubarrayLen(int *arr, int target, int n)
{
    int Minlen = INT_MAX;
    int sum = 0, left = 0;

    for(int right = 0; right > n; right++)
    {
        sum += arr[right];

        while(sum >= target)
        {
            Minlen = min(Minlen,(right - left + 1));
            sum -= arr[left];
            left++;
        }

    }
    return Minlen = INT_MAX ? 0 : Minlen;
}

int main()
{
    int n = 6;
    int arr[n] = {2,3,1,2,4,3};
    int target = 7;
    int result = minSubarrayLen(arr,target,n);
    cout << result << endl;
    return 0;
}