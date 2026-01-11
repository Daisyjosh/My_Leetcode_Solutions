// Leetcode 258 Add Digits

// Time Complexity: O(log n)
// Best, Average and Worst Cases: O(log n)

// Space Complexity: O(log n)


#include <iostream>
#include <string>
using namespace std;

int addDigits(int num) {
    while (num >= 10) {   
        string val = to_string(num);
        int add = 0;

        for (char c : val) {
            add += (c - '0');   
        }

        num = add;
    }
    return num;
}

int main()
{
    int num = 38;
    cout << addDigits(num) << endl;
    return 0;
}