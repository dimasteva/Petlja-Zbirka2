/*
Task: Sum of k Best
A student completed n tasks, and for each task, they received a certain number of points. Determine the sum of points from the k tasks the student performed best.
Input: The first line of standard input contains a natural number n (1 ≤ n ≤ 10⁶) - the number of tasks the student completed. The second line contains a natural number k (1 ≤ k ≤ n) - the number of tasks the student performed best. The following n lines contain the points received for each task.
Output: The total number of points from the k highest-scoring tasks.
Example
Input
10
3
15
80
25
60
10
20
50
45
40
30
Output
190
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
    FIO
    int n; cin >> n;
    int k; cin >> k;
    priority_queue<int, vector<int>, greater<int>> q;
    int sum = 0;
    forn(i, n)
    {
    	int x; cin >> x;
    	if (q.size() < k)
    	{
    		q.push(x);
    		sum += x;
    		continue;
		}
		
		if (x > q.top())
		{
			sum -= q.top();
			q.pop();
			q.push(x);
			sum += x;
		}
	}
    cout << sum;
}
