/*
Task: All Combinations with Repetition

In a lottery drum containing balls numbered from 1 to n, k balls are drawn. However, after each ball is drawn and its number is recorded, the ball is returned to the drum. The k numbers drawn are displayed in non-decreasing order, representing one combination with repetition. Write a program that prints all combinations with repetition for given numbers n and k.

Input: The standard input contains two numbers k (2 ≤ k ≤ 8) and n (2 ≤ n ≤ 8), each on a separate line.

Output: Print to the standard output all combinations of k elements from the set {1, . . . , n} with repetition, listed in lexicographic order.

Example
Input
2
3
Output
1 1
1 2
1 3
2 2
2 3
3 3
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

void print(vector<int>& a, int n)
{
    forn(i, n)
        cout << a[i] << " ";
    cout << endl;
}

void rec(vector<int>& a, int n, int i, int n_min, int n_max)
{
    if (i == n)
    {
        print(a, n);
        return;
    }
    if (n_min > n_max)
        return;
    
    a[i] = n_min;
    rec(a, n, i + 1, n_min, n_max);
    rec(a, n, i, n_min + 1, n_max);
}

int main()
{
    int n, k; cin >> n >> k;
    vector<int> a(n, 1);
    rec(a, n, 0, 1, k);
}
