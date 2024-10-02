/*
Task: Subset with maximum sum divisible by k

You are given a set S consisting of n distinct natural numbers. Write a program that finds the maximum sum of a subset A of the set S such that the sum is divisible by k.

Input: The first line of the standard input contains a natural number n (n ≤ 105). Each of the following n lines contains one element of the set, a natural number not greater than 200. The last line contains a natural number k (2 ≤ k ≤ 100).

Output: On the standard output, print the maximum sum of a subset that is divisible by k in one line. If no such subset exists, print 0.

Example

Input
4
10
2
7
6
3

Output
18
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int rec(vector<int>& a, int k)
{
	vector<int> dp(k, INT_MIN);
	dp[0] = 0;
	for (int i = 0; i < a.size(); i++)
	{
		vector<int> nw = dp;
		for (int r = 0; r < k; r++)
		{
			if (dp[r] != INT_MIN)
			{
				int new_r = (r + a[i]) % k;
				nw[new_r] = max(nw[new_r], dp[r] + a[i]);
			}
		}
		dp.swap(nw);
	}
	return dp[0];
}

int main() {
    int n; cin >> n;
    vector<int> s(n);
    for (int i = 0; i < n; ++i)
	{
        cin >> s[i];
    }
    int k; cin >> k;

    int result = rec(s, k);
    cout << result << endl;

    return 0;
}
