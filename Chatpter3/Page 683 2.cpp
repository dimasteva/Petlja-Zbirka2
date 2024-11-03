/*
Task: 132-Property  
A sequence a0, a1, . . . , an−1 satisfies the 132-property if there exists a triplet of indices 0 ≤ i < j < k < n such that ai < ak < aj. Write a program that checks whether the sequence satisfies the 132-property.  
Input: The standard input reads the number of elements in the sequence n (3 ≤ n ≤ 105), followed by n elements of the sequence (space-separated).  
Output: Print "yes" or "no" to the standard output, depending on whether the sequence satisfies the 132-property.  
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
Explanation  
For instance, the elements 3, 4, and 2 satisfy the 132-property.  
Example 3  
Input  
7  
9 11 8 9 10 7 9  
Output  
yes  
Explanation  
For instance, the elements 9, 11, and 7 satisfy the 132-property.
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
    stack<int> right;
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
