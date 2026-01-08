// Leetcode 917 Reverse Only Letters

// Pattern: Two Pointer

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
#include <string>
using namespace std;

bool IsLetter(char ch)
{
    return((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122));
}

string ReverseLetters(string s)
{
    int left = 0;
    int right = s.size()-1;
    while(left < right)
    {
        if(!IsLetter(s[left]))
        {
            left++;
        }
        else if(!IsLetter(s[right]))
        {
            right--;
        }
        else
        {
            swap(s[left],s[right]);
            left++;
            right--;
        }
    }
    return s;
}

int main()
{
    string s = "ab-cs";
    string result = ReverseLetters(s);
    cout << result << endl;
    return 0;
}