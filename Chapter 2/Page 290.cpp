/*
Task: Number of Segments with Different Elements
Given an array of natural numbers of length n, write a program to determine the number of segments in the array where all elements are distinct. A segment of the array consists of consecutive elements (at least 2).

Input: The first line of standard input contains a natural number n (2 ≤ n ≤ 50000), the number of elements in the array. In each of the next n lines of standard input, there is one element of the array.

Output: Display on a single line of standard output the number of segments in the given array where all elements are distinct.

Example
Input
5
1
2
2
3
6
Output
4
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int left = 0, right = 0, count = 0;
    unordered_set<int> seen;

    while(right < n) {
        while(seen.find(arr[right]) != seen.end()) {
            seen.erase(arr[left]);
            left++;
        }
        seen.insert(arr[right]);
        count += right - left;
        right++;
    }

    cout << count << endl;

    return 0;
}
