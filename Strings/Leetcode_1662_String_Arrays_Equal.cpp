// Leetcode Check if Two String Arrays are Equivalent

// Time Complexity: O(n+m)
// Best, Average and Worst Cases: O(n+m)

// Space Complexity: O(n+m)

#include <iostream>
#include <string>
#include <vector>
using namespace std;

 bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string res1 = "";
    string res2 = "";
    for(string ch: word1)
    {
        res1+=ch;
    }
    for(string ch: word2)
    {
        res2+=ch;
    }
    return (res1==res2);
}

int main()
{
    vector<string> word1 = {"ab","c"};
    vector<string> word2 = {"a","bc"};
    cout << arrayStringsAreEqual(word1,word2) << endl;
    return 0;
}