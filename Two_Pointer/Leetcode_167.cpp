// Two Pointer Approach for Sorted Arrays
// Time Complexity => O(n)
// Best Case => O(1)
// Average Case and Worst Case => O(n)
// Space Complexity => O(1)

#include <iostream>
using namespace std;
int main()
{   
    int n = 5;
    int arr[n]= {2,3,6,7,11}; //sprted array
    int target = 9;
    int left = 0, right = n-1;
    bool is_found = false;
    while (left < right) //O(n) => runs atmost n-1 times
    {
        int sum = arr[left] + arr[right];
        if(sum == target)
        {
            cout << "Index 1:" << left+1 << endl;
            cout << "Index 2:" << right+1 << endl;
            is_found = true;
            break;
        }
        else if(sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }
    if (!is_found)
    {
        cout << "No Two Sum Found!!!" << endl;
    }

    return 0;



}