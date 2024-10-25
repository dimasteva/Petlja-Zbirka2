/*
Task: Sum of Squares  
Arrange all pairs of natural numbers (a, b), where 0 ≤ a ≤ b, in order according to the value of their squares (if two pairs have the same sum of squares, order them by the value of the first number a). The series of elements begins as follows:  
0² + 0² = 0  
0² + 1² = 1  
1² + 1² = 2  
0² + 2² = 4  
1² + 2² = 5  
2² + 2² = 8  
...  
Some elements of the series repeat (for example, 0² + 5² = 25, 3² + 4² = 25).  
Write a program that determines the k-th element of this series (counting starts from 0).  
Input: The first line reads the number n (1 ≤ n ≤ 10^4), meaning that only pairs (a, b) are considered for which 0 ≤ a ≤ b ≤ n, followed by a second line with the number k (which is greater than or equal to 0 and strictly less than the number of elements in the list).  
Output: Print the element of the described series of sums of squares at position k (positions are counted from zero) – print the numbers a, b, and a² + b², separated by a single space.  
Example 1  
Input  
2  
5  
Output  
2 2 8  
Example 2  
Input  
10  
15  
Output  
1 5 26
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

ll qsum(int a, int b)
{
  return (ll)a * a + (ll)b * b;
}

int main()
{
    FIO;
    int n, k; cin >> n >> k;
    priority_queue<tuple<ll, int, int>, vector<tuple<ll, int, int>>, greater<tuple<ll, int, int>>> pq;
    forn(i, n+1)
    	pq.emplace(qsum(0, i), 0, i);
    
    forn(i, k)
    {
    	int a, b;
    	ll sum;
    	tie(sum, a, b) = pq.top();
    	pq.pop();
    	if (a < b)
    		pq.emplace(qsum(a+1, b), a+1, b);
	}
	
	int a, b;
	ll sum;
	tie(sum, a, b) = pq.top();
	cout << a << " " << b << " " << sum << endl;
}
