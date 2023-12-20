/*
Task: Consecutive Sum Decompositions
Write a program that determines in how many ways a given natural number n can be represented as the sum of two or more consecutive natural numbers (greater than or equal to 1).
Input: The program reads the number n (1 ≤ n ≤ 109) from standard input.
Output: Print the requested number of ways to standard output.
Example
Input
15
Output
3
Explanation
15 = 1 + 2 + 3 + 4 + 5 = 4 + 5 + 6 = 7 + 8
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

int main()
{
	int n;
    cin >> n;
    int cnt = 0;
    for (int m = 2; m + m * (m - 1)/2 <= n; m++)
    {
        if ((n - m * (m - 1) / 2) % m == 0)
            cnt++;
    }
    cout << cnt << endl;
}
