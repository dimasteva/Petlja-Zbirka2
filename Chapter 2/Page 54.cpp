/*
Task: Sieve of Eratosthenes

Write a program that determines the number of prime numbers in the interval [a, b] and their sum (if the sum has more than 6 digits, print only the last 6 digits).

Input: The program reads numbers a and b (1 ≤ a ≤ b ≤ 107) from standard input, each on a separate line.

Output: Display on standard output, in a single line, separated by a single space, the number of prime numbers in the interval [a, b] and the requested sum.

Example
Input
1
1000
Output
168 76127
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

pair<int, int> Eratosthenes(int a, int b)
{
    vector<bool> prime(b + 1, true);
    ll sum = 0;
    prime[0] = prime[1] = false;
    int count = 0;

    for (int i = 2; i * i <= b; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= b; j += i)
                prime[j] = false;
        }
    }

    for (int i = a; i <= b; i++)
    {
        if (prime[i])
        {
            sum += i;
            sum %= 1000000;
            count++;
        }
    }

    return make_pair(count, sum);
}

int main()
{
    int a, b;
    cin >> a >> b;
    pair<int, int> result = Eratosthenes(a, b);
    cout << result.first << " " << (result.second) << endl;

    return 0;
}
