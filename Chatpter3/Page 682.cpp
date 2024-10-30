/*
Task: Nearest Greater Successor  
A sequence of building heights along a street is given. Spider-Man wants to place a horizontal rope on each building, which will lead him to the next building. The rope can be attached anywhere on the building (except the roof).  
For each building, output the height of the nearest next building to which a horizontal rope from the current building would lead (this is the first building to the right of the current one that has a height strictly greater than the current building's).  
Input: The number of buildings, `n` (1 ≤ n ≤ 50,000), is provided on standard input, followed by a line with `n` building heights separated by spaces.  
Output: Print the desired sequence of building heights separated by spaces. If there is no strictly taller building after a given building, print `-`.  
Example  
Input  
9  
1 3 3 5 4 2 6 1 2  
Output  
3 5 5 6 6 6 - 2 -
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
    stack<int> s;
    vector<int> a(n), sol(n, -1);
    forn(i, n)
    	cin >> a[i];
    for (int i = n - 1; i >= 0; i--)
    {
    	int x; x = a[i];
    	while(!s.empty() && s.top() <= x)
    		s.pop();
    	if (!s.empty())
    		sol[i] = s.top();
    	s.push(x);
	}
	forn(i, n)
	{
		if (i > 0) cout << " ";
		cout << (sol[i] == -1 ? "-" : to_string(sol[i])); 
	}
}
