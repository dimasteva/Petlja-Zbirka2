/*
Task: Optimal Service
The planned distances that a driver needs to cover with a truck over the next n days are given. Element a0 represents the planned distance for the first of the n days, a1 for the second day, and so on. It is necessary to perform truck servicing in a way that the total sums of covered distances before and after servicing differ minimally. Servicing is done at the end of each working day. If there are two days with the same minimum difference, servicing is done on the earlier day. Write a program that determines on which day the servicing should be performed.

Input: The first line of the standard input contains a natural number n (1 < n ≤ 50000). The next n lines contain one natural number each (between 1 and 1000), representing the planned distances sequentially for each day.

Output: Print on the standard output, in a single line, the ordinal number of the day after which the servicing should be done.

Example:
Input
5
100
120
50
150
70
Output
1
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
    
int main()
{
	int n; cin >> n;
	ll sum = 0;
	vector <int> a(n);
	for (int &x : a)
	{
		cin >> x;
		sum += x;
	}
	ll km = 0;
	int sol = -1;
	int mn = INT_MAX;
	forn(i, n)
	{
		km += a[i];
		ll res = abs(km - (sum - km));
		if (res < mn)
		{
			sol = i;
			mn = res;
		}
	}
	cout << sol << endl;
}
