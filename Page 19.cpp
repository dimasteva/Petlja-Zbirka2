/*
Task: Binary Representation

Write a program that, based on an unsigned integer n, forms and prints its 32-bit binary representation.

Input: 
Read a number n (0 ≤ n ≤ 232 − 1) from the standard input.

Output: 
Print the 32-bit binary representation of the number n to the standard output.

Example 1:
Input:
123456
Output:
00000000000000011110001001000000

Example 2:
Input:
16777215
Output:
00000000111111111111111111111111
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

void binary(ll n)
{
    string s;
    while(n > 0)
    {
        s += (n % 2? "1" : "0");
        n /= 2;
    }
    reverse(all(s));
    for (int i = 0; i < 32 - s.size(); i++)
        cout << "0";
    cout << s << endl;
}

int main()
{
    ll n;
    cin >> n;
    binary(n);
}