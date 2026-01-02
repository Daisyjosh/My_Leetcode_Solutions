// Leetcode Longest Repeating Character Replacement

// Pattern: Variable Sliding Window

// Time Complexity: O(n)
// Best, Worst and Average Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
#include <vector>
#include <string>
using namespace std;

int characterReplacement(string s, int k)
{
    vector<int> freq(26,0);
    int left = 0, maxlen = 0;
    int maxfreq = 0;

    for(int right = 0; right < s.length();right++)
    {
        freq[s[right]-'A']++;
        maxfreq = max(maxfreq,freq[s[right]-'A']);
      
    

        while((right-left+1)-maxfreq > k)
        {
            freq[s[left]-'A']++;
            left++;
        }
        maxlen = max(maxlen,right-left+1);
    }
    return maxlen;
    
}

int main()
{
    string s = "ABAB";
    int k = 2;
    int result = characterReplacement(s,k);
    cout << result << endl;
    return 0;
}