/*
Task: Stack and Maximums  
A boy is stacking plates one on top of the other. The plates can have different radii. In each step, he can either add a new plate to the top of the stack, remove the plate from the top (if the stack is non-empty), or ask what the radius of the largest plate in the stack is.  
Input: The input consists of a number `n` (1 ≤ n ≤ 10⁵), followed by `n` queries:  
• A query of the form `0 r` means a new plate with radius `r` (r is a natural number less than 10⁹) is added to the top of the stack.  
• A query of the form `1` means the plate is removed from the top of the stack (this query will never be asked if the stack is empty).  
• A query of the form `2` means to output the radius of the largest plate currently in the stack (this query will never be asked if the stack is empty).  
Output: Print the results of all queries of type `2`.  
Example  
Input  
10  
0 1  
0 3  
0 2  
2  
1  
0 4  
2  
1  
1  
2  
Output  
3  
4  
1  
Explanation  
At the beginning, plates with radii 1, 3, and 2 are added, and the stack contains `1 3 2`. The maximum at that point is `3`. Then, the plate is removed from the top, and the stack becomes `1 3`. A plate with radius `4` is added, making the stack `1 3 4`.
The maximum then is `4`. After that, plates with radii 3 and 4 are removed, leaving only the plate with radius `1` (the stack contains `1`). The maximum at that point is `1`.
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
    stack<int> st;
    map<int, int> mx;
    int operations = 0;
    mx[operations] = 0;
    forn(i, n)
    {
    	int op; cin >> op;
    	if (op == 0)
    	{
    		int num; cin >> num;
    		st.push(num);
    		operations++;
    		mx[operations] = max(mx[operations-1], num);
		} else if (op == 1)
		{
			int x = st.top();
			st.pop();
			mx[operations] = 0;
			operations--;
		} else
		{
			cout << mx[operations] << endl;
		}
	}
}
