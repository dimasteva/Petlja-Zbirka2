/*
Task: Sorting Numbers  
Write a program that sorts an array of numbers in non-decreasing order (each subsequent number must be greater than or equal to the previous one).  
Input: The standard input takes an integer n (1 ≤ n ≤ 5 · 10⁴), followed by n natural numbers, each less than 2n, each on a separate line.  
Output: Print the sorted numbers in non-decreasing order to the standard output.  
Example  
Input  
5  
3  
1  
6  
8  
1  
Output  
1  
1  
3  
6  
8  
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
    priority_queue<int, vector<int>, greater<int>> q;
    forn(i, n)
    {
    	int x; cin >> x;
    	q.push(x);
	}
	while(!q.empty())
	{
		cout << q.top() << endl;
		q.pop();
	}
    
}
