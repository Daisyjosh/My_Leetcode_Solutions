// Leetcode 345 Reverse Vowels of a String

// Pattern: Two pointer

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
#include <string>
using namespace std;

bool IsVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

string reverse_vowels(string s)
{
    int left = 0;
    int right = s.size()-1;
    while(left < right)
    {
        if(!IsVowel(s[left]))
        {
            left++;
        }
        else if(!IsVowel(s[right]))
        {
            right--;
        }
        else{
            swap(s[left],s[right]);
            left++;
            right--;
        }

    }
    return s;
}

int main()
{
    string s = "IceCreAm";
    string result = reverse_vowels(s);
    cout << result << endl;
    return 0;
}