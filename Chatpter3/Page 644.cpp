/*
Task: Last k Lines  
Write a program that prints the last `k` lines read from standard input.  
Input: The input begins with a number `k` (1 ≤ k ≤ 100), followed by one line of text at a time (with a maximum of 10⁶ lines).  
Output: Print the last `k` lines to standard output (it is assumed that at least `k` lines are always read).  
Example  
Input  
2  
ispisati  
poslednjih k  
linija  
Output  
poslednjih k  
linija  
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
    int k; cin >> k;
    queue<string> q;
    string s;
    while(getline(cin, s))
    {
    	if (q.size() == k)
    		q.pop();
    	q.push(s);
	}
	while(!q.empty())
	{
		cout << q.front() << endl;
		q.pop();
	}
}
