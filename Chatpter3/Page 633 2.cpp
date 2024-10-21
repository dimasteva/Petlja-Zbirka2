/*
Task: Compressing series of consecutive identical elements
The array is transformed by removing every k or more consecutive occurrences of an element. Write a program that determines the contents of the array after exhaustively applying this transformation.
Input: Read the number k (1 ≤ k ≤ 10^4), then the number n (1 ≤ n ≤ 10^6), and finally the elements of the array separated by spaces.
Output: Print the elements of the resulting array to standard output, separated by spaces.
Example
Input
3
20
1 1 2 2 2 2 1 3 4 4 5 5 5 4 4 3 2 1 1 1
Output
3 3 2
Explanation
After removing four twos, three ones become consecutive, and they are removed. After removing three fives, four fours become consecutive, and they are removed. Finally, three consecutive ones are removed.
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define MOD 1000000007 // 998244353
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main()
{
    FIO;
    
    int k, n; 
    cin >> k >> n;
    vector<int> a(n);
    for (int& x : a)
        cin >> x;

    stack<pair<int, int>> st;

    forn(i, n)
    {
        if (!st.empty())
        {
            if (st.top().first == a[i])
                st.top().second++;
            else
            {
                while (!st.empty() && st.top().second >= k)
                {
                    st.pop();
                }
                if (!st.empty() && st.top().first == a[i])
                    st.top().second++;
                else
                    st.push({a[i], 1});
            }
        } 
        else
        {
            st.push({a[i], 1});
        }
    }

    while (!st.empty() && st.top().second >= k)
    {
        st.pop();
    }

    vector<int> result;

    while (!st.empty())
    {
        for (int j = 0; j < st.top().second; j++)
        {
            result.push_back(st.top().first);
        }
        st.pop();
    }

    reverse(all(result));
    for (int i = 0; i < result.size(); i++)
    {
        if (i > 0) cout << " ";
        cout << result[i];
    }
	cout << " ";
    return 0;
}
