// Leetcode 1004 Maximum Consecutive ones-III

// Pattern: Variable Sliding Window Technique

// Time Complexity: O(n)
// Best, Worst and Average Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

int MaxOnes(int *arr, int k, int n)
{
    int left = 0, zeros = 0, maxlen = 0;
    for(int right = 0; right <n;right++)
    {
        if(arr[right] == 0)
        {
            zeros++;
        }
        while(zeros>k)
        {
            if(arr[left] == 0)
            {
                zeros--;
            }
            left++;

        }
        maxlen = max(maxlen,right-left+1);
    }
    return maxlen;
}

int main()
{
    int n = 11;
    int arr[n] = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;
    int result = MaxOnes(arr,k,n);
    cout << result << endl;
    return 0;

}



