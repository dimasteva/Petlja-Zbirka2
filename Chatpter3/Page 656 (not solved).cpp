/*
Task: Powers of Natural Numbers  
Consider a series of numbers that are powers of natural numbers (with the base and exponent strictly greater than 1), sorted in ascending order. Its initial part is as follows: a₀ = 4 = 2², a₁ = 8 = 2³, a₂ = 9 = 3², a₃ = 16 = 4² = 2⁴, a₄ = 25 = 5², a₅ = 27 = 3³, a₆ = 32 = 2⁵, and so on. Write a program that determines the element aₖ.  
Input: The number k (1 ≤ k ≤ 10⁶) is read from standard input.  
Output: Print the element aₖ on standard output.  
Example 1  
Input  
6  
Output  
32  
Example 2  
Input  
1000000  
Output  
979850535876
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
    priority_queue<ll, vector<ll>, greater<ll>> pq;
    unordered_set<ll> visited;
    ll limit = pow(10, 12);
    ll maxBase = sqrt(limit) + 1;
    for(ll base = 2; base <= maxBase; base++)
    {
    	ll value = base * base;
    	while(value <= limit)
    	{
    		if (visited.find(value) == visited.end())
    		{
    			pq.push(value);
    			visited.insert(value);
			}
			value *= base;
		}
	}
    forn(i, k)
    	pq.pop();
	
	cout << pq.top();
}
