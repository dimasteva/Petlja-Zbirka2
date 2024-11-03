/*
Task: Sum of Minimums  
Write a program that determines the sum of the minimums of all non-empty subarrays of a given array of integers.  
Input: The standard input provides the number `n` (1 ≤ n ≤ 10^5), followed by `n` elements of the array (numbers between 0 and 10^5, each separated by a space).  
Output: Since the sum can be large, print its remainder when divided by one billion and seven (10^9 + 7) to the standard output.

Example 1:  
Input  
3  
1 3 2  
Output  
10  
Explanation  
The non-empty subarrays are [1], [1, 3], [1, 3, 2], [3], [3, 2], and [2]. Their minimums are 1, 1, 1, 3, 2, and 2, respectively, and the sum of these minimums is 10.

Example 2:  
Input  
7  
4 3 2 1 2 3 4  
Output  
48  

Example 3:  
Input  
7  
1 2 3 3 3 2 1  
Output  
49
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
    vector<int> a(n);
    forn(i, n)
    	cin >> a[i];
    
    vector<int> right(n), left(n);
    
    stack<int> s;
    forn(i, n)
    {
    	while(!s.empty() && a[s.top()] > a[i])
    	{
    		s.pop();
		}
		left[i] = s.empty() ? i + 1 : i - s.top();
		s.push(i);
	}
	while(!s.empty())
		s.pop();
	
	for (int i = n - 1; i >= 0; i--)
	{
		while(!s.empty() && a[s.top()] >= a[i])
			s.pop();
		
		right[i] = s.empty() ? n - i : s.top() - i;
		s.push(i);
	}
	ll sol = 0;
	forn(i, n)
	{
		ll cnt = ll(left[i]) * right[i] % MOD;
		sol = (sol + cnt * a[i] % MOD) % MOD;
	}
	cout << sol << endl;
}
