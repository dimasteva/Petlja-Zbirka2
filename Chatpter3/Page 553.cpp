/*
Task: Primitive Binary Sequences

Binary sequences consist only of zeros and ones. A binary sequence is considered primitive if it cannot be represented as a concatenation of several copies of a shorter binary sequence (for example, the sequence 111 is not primitive because it consists of three copies of the sequence 1, the sequence 101101 is not primitive because it consists of two copies of the sequence 101, while the sequence 11001 is primitive). Write a program that determines the number of distinct primitive sequences of a given length.

Input: The input consists of an integer n (1 ≤ n ≤ 60), which represents the length of the binary sequence.

Output: Output a single number representing the number of distinct primitive binary sequences of length n (for the given constraint on n, this number does not exceed the range of a 64-bit integer).

Example 1
Input:
4
Output:
12

Example 2
Input:
10
Output:
990

Example 3
Input:
50
Output:
1125899873287200
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

ll rec(int n)
{
	vector<ll> dp(n + 1);
	dp[1] = 2;
	for (int i = 2; i <= n; i++)
	{
		ll sum = 2;
		int j = 2;
		for (; j * j < i; j++)
		{
			if (i % j == 0)
				sum += dp[j] + dp[i / j];
		}
		if (j * j == i)
			sum += dp[j];
		dp[i] = (1ll << i) - sum;
	}
	return dp[n];
}

int main()
{
	int n; cin >> n;
	cout << rec(n);
}
