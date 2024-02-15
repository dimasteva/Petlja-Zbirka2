/*
Task: Parity Function
The function f is defined as follows: f(1) = 1, f(2n) = f(n), f(2n + 1) = f(n) + f(n + 1).
Write a program that, given n, prints the value of f(n).

Input: Read from standard input the number n (1 ≤ n ≤ 10 000 000 000 000 000 000 = 10^19).

Output: Print the requested value of the function to standard output.

Example 1
Input
3
Output
2

Example 2
Input
64
Output
1

Example 3
Input
10000000000000000000
Output
59010673
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO \
    ios::sync_with_stdio(false); \
    cin.tie(0); \
    cout.tie(0);

ll rec(ll n)
{
    ull a = 1, b = 0;
    while(n > 1)
    {
        if (n % 2 == 0)
            a += b;
        else
            b += a;
        n/=2;
    }
    return a + b;
}


int main() {
    FIO;
    ull n; cin >> n;
    cout << rec(n);
}
