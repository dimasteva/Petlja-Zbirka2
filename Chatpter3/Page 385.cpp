/*
Task: Next Combination

Combinations of length k from n elements involve selecting k elements from the set {1, . . . , n}, similar to how, for example, in the game of lotto, 7 out of 39 balls are chosen. Write a program that, given a combination, determines the next one in lexicographical order.

Input: Read from the standard input the number n (2 ≤ n ≤ 100), and then in the next line, read one combination of length 1 ≤ k ≤ n. The elements are given in sorted ascending order, separated by a single space.

Output: Print to the standard output the combination that is next in lexicographical order relative to the given one, or "-" if such a combination does not exist.

Example 1
Input
5
1 3 4
Output
1 3 5

Example 2
Input
5
1 3 5
Output
1 4 5

Example 3
Input
5
3 4 5
Output
-
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
    vector<int> a;
    int c;
    while(cin >> c)
        a.pb(c);
    if (a.back() < n)
    {
        a.back()++;
        forn(i, a.size())
            cout << a[i] << " ";
        return 0;
    }
    for (int i = a.size() - 2; i >= 0; i--)
    {
        if (a[i + 1] - a[i] != 1)
        {
            a[i]++;
            for (int j = i + 1; j < a.size(); j++)
            {
                if (a[j] - a[i] > 1)
                    a[j]--;
                else
                    break;
            }
            forn(i, a.size())
                cout << a[i] << " ";
            return 0;
        }
    }
    cout << "-";
}
