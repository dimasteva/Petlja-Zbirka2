/*
Task: Zero Padding for Maximum Scalar Product
You are given two arrays a and b of natural numbers with sizes n and m, respectively, where n ≥ m. It is necessary to add n−m zeros at arbitrary positions in array b so that the scalar product (the sum of products a_i · b_i, for 0 ≤ i < n) of this vector and vector a has the maximum value. Write a program to determine the maximum value of the required scalar product.

Input:
The first line of the standard input contains a natural number n (n ≤ 100), the next line contains n natural numbers separated by spaces representing the elements of array a in order. Then, the standard input contains a natural number m (m < n) in one line, and in the next line contains m natural numbers separated by spaces representing the elements of array b in order.

Output:
On the standard output, display the maximum value of the required scalar product in one line.

Example:

Input:
5
2 3 1 7 8
3
7 3 6

Output:
90

Explanation:
The maximum scalar product is achieved for the array b = [0, 7, 0, 3, 6].
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

ll rec(vector<int>& a, vector<int>& b, int n, int m)
{
	vector<vector<ll>> dp(n+1, vector<ll>(m+1, 0));
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			dp[i][j] = max(dp[i-1][j], dp[i-1][j-1] + a[i-1]*b[j-1]);
		}
	}
	return dp[n][m];
}

int main()
{
	FIO
	int n; cin >> n;
	vector<int> a(n);
	for (int& x : a)
		cin >> x;
	int m; cin >> m;
	vector<int> b(m);
	for (int& x : b)
		cin >> x;
	
	cout << rec(a, b, n, m);
}
