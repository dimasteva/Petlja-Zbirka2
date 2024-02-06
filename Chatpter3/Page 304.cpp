/*
Task: Counting in the Blind Man's Bluff Game

In the Blind Man's Bluff game, children usually count in increments of five (5, 10, 15, 20, ...). Write a program that prints exactly those numbers.

Input: Enter a number x (100 ≤ x ≤ 1000) divisible by 5 from the standard input.

Output: Print on the standard output all numbers divisible by 5, starting from 5 and ending with x. Print each number on a separate line.

Example:
Input
30

Output
5
10
15
20
25
30
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

void print(int start, int end)
{
    if (start <= end)
    {
        cout << start << endl;
        print(start + 5, end);
    }
}

int main()
{
    int n; cin >> n;
    print(5, n);
}
