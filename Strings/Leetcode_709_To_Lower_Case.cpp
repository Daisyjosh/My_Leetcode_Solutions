// Leetcode 709 To Lower Case

// Time Complexity: O(n)
// Best, Average and Worst Cases: O(n)

// Space Complexity: O(1)

#include <iostream>
#include <string>
using namespace std;


string toLowerCase(string s) 
    {
        for (char &ch : s) {
            ch = tolower(ch);
        }
        return s;
    }

int main()
{
    string s = "Hello";
    cout << toLowerCase(s) << endl;
    return 0;
}