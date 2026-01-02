// Move Zeros
// Time Complexity => O(n)
// Best Case => O(1)
// Average case and Worst case => O(n)
// Space Complexity => O(1)

#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int arr[n] = {0,1,0,3,12};
    int i = 0;
    for(int j = 0; j < n; j++)
    {
        if(arr[j]!=0)
        {
            swap(arr[i],arr[j]);
            i++;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}