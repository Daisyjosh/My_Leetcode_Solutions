// Leetcode 1343. Number of Sub-Arrays of size k Greater than or equal to Threshold

// Technique Used: Sliding Window

// Time complexity: O(n)
// Best Case, Average Case, Worst Case => O(n)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

int numOfsubArrays(int *arr,int k, int threshold,int n)
{
    int Windowsum = 0;
    int target = threshold * k;
    int count = 0;
    for(int i = 0; i < k; i++)
    {
        Windowsum += arr[i];
    }
    if (Windowsum >= target)
    {
        count += 1;
    }
    for(int i = k; i < n; i++)
    {
        Windowsum += arr[i];
        Windowsum -= arr[i-k];
        if (Windowsum >= target){
            count ++;
        }
    }
    return count;

}

int main()
{
    int n = 8;
    int arr[n] = {2,2,2,2,5,5,5,8};
    int k = 3;
    int threshold = 4;
    int result = numOfsubArrays(arr,k,threshold,n);
    cout << result << endl;
    return 0;

}