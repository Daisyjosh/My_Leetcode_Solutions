// Leetcode 1456 - Maximum Number of Vowels in a substring of Given length

// Technique Used: Sliding Window

// Time Complexity: O(n)
// Best Case, Worst Case, Average Case: O(n)

// Space Complexity: O(1)

#include <iostream>
#include <string>
using namespace std;

bool isVowel(char ch)
{
    ch = tolower(ch);
    return (ch == 'a' || ch== 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    
}

int MaxVowels(string s, int k)
{
    int MaxVowels = 0, WindowVowels = 0;

    for(int i = 0; i < k; i++)
    {
        if(isVowel(s[i])) WindowVowels++;
    }
    MaxVowels = WindowVowels;

    for(int i = k; i < s.length(); i++)
    {
        if(isVowel(s[i])) WindowVowels++;

        if(isVowel(s[i-k])) WindowVowels--;

        if (WindowVowels > MaxVowels) MaxVowels = WindowVowels;
        
    }
    return MaxVowels;
}

int main()
{
    string s = "abciiidef";
    int k = 3;
    int result = MaxVowels(s,k);
    cout << result << endl;
    return 0;
}