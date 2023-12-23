/*
Task: Sum of Prime Pairs
Write a program that, for a given natural number n, determines how many pairs of prime numbers (p, q) exist such that p < q and p + q ≤ n is also prime.

Input: The program reads the number n (1 ≤ n ≤ 106) from standard input.

Output: Print to standard output the requested number of pairs, such that p + q ≤ n.

Example 1
Input
6
Output
1
Explanation
The only pair that satisfies the conditions is (2, 3), as 5 ≤ 6 is a prime number.

Example 2
Input
100
Output
8
*/
/*

*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int Eratosthenes(int n)
{
    vector <bool> prime(n + 1, true);
    ll sum = 0;
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    int p = 2;
    int count = 0;
    for (int i = p + 1; i + p <= n; i++)
    {
        if (prime[i] && prime[i + p])
            count++;
    }
    return count;
}

int main()
{
	int n;
    cin >> n;
    cout << Eratosthenes(n);
}
