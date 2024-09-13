/*
Task: Longest Increasing Subsequence

Write a program that determines the longest strictly increasing subsequence (not necessarily consecutive elements) within a given sequence.

Input: From the standard input, read the number of elements in the sequence n (1 ≤ n ≤ 50000), followed by the elements of the sequence (integers, each on a separate line).

Output: Print the length of the longest increasing subsequence.

Example

Input:
10
3
2
6
9
5
4
3
7
2
8

Output:
4

Explanation
One increasing subsequence of length 4 is 2 6 7 8.
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

ll solve()
{
	int n; cin >> n;
	vector<int> a(n);
	for (int &x : a)
		cin >> x;
	
	int mx = 0;
	vector<int> dp(n);
	for (int i = 0; i < n; i++)
	{
		auto it = lower_bound(begin(dp), next(begin(dp), mx), a[i]);
		*it = a[i];
		int dis = distance(begin(dp), it);
		if (dis + 1 > mx)
			mx = dis+1;
	}
	return mx;
}

int main()
{
	FIO
    cout << solve();
}
