/*
Task: Prime Factorization

If several prime numbers are given, their product can be determined very easily and quickly. However, if the product is given, it is often very difficult to determine the prime numbers that make it up. Write a program that efficiently solves this problem.

Input: 
Read a natural number n (1 ≤ n ≤ 2 · 109) from the standard input.

Output: 
Print the prime factors of the number n, sorted from smallest to largest, separated by a space.

Example:
Input:
900
Output:
2 2 3 3 5 5
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

void factorize(int n)
{
    int divisor = 2;
    while(divisor * divisor <= n)
    {
        if (n % divisor == 0)
            {cout << divisor << " "; n /= divisor;}
        else
            divisor++;
    }
    if (n > 1)
        cout << n;
}

int main()
{
    int n;
    cin >> n;
    factorize(n);
}