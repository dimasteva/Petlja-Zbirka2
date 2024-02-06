/*
Task: Three-Digit Even Numbers

For given integers a and b, write a program that prints all even three-digit numbers belonging to the specified interval [a, b].

Input: Enter the numbers a and b from the standard input (0 ≤ a ≤ 1500 and a ≤ b ≤ 1500).

Output: Print on the standard output all even three-digit numbers in ascending order, one per line.

Example:
Input
85
109

Output
100
102
104
106
108
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
        cout << a << endl;
        print(a + 2, b);
    }
}

int main()
{
    int a, b; cin >> a >> b;
    if (a < 100)
        a = 100;
    else if (a % 2 == 1)
        a++;
    if (b >= 1000)
        b = 999;
    print(a, b);
}
