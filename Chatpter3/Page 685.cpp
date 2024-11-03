/*
Task: Max of Segments of Length k  
A sequence of integers and a natural number k are given. Write a program that displays the maximum elements of all segments of length k (a segment consists of consecutive elements of the sequence).  
Input: In the first line, there is a natural number k (0 < k ≤ n), the length of the segments. The next line contains a natural number n (2 ≤ n ≤ 50000), the number of elements in the sequence. Each of the following n lines contains one element of the sequence.  
Output: For each segment of length k, display the maximum element on standard output, each on a separate line.  
Example  
Input  
3  
7  
1  
2  
3  
1  
4  
5  
2  
Output  
3  
3  
4  
5  
5  
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
    vector<int> a(n);
    forn(i, n)
    	cin >> a[i];
    
    multiset<int> m;
    queue<int> q;
    forn(i, k)
    {
    	m.insert(a[i]);
    	q.push(a[i]);
	}
	cout << *prev(m.end()) << endl;
	for (int i = k; i < n; i++)
	{
		m.erase(m.find(q.front()));
		q.pop();
		m.insert(a[i]);
		q.push(a[i]);
		cout << *prev(m.end()) << endl;
	}
}
