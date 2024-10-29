/*
Task: Property 132  
A sequence a0, a1, ..., an-1 satisfies the 132-property if there exists a triple of indices 0 ≤ i < j < k < n such that ai < ak < aj. Write a program that checks whether a sequence satisfies the 132-property.  

Input: The first line contains the number of elements n in the sequence (3 ≤ n ≤ 10^5), followed by n elements of the sequence (space-separated).  

Output: Print `yes` or `no` depending on whether the sequence satisfies the 132-property or not.  

Example 1  
Input  
4  
1 2 3 4  

Output  
no  

Example 2  
Input  
4  
3 1 4 2  

Output  
yes  

Explanation:  
For example, the elements 3, 4, 2 satisfy the 132-property.  

Example 3  
Input  
7  
9 11 8 9 10 7 9  

Output  
yes  

Explanation:  
For example, the elements 9, 11, 7 satisfy the 132-property.
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
    vector<int> mn(n);
    mn[0] = a[0];
    forn1(i, n)
    	mn[i] = min(mn[i-1], a[i]);
    priority_queue<int, vector<int>, greater<int>> right;
    right.push(a[n-1]);
    
    for (int i = n - 2; i > 0; i--)
    {
    	int ai = mn[i-1], aj = a[i];
    	
    	if (ai + 1 >= aj)
    		continue;
    	
    	while(!right.empty() && right.top() <= ai)
    		right.pop();
    	
    	if (!right.empty() && right.top() < aj)
    	{
    		cout << "da" << endl;
    		return 0;
		}
    	
		right.push(a[i]);
	}
	cout << "ne" << endl;
}
