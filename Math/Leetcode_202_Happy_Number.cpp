// Leetcode 202 Happy Number

// Time Complexity: O(log n)
// Best, Average and Worst Cases: O(log n)

// Space Complexity: O(log n)

#include <iostream>
#include <unordered_set>
using namespace std;


int next(int n) {
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d * d;
        n /= 10;
    }
    return sum;
}

bool isHappy(int n) {
    unordered_set<int> seen;

    while (n != 1) {
        if (seen.count(n)) return false; // cycle detected
        seen.insert(n);
        n = next(n);
    }
    return true;
}


int main()
{
    int n = 19;
    cout << isHappy(n) << endl;
    return 0;
}