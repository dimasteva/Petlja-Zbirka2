/*
Task: Number of Zig-Zag Partitions

Write a program that determines the number of partitions of a natural number n (a decomposition into addends that are positive natural numbers) such that the addends alternate between increasing and decreasing (or decreasing and then increasing).

Input: From the standard input, the number n (1 ≤ n ≤ 5000) is given, followed by the number a0 (1 ≤ a0 ≤ n), which represents the first addend in the partition.

Output: Output the number of such partitions modulo 10^9 + 7.

Example 1
Input
5
2
Output
2
Explanation
The partitions are 2 + 1 + 2 and 2 + 3.

Example 2
Input
7
3
Output
3
Explanation
The partitions are 3 + 1 + 2 + 1, 3 + 1 + 3 and 3 + 4.

Example 3
Input
1000
500
Output
562222907
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

int rec(int suma, int prvi)
{
	vector<vector<int>> raste(suma+1, vector<int>(suma+1, 0));
	vector<vector<int>> opada(suma+1, vector<int>(suma+1, 0));
	for (int z = 1; z <= suma; z++)
	{
		for (int p = 1; p < z; p++)
		{
			raste[z][p] = 0;
			for (int i = p+1; i <= z - p; i++)
				raste[z][p] = (raste[z][p] + opada[z-p][i]) % MOD;
			opada[z][p] = 0;
			for (int i = 1; i <= z - p && i <= p-1; i++)
				opada[z][p] = (opada[z][p] + raste[z-p][i]) % MOD;
		}
		raste[z][z] = opada[z][z] = 1;
	}
	return (raste[suma][prvi] + opada[suma][prvi]) % MOD;
}

int main()
{
	int n, k;
	cin >> n >> k;
	cout << rec(n, k);
}
