/*
Task: Largest Square in Histogram  
Write a program that determines the area of the largest square that can be inscribed in a given histogram (the histogram consists of columns with a width of 1).  
Input: The standard input provides the number of columns `n` (1 ≤ n ≤ 50000), followed by the heights of the columns (positive integers less than 10^5, separated by spaces).  
Output: Print the required area to the standard output.  

Example:  
Input  
5  
1 5 4 4 2  
Output  
9
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
    ll maxArea = 1;
    
    forn(i, n)
    {
    	while(!indices.empty() && a[indices.top()] > a[i])
    	{
    		int height = a[indices.top()];
    		indices.pop();
    		int width = indices.empty() ? i : i - indices.top() - 1;
    		int side = min(width, height);
			maxArea = max(maxArea, (ll)side * side);
		}
		indices.push(i);
	}
	while(!indices.empty())
	{
		int height = a[indices.top()];
		indices.pop();
		int width = indices.empty() ? n : n - indices.top() - 1;
		int side = min(width, height);
		maxArea = max(maxArea, (ll)side * side);
	}
	cout << maxArea << endl;
}
