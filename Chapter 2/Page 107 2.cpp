/*
Task: Largest Subset Containing Consecutive Integers
In an array of integers, find the largest subset of elements that can be arranged in a sequence of consecutive integers. For example, for the array 4, 8, 1, −6, 9, 5, −9, 10, −1, 3, 0, 1, 2, the output should be −1, 0, 1, 2, 3, 4, 5. If there are multiple such subsets, display the first one (the one with the smallest numbers).

Input: The first line of the standard input contains the number of array elements, n (1 ≤ n ≤ 50000), and then the next n lines contain the integer elements of the array −100000 ≤ ai ≤ 100000.

Output: The largest subset of consecutive integers (elements of the given array) arranged in non-decreasing order.

Example:
Input
13
4 8 1 -6 9 5 -9 10 -1 3 0 1 2
Output
-1
0
1
2
3
4
5
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    int max_len = 0, len = 1, start = 0, max_start = 0;
    for (int i = 1; i < a.size(); i++) {
        if (a[i] == a[i-1] + 1) {
            len++;
        } else {
            if (len > max_len) {
                max_len = len;
                max_start = start;
            }
            len = 1;
            start = i;
        }
    }
    if (len > max_len) {
        max_len = len;
        max_start = start;
    }

    for (int i = max_start; i < max_start + max_len; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
