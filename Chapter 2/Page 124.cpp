/*
Task: Number of Pairs with Given Sum

Given an integer s and an array of distinct integers, write a program to determine the number of pairs in the array whose sum is equal to the given number s.

Input: The first line of the standard input contains the integer s (a number from the interval [0, 106]), the second line contains the number of elements in the array n (1 ≤ n ≤ 50000), and the next n lines contain the elements of the array (numbers from the interval [0, 106]).

Output: Display on the standard output the number of pairs of distinct elements in the array whose sum is equal to the given number s.

Example:
Input
5
6
1
4
3
6
-1
5
Output
2
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
    int s; cin >> s;
    int n; cin >> n;
    vector <int> a(n);
    forn(i, n)
        cin >> a[i];
    
    sort(all(a));

    int cnt = 0;
    forn(i, n)
        cnt += binary_search(all(a), s - a[i]);
    
    cout << cnt / 2 << endl;
}
