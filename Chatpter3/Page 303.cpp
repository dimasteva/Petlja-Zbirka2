/*
Task: Numbers from a to b

Given two integers a and b, write a program that prints all integers in the specified range [a, b] in ascending order.

Input: The first line of the standard input contains an integer a, and the second line contains an integer b (-1000 ≤ a ≤ 1000, -1000 ≤ b ≤ 1000).

Output: Print on the standard output all integers in the range, one per line.

Example:
Input
3
6

Output
3
4
5
6
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

void print(int a, int b)
{
    if (a <= b)
    {
        cout << a++ << endl;
        print(a, b);
    }   
}

int main()
{
    FIO;
    int a, b; cin >> a >> b;
    print(a, b);
}
