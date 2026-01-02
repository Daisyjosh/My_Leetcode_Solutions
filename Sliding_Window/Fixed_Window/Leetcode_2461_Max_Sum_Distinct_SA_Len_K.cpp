// Leetcode 2461 - Maximum Sum of Distinct Subarrays with Length K
// Techniques used: Unordered_set and Sliding Window

// Time Complexity: O(n)
// Worst and Average Case: O(n)
// Space Complexity: O(k)

// Unordered_Set => O(1) average for operations

#include <iostream>
#include <unordered_set>
#include <bits/stdc++.h>
using namespace std;

long long MaxSum_Distinct_SubArray_length_k(int arr[],int k, int n)
{
    long long MaxSum = 0, WindowSum = 0;
    int left = 0;

    unordered_set<int> st;

    for(int right = 0; right < n; right++)
    {
        while(st.count(arr[right]))
        {
            st.erase(arr[left]);
            WindowSum -= arr[left];
            left++;
        }

        st.insert(arr[right]);
        WindowSum += arr[right];

        if((right - left + 1 )== k)
        {
            MaxSum = max(MaxSum,WindowSum);
            st.erase(arr[left]);
            WindowSum -= arr[left];
            left++;
        }

    }

    return MaxSum;

    
}

int main()
{
    int n = 7;
    int arr[n] = {1,5,4,2,9,9,9};
    int k = 3;
    long long result = MaxSum_Distinct_SubArray_length_k(arr,k,n);
    cout << result << endl;
    return 0;

}