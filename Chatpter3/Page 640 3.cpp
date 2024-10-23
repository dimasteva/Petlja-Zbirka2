/*
Task: Frequency Stack  
The program performs two types of operations with a data structure somewhat similar to a stack.  
• Operation `0 x` places element `x` on top of the stack.  
• Operation `1` removes the most frequent element among all the elements currently in the stack. If there are multiple such elements, the one that was added most recently is removed. For example, if the stack contains the elements `1 2 2 1 3`, element `1` is removed, and the stack becomes `1 2 2 3`.  
Input: The input begins with the number of operations `n` (1 ≤ n ≤ 10⁵), followed by `n` operations (each on a separate line).  
Output: The output describes the result of the operations.  
Example  
Input  
12  
0 1  
0 2  
0 2  
0 1  
0 3  
0 2  
1  
1  
1  
1  
1  
1  
Output  
2  
1  
2  
3  
2  
1
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
    map<int, int> freq;
    map<int, stack<int>> st;
    int mxfreq = 0;
    forn(i, n)
    {
    	int bin; cin >> bin;
    	if (bin == 0)
    	{
    		int num; cin >> num;
    		freq[num]++;
    		st[freq[num]].push(num);
    		mxfreq = max(mxfreq, freq[num]);
		} else
		{
			freq[st[mxfreq].top()]--;
			cout << st[mxfreq].top() << endl;
			st[mxfreq].pop();
			if (st[mxfreq].empty())
				mxfreq--;
		}
	}
}
