/*
Task: Largest Rectangle in Histogram  
Write a program that determines the area of the largest rectangle that can be inscribed in a given histogram (the histogram consists of bars of width 1).  
Input: The number of bars, `n` (1 ≤ n ≤ 50,000), is provided on standard input, followed by the heights of the bars (positive integers separated by spaces).  
Output: Print the required area on the standard output.  
Example  
Input  
6  
3 7 4 6 5 8  
Output  
20
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
    
    stack<int> indices;
    ll maxArea = 0;
    
    forn(i, n)
    {
    	while(!indices.empty() && a[indices.top()] > a[i])
    	{
    		int height = a[indices.top()];
    		indices.pop();
    		int width = indices.empty() ? i : i - indices.top() - 1;
    		maxArea = max(maxArea, (ll)height * width);
		}
		indices.push(i);
	}
	while(!indices.empty())
	{
		int height = a[indices.top()];
		indices.pop();
		int width = indices.empty() ? n : n - indices.top() - 1;
		maxArea = max(maxArea, (ll)height * width);
	}
	cout << maxArea << endl;
}
