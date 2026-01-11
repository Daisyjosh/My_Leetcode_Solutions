// Leetcode 1342 Number of Steps to Reduce a Number to Zero

// Time Complexity: O(log n)
// Best, Average and Worst Cases: O(log n)

// Space Complexity: O(1)

#include <iostream>
using namespace std;

int numberOfSteps(int num) {
    int count = 0;
    while(num != 0)
    {
        if(num % 2 == 0)
        {
            num /= 2;
            count += 1;
        }
        else
        {
            num -= 1;
            count += 1;
            
        }
    }
    return count;
}

int main()
{
    int num = 14;
    cout << numberOfSteps(num) << endl;
    return 0;
}