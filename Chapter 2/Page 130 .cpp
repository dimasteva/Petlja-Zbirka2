/*
Task: Stern-Brocot Tree
Write a program that, given a fraction, determines the path to reach that fraction in the Stern-Brocot Tree.

Input: Positive, coprime integers m and n (m, n ≤ 10^6), separated by a single space, are read from standard input.

Output: Print the path to the fraction m/n to standard output.

Example 1:
Input
3 5
Output
LDL

Example 2:
Input
1155 8398
Output
LLLLLLLDDDLDDLLLLDDLLDDD
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

int main() { 
    int n, m;
    cin >> n >> m;
    int al = 0, bl = 1, ar = 1, br = 0;
    while(true)
    {
        ll a = ar + al;
        ll b = br + bl;

        if (m * b < a * n)
        {
            cout << "D";
            ar = a;
            br = b;
        }
        else if (m * b > a * n)
        {
            cout << "L";
            al = a;
            bl = b;
        }
        else
            break;
    }
}
