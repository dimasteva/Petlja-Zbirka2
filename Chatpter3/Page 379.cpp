/*
Task: Lexicographically Sorted Subsets
Write a program that prints all subsets of the set {1, . . . , n} in lexicographical order.
Input: Read from the standard input a number n (1 ≤ n ≤ 15).
Output: Print to the standard output the requested subsets, each on a separate line. Each subset is represented by a strictly increasing sorted array of its elements.
Example
Input
3
Output
1
1 2
1 2 3
1 3
2
2 3
3
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

int n;

void write(vector <int> &a)
{
    for (auto x : a)
        cout << x << " ";
    cout << endl;
    if (a.back() == n && a.size() == 1)
        return;
    if (a.back() == n)
    {
        a.pop_back();
        a.back()++;
    } else
        a.push_back(a.back() + 1);
    write(a);
}

int main()
{
    cin >> n;
    vector <int> a;
    a.pb(1);
    write(a);
}
