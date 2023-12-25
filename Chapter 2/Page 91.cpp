/*
Task: Counting Sort
An array contains numbers from the interval 0 to m − 1. Write a program that sorts this array.

Input: The standard input includes the number m (1 ≤ m ≤ 1000), the number n (1 ≤ n ≤ 105), and then n numbers from the interval 0 to m − 1.

Output: Print the sorted elements of the array to the standard output.

Example:
Input
4
6
3
1
2
3
2
1
Output
1
1
2
2
3
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

int main()
{
    int m, n; cin >> m >> n;
    vector <int> a(n);
    for(int& x : a)
        cin >> x;
    sort(all(a));
    for(int x : a)
        cout << x << endl;
}
