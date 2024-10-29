/*
Task: Shortest Segment with Sum at Least K
A financial company trades on the stock exchange for n days. Its earnings for each day are known (it can be negative if the company traded unfavorably that day). Determine the minimum number of consecutive days in which the sum of the company's earnings is at least k.

Input: The standard input includes an integer k (1 ≤ k ≤ 105), followed by the number of days n (1 ≤ n ≤ 105). In the next line, enter the earnings for each of the n days (integers between -2000 and 2000).

Output: Print to the standard output the requested minimum number of days, or - if the company has never achieved a cumulative earning of k during those n days.

Example 1:
Input
15
10
1 -2 3 4 5 4 3 2 -1 2
Output
4
Explanation: A total earnings of 15 is achieved, for example, on the days with earnings 3, 4, 5, 4.

Example 2:
Input
13
10
1 -2 3 4 5 4 3 2 -1 2
Output
3
Explanation: A total earnings of 13 is achieved, for example, on the days with earnings 4, 5, 4.

Example 3:
Input
30
10
1 -2 3 4 5 4 3 2 -1 2
Output
-
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
    int k, n; cin >> k >> n;
    ll sum = 0;
    int cnt = INT_MAX;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> sums;
	
	sums.emplace(0, 0);
	forn(i, n)
	{
		int x; cin >> x;
		sum += x;
		while(!sums.empty() && sum - sums.top().first >= k)
		{
			cnt = min(cnt, i - sums.top().second + 1);
			sums.pop();
		}
		
		sums.emplace(sum, i+1);
	}
	if (cnt == INT_MAX)
		cout << "-";
	else
		cout << cnt;
}
