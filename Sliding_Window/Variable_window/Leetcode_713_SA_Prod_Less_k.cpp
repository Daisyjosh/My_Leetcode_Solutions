// Leetcode 713 Subarray Product Less Than K

// Pattern: Variable Sliding Window

// Time Complexity: O(n)
// Best, Worst and Average Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

int numSAProdLessThanK(int *arr, int k, int n)
{
    if(k <= 1) return 0; // edge case

    int left = 0;
    int count = 0;
    long long product = 1;

    for(int right = 0; right < n; right++)
    {
        product *= arr[right];

        while(product >= k)
        {
            product /= arr[left];
            left++;
        }
        count += right - left + 1;
    }
    return count;
}

int main()
{
    int n = 4;
    int arr[n] = {10,5,2,6};
    int k = 100;
    int result = numSAProdLessThanK(arr,k,n);
    cout << result << endl;
    return 0;
}