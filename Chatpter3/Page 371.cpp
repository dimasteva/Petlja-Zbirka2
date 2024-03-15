/*
Task: All Subsets
Write a program that prints all subsets of a given set.
Input: From the standard input, read a number n (where 3 ≤ n ≤ 10), followed by n natural numbers, sorted in ascending order and separated by a single space.
Output: Print to the standard output all subsets of the input set of numbers, each on a separate line, with elements separated by a single space. First, list subsets where the first element is not included, followed by those where it is. Within each of these two groups, print subsets where the second element is not included first, followed by those where it is, and so on.
Example
Input
3
1 2 3
Output
3
2
2 3
1
1 3
1 2
1 2 3
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

void ispisi(const vector<int>& a, int n)
{
    for (int k = 0; k < n; k++)
        cout << a[k] << " ";
    cout << endl;
}

void ispisi(const vector <int> &a, int i, vector <int> &p, int j)
{
    if (i == a.size())
    {
        ispisi(p, j);
    } else
    {
        ispisi(a, i + 1, p, j);
        p[j] = a[i];
        ispisi(a, i + 1, p, j + 1);
    }
}

void ispisi(vector <int> &a)
{
    vector <int> p(a.size());
    ispisi(a, 0, p, 0);
}

int main()
{
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    ispisi(a);
}
