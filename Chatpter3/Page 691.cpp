/*
Task: Shortest Segment Sum at Least K  
A financial company trades on the stock market for n days. The profit for each day is known (it can be negative if the company trades unfavorably on that day). Determine the smallest number of consecutive days during which the sum of the company's profits is at least k.  
Input: The standard input contains an integer k (1 ≤ k ≤ 10^5), followed by the number of days n (1 ≤ n ≤ 10^5), and in the next line the profits for n days (integers between -2000 and 2000).  
Output: Print the required minimum number of days on standard output, or - if the company never achieved a cumulative profit of k during those n days.  
Example 1  
Input  
15  
10  
1 -2 3 4 5 4 3 2 -1 2  
Output  
4  
Explanation  
The total profit of 15 is achieved, for example, on the days where the profit was 3, 4, 5, 4.  
Example 2  
Input  
13  
10  
1 -2 3 4 5 4 3 2 -1 2  
Explanation  
The total profit of 13 is achieved, for example, on the days where the profit was 4, 5, 4.  
Output  
3  
Example 3  
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
	int k; cin >> k;
    int n; cin >> n;
    
    int mn = INT_MAX;
    deque<pair<int, int>> sums;
    
    sums.emplace_back(0, 0);
    int sum = 0;
    forn(i, n)
    {
    	int x; cin >> x;
    	sum += x;
    	
    	while(!sums.empty() && sum - sums.front().first >= k)
    	{
    		int num = i - sums.front().second + 1;
    		mn = min(mn, num);
    		
    		sums.pop_front();
		}
		
		while(!sums.empty() && sum <= sums.back().first)
			sums.pop_back();
		
		sums.emplace_back(sum, i + 1);
	}
	if (mn == INT_MAX)
		cout << "-";
	else	
		cout << mn;
}
