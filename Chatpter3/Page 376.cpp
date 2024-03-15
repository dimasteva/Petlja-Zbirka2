/*
Task: Next Subset
Write a program that determines the subset of the set of numbers {1, . . . , n} which immediately follows the given subset in lexicographical order. Subsets are given in the form of strictly increasing sorted arrays.
Input: The first line contains the number n (1 ≤ n ≤ 100), and the next line contains the subset whose elements are given in sorted increasing order, separated by single spaces.
Output: Print to the standard output in a single line the elements of the sought subset, or "-" if the input subset is lexicographically the largest.
Example
Input
5
1 2 3 4 5
Output
1 2 3 5
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
    vector <int> a;
    int c;
    while(cin >> c)
        a.pb(c);
    if (a.size() < n)
    {
        if (a.size() == 1 && a[0] == n)
            {cout << "-"; return 0;}
        if (a[a.size() - 1] == n)
        {
            forn(i, a.size() - 2)
                cout << a[i] << " ";
            cout << a[a.size() - 2] + 1;
        } else
        {
            forn(i, a.size())
                cout << a[i] << " ";
            cout << a[a.size() - 1] + 1;
        }
    } else
    {
        forn(i, a.size() - 2)
            cout << a[i] << " ";
        cout << a[a.size() - 2] + 1;
    }
}
