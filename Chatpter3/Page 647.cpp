/*
Task: Prime Factors 235  
Consider a sequence of numbers whose prime factors are only 2, 3, and 5 (each factor can appear zero or more times). These numbers are 1, 2, 3, 4, 5, 6, 8, 9, 10, 12, 15, 16, 18, … Write a program that determines the n-th element of this sequence (counting starts from 0).  
Input: A number n (0 ≤ n ≤ 10000) is read from standard input.  
Output: Print the requested n-th element of the sequence to standard output.  
Example 1  
Input  
7  
Output  
9  
Example 2  
Input  
500  
Output  
944784  
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
    queue<ll> a2, a3, a5;
    a2.push(2);
    a3.push(3);
    a5.push(5);
    ll t = 1;
    forn(i, n)
    {
    	t = min({a2.front(), a3.front(), a5.front()});
    	a2.push(t * 2);
    	a3.push(t * 3);
    	a5.push(t * 5);
    	while(a2.front() == t) a2.pop();
    	while(a3.front() == t) a3.pop();
    	while(a5.front() == t) a5.pop();
	}
	cout << t << endl;
}
