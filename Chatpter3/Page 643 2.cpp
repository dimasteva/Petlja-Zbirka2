/*
Task: Segment with the Largest Average  
A sequence `a` of real numbers of length `n` and a natural number `k` are given. Write a program that determines the starting position of the segment (subarray of consecutive elements) of length `k` with the largest average in the sequence `a`. If multiple segments have the same average, report the last one.  
Input: The first line of the input contains the natural number `k` (k ≤ 5 · 10³). The second line contains the natural number `n` (n ≤ 5 · 10⁵). The next `n` lines each contain a real number (these numbers represent the elements of the sequence `a` in order).  
Output: Output the starting position of the last segment of length `k` in the sequence `a` with the largest average (positions in the array are numbered starting from zero).  
Example  
Input  
3  
5  
1.0  
5.0  
8.0  
2.0  
7.0  
Output  
2  
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
    int n; cin >> n;
    queue<double> q;
    double sum = 0;
    double mx = 0;
    int index = 0;
    int i = 0;
    while(i < n && i < k)
    {
    	double x; cin >> x;
    	q.push(x);
    	sum += x;
    	i++;
	}
	mx = sum;
	for(; i < n; i++)
	{
		double x; cin >> x;
		sum = sum - q.front() + x;
		q.pop();
		q.push(x);
		if (sum >= mx)
		{
			index = i - k + 1;
			mx = sum;
		}
	}
	cout << index << endl;
}
