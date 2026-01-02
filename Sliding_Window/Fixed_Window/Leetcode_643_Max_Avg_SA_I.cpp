// Leetcode 643 - Maximum Average Subarray I

// Techniques Used: Sliding Window

// Time Complexity O(n)
// Best Case, Worst Case, Average Case => O(n)

// Space Complexity O(1)

#include <iostream>
using namespace std;

double Max_Avg_SubArray_I(int *arr, int k, int n)
{
    double Maxsum = 0, WindowSum = 0;
    for(int i = 0; i < k; i++)
    {
        WindowSum += arr[i];
    }
    Maxsum = WindowSum / k;
    for(int i = k; i < n; i++)
    {
        double avg = 0;
        WindowSum += arr[k];
        WindowSum -= arr[i-k];
        avg = WindowSum / k;
        if (avg > Maxsum)
        {
            Maxsum = avg;
        }

    }
    return Maxsum;
}

int main()
{
    int n = 6;
    int arr[n] = {1,12,-5,-6,50,3};
    int k = 4;
    Max_Avg_SubArray_I(arr,k,n);
    return 0;
}
