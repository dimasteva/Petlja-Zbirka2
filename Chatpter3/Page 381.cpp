/*
Task: All Binary Strings Without Adjacent Ones

Write a program that prints all binary strings of a given length in which no two consecutive ones appear. Print the numbers in lexicographical order.

Input: Read from the standard input the number n.

Output: Print to the standard output the requested numbers, each on a separate line.

Example
Input
3
Output
000
001
010
100
101
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

void recur(int n, vector<int>& a)
{
    int i = n - 1;
    while((i >= 0 && a[i] == 1) || (i > 0 && a[i - 1] == 1))
        a[i--] = 0;
    if (i < 0)
        return;
    a[i] = 1;
    forn(i, n)
        cout << a[i];
    cout << endl;
    recur(n, a);
}

int main()
{
    int n; cin >> n;
    vector<int> a(n, 0);
    forn(i, n)
        cout << a[i];
    cout << endl;
    recur(n, a);
}
