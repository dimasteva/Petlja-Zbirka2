/*
Task: Prime Number

Write a program that checks whether the entered natural number is prime (greater than 1 and has no divisors other than 1 and itself).

Input: The program reads a natural number n (1 ≤ n ≤ 109) from standard input.

Output: Print DA (YES) to standard output if the number n is prime, or NE (NO) if it is not.

Example
Input
17
Output
DA

Example 2
Input
903543481
Output
NE
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

bool prime(int n)
{
	if (n == 1 ||
            (n % 2 == 0 && n != 2) ||
            (n % 3 == 0 && n != 3))
            return false;

    for (int i = 1; (6 * i - 1) * (6 * i - 1) <= n; i++)
    {
        if (n % (6 * i - 1) == 0 || n % (6 * i + 1) == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << (prime(n) ? "DA" : "NE");

    return 0;
}
