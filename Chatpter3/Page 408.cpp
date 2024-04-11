/*
Task: Numbers with a Given Sum of Digits
Write a program that prints all n-digit numbers with a given sum of digits.
Input: The first line contains the sum k (1 ≤ k ≤ 9n), and the second line contains the number of digits n (2 ≤ n ≤ 100).
Output: Print all the requested numbers to standard output, ordered by magnitude.
Example
Input
24
3
Output
699
789
798
879
888
897
969
978
987
996
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

void rec(vector<int> &a, int n, int k, int cnt)
{
    if (cnt == a.size() && k == 0)
    {
        forn(i, n)
            cout << a[i];
        cout << endl;
    }
    else if (cnt < a.size())
    {
        for (int c = n == 0? 1 : 0; c <= min(9, k); c++)
        {
            a[cnt] = c;
            rec(a, n, k - c, cnt + 1);
        }
    }
}

int main()
{
    int k, n; cin >> k >> n;
    vector<int> a(n);
    rec(a, n, k, 0);
}
