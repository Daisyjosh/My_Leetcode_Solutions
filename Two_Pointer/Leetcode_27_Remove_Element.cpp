// Leetcode 27 Remove Element

// Pattern: Two Pointer

// Difficulty Level: Easy

// Time Complexity: O(n)
// Best, Worst and Average Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

int RemoveElement(int *arr,int val, int n)
{
    int i = 0;
    for(int j = 0; j < n; j++)
    {
        if(arr[j]!=val)
        {
            arr[i] = arr[j];
            i++;
        }
    }
    return i;
}

int main()
{
    int n = 4;
    int arr[4] = {3,2,2,3};
    int val = 3;
    int result = RemoveElement(arr,val,n);
    cout << result << endl;
    return 0;
}