/*
Task: Variations without Repetition
A variation of class k without repetition of elements of set S is every ordered k-tuple of k different elements of set S. Write a program that, for given n and k, displays all variations without repetition of class k of the set of numbers from 1 to n, in lexicographic order.
Input: The first line of standard input contains a natural number n (n ≤ 8), and the second line contains a natural number k (0 < k ≤ n).
Output: Display in lexicographic order all variations of class k of numbers from 1 to n (each on a separate line) on standard output.
Example
Input
3
2
Output
1 2
1 3
2 1
2 3
3 1
3 2
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

void rec(vector<int>& a, int n, int k, int pos, int num)
{
    if (pos == n)
    {
        set<int> s;
        forn(i, n)
            s.insert(a[i]);
        if (s.size() != n)
            return;
        forn(i, n)
            cout << a[i] << " ";
        cout << endl;
    } else
    {
        for (int i = num; i <= k; i++)
        {
            a[pos] = i;
            rec(a, n, k, pos + 1, num);
        }
    }
    
}

int main()
{
    int n, k; cin >> k >> n;
    vector<int> a(n);
    rec(a, n, k, 0, 1);
}
