/*
Task: Segment with the Largest Sum Divisible by the Array Length
Given an array of natural numbers, find the segment (subarray of consecutive elements) with the largest sum that is divisible by the length of the array.

Input: Read from the standard input the number n (1 ≤ n ≤ 50000), followed by n elements of the array (numbers between 1 and 100, all in the same line, separated by spaces).

Output: Print the largest sum of a segment that is divisible by the number n to the standard output.

Example:
Input
10
14 8 9 6 6 13 12 7 6 17
Output
50
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
    int n; cin >> n;
    vector <int> prefixSum(n + 1);
    prefixSum[0] = 0;
    forn(i, n)
    {
        int x; cin >> x;
        prefixSum[i + 1] = prefixSum[i] + x;
    }

    int mx = INT_MIN;
    forn(i, n + 1)
    {
        for (int j = i; j < n + 1; j++)
        {
            if ((prefixSum[j] - prefixSum[i]) % n == 0)
                mx = max(mx, prefixSum[j] - prefixSum[i]);
        }
    }
    cout << mx;
}
