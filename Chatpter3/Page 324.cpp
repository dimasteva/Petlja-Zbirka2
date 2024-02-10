/*
Task: Number and Sum of Digits
Write a program that determines the number and sum of digits of the decimal representation of a natural number.

Input: Read an integer from 0 to 1000000000 from standard input.

Output: Print on standard output the number of digits and the sum of digits of the entered number.

Example 1:
Input
23645

Output
5 20

Example 2:
Input
0

Output
1 0
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

void a(int n, int sum, int cnt)
{
    if (n == 0)
        {cout << cnt << " " << sum; return;}
     
    cnt++;
    sum += n % 10;
    a(n / 10, sum, cnt);
}

int main()
{
    int n; cin >> n;
    if (n == 0)
        cout << "1 0";
    else
        a(n, 0, 0);
}
