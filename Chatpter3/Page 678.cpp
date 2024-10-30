/*
Task: Nearest Greater Predecessor  
A sequence of building heights along a street is known. Spider-Man wants to set up a horizontal rope on each building that will lead him to some previous building. The rope can be attached anywhere on the building (except on the roof). For each building, the height of the previous building that the horizontal rope will lead to must be printed (the first building to the left of the current one that is strictly taller than the current one).  
Input: The number of buildings \( n \) (1 ≤ \( n \) ≤ 50000) is entered from standard input, followed by \( n \) heights of buildings separated by spaces.  
Output: Print the required sequence of building heights separated by spaces to standard output. If there is no strictly taller building in front of a building, print - .  
Example  
Input  
7  
2 7 2 4 1 3 6  
Output  
- - 7 7 4 4 7  
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
    forn(i, n)
    {
    	int x; cin >> x;
    	while(!s.empty() && s.top() <= x)
    		s.pop();
    	if (s.empty())
    		cout << "- ";
    	else
    		cout << s.top() << " ";
    	s.push(x);
	}
}
