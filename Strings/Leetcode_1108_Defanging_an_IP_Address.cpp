// Leetcode 1108 Defanging an IP Address

// Time Complexity: O(n+m)
// Best, Average and Worst Cases: O(n+m)

// Space Complexity: O(n+m)

#include <iostream>
#include <string>
using namespace std;

string defangIPaddr(string address) {
    string res = "";
    for(char ch: address)
    {
        if (ch == '.')
        {
            res += "[.]";
        }
        else
        {
            res += ch;
        }
    }
    return res;
}

int main()
{
    string address = "1.1.1.1";
    cout << defangIPaddr(address) << endl;
    return 0;
}

