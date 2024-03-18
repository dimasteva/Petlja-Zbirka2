/*
Task: All Single-Digit Partitions
Write a program that prints all possible ways to represent a given number n as a sum of single-digit positive numbers.

Input: Read from the standard input a number n (1 ≤ n ≤ 15).

Output: Print to the standard output all requested partitions in lexicographic order. The elements of each partition are printed in the same line, separated by a single space after each element. The order of elements is important, which means that partitions consisting of the same addends in different orders are considered different (all of them should be printed).

Example:
Input
4
Output
1 1 1 1
1 1 2
1 2 1
1 3
2 1 1
2 2
3 1
4
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

void print(vector<int>& a, int k)
{
    forn(i, k)
        cout << a[i] << " ";
    cout << endl;
}

void nextpartition(vector<int>& a, int n, int k)
{
    if (n == 0)
        print(a, k);
    else
    {
        for (int i = 1; i <= min(9, n); i++)
        {
            a[k] = i;
            nextpartition(a, n - i, k + 1);
        }
    }
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    nextpartition(a, n, 0);
}
