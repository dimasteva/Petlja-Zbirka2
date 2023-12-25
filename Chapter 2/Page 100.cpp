/*
Task: Duplicates

Let's assume that internet addresses are represented by natural numbers (IP addresses, for example, are stored as unsigned 32-bit integers).
A browser keeps a list of all addresses that the user has visited during some previous period. The user has visited many addresses multiple times. Write a program that determines the number of different addresses the user has visited.

Input: Enter from the standard input the number n (1 ≤ n ≤ 105), and then n natural numbers (less than 232), each on a separate line.

Output: Print to the standard output the number of different addresses the user has visited.

Example:
Input
8
123456789
234567890
345678901
234567890
456789012
234567890
456789012
234567890

Output
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

int main()
{
    int n; cin >> n;
    set <string> ip;

    forn(i, n)
    {
        string s;
        cin >> s;
        ip.insert(s);
    }
    cout << ip.size() << endl;
}
