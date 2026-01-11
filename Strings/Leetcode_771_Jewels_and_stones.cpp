// Leetcode 771 Jewels and Stones

// Pattern: String Manipulation

// Time Complexity: O(j+s)
// Best, Average and Worst Cases: O(j+s)

// Space Complexity: O(j)

#include <iostream>
#include <unordered_set>
#include <string>
using namespace std;
int numJewelsInStones(string jewels, string stones) {
    unordered_set<char> jewelSet;
    
    for (char j : jewels) {
        jewelSet.insert(j);
    }

    int count = 0;
    for (char s : stones) {
        if (jewelSet.count(s)) {
            count++;
        }
    }

    return count;
}

int main()
{
    string jewels = "aaAababacab";
    string stones = "ab";
    int result = numJewelsInStones(jewels,stones);
    cout << result << endl;
    return 0;
}

