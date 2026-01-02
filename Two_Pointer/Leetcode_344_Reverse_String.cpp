// Leetcode 344 Reverse String

// Pattern: Two Pointer 
// Difficulty Level: Easy

// Time Complexity: O(n)
// Best, Worst and Average Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
#include <string>
using namespace std;

void ReverseString(string s)
{
    int left = 0;
    int right = s.length() - 1;
    while(left < right)
    {
        swap(s[left],s[right]);
        left++;
        right--;
    }
}

int main()
{
    string s = "hello";
    ReverseString(s);
    cout << s << endl;
    return 0;
}