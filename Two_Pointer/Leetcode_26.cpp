// Remove Duplicates from Sorted Array
// Return the length of the array after removing the duplicate elements
// Time Complexity => O(n)
// Best Case => O(1)
// Average and Worst Case => O(n)
// Space Complexity => O(1)

#include <iostream>
using namespace std;
int main()
{
    int n = 3;
    int arr[n] = {1,1,2};
    int i = 0;
    for(int j = 0; j < n; j++)
    {
        if(arr[i]!=arr[j])
        {
            arr[i+1] = arr[j];
            i++;
        }

    }
    cout << "Length of the Array After Removing Duplicate Elements: " << i+1 << endl;
    return 0;
}