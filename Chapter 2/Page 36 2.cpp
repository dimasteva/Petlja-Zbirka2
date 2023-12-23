/*
Task: Maximum Segment Sum
Write a program that determines the maximum sum of a segment (subarray of consecutive elements) of a given array.

Input: Enter the number n (1 ≤ n ≤ 50,000) from the standard input, followed by n integers between -10 and 10, with each number on a separate line.

Output: Print the requested sum to the standard output.

Example:
Input
6
2
-3
4
-1
3
-2
Output
6
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

int sol()
{
    int n; cin >> n;
    int mx = 0, sum = 0;
    forn(i, n)
    {
        int c;
        cin >> c;
        sum += c;
        if (sum < 0)
            sum = 0;
        else
        {
            mx = max(sum, mx);
        }
    }
    return mx;
}

int main()
{
    cout << sol() << endl;
}
