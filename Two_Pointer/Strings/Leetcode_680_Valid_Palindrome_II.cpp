// Leetcode 680 Valid Palindrome II

// Pattern: Two Pointer

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(1)

// We are using Two Pointer inside a two pointer approach.
// To find after deleting one string whether the string is palindrome we use two pointer approach.
// And the Major part also holds Two pointer approach.
// We should delete only one letter, so isPalindrome runs only once.
// Hence the Time Complexity stays linear even after using another loop inside function IsPalindrome.
// This is because of the constraint we can only delete one letter from the given string.

#include <iostream>
#include <string>
using namespace std;

bool IsPalindrome(string s, int left, int right)
{
    while(left < right)
    {
        if(s[left] != s[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

bool ValidPalindrome(string s)
{
    int left = 0;
    int right = s.size()-1;
    while(left < right)
    {
        if(s[left] == s[right])
        {
            left++;
            right--;
        }
        else
        {
            return IsPalindrome(s,left+1,right) || IsPalindrome(s,left,right-1);
        }
    }
    return true;
}

int main()
{
    string s = "abca";
    bool result = ValidPalindrome(s);
    cout << result << endl;
    return 0;
}