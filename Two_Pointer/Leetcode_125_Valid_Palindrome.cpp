// Leetcode 125 Valid Palindrome

// Pattern: Two pointer

// Difficulty Level: Easy

// Time Complexity: O(n)
// Best, Worst and Average Case: O(n)

// Space Complexity: O(1)

#include <iostream>
#include <string>
using namespace std;

bool isValidPalindrome(string s)
{
    int left = 0;
    int right = s.length() - 1;
    while(left < right)
    {
        while(left < right && !isalnum(s[right]))
        {
            right--;
        }
        while(left < right && !isalnum(s[left]))    
        {
            left++;
        }
        if(tolower(s[left]) != tolower(s[right]))
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string s = "Malayalam, Malayalam, Malayalam!!";
    bool result = isValidPalindrome(s);
    cout << result << endl;
    return 0;
}