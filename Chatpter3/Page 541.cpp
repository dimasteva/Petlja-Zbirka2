/*
Task: Digital Counter
A 2n-digit digital counter, which counts from 000...000 to 999...999, emits a sound signal every time the sum of the first n digits is equal to the sum of the last n digits. For example, for a six-digit digital counter, the sound signal is emitted for 000000, 001001, 001010, ..., 999999. Write a program that will determine how many times the sound signal will be emitted.

Input:
The first line of the input contains a natural number n (1 ≤ n ≤ 5).

Output:
On the output, print how many 2n-digit numbers have the required property.

Example
Input:
3

Output:
55252
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

ll countWays(int pos, int sum, vector<vector<ll>>& dp)
{
	if (pos == 0)
	{
		return sum == 0? 1 : 0;
	}
	if (dp[pos][sum] != -1)
		return dp[pos][sum];
	
	ll cnt = 0;
	for (int i = 0; i <= 9; i++)
	{
		if (sum - i >= 0)
			cnt += countWays(pos - 1, sum - i, dp);
	}
	return dp[pos][sum] = cnt;
}

int main()
{
	int n; cin >> n;
	int mx = 9 * n;
	vector<ll> ways(mx + 1);
	vector<vector<ll>> dp(n + 1, vector<ll>(mx + 1, -1));
	for (int i = 0; i <= mx; i++)
	{
		ways[i] += countWays(n, i, dp);
	}
	ll sol = 0;
	for (int i = 0; i <= mx; i++)
	{
		sol += ways[i] * ways[i];
	}
	cout << sol << endl;
}
