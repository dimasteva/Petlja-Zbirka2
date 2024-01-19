/*
Task: Prefix of the Largest Sum
Every day, during a certain period, exactly one transaction (deposit or withdrawal of money) was made to a bank account. If the initial balance of the account is zero, write a program that determines the largest balance on the account during that period.

Input: The standard input includes the number n (1 ≤ n ≤ 100000), followed by n integers (each on a separate line) representing transactions (a positive number indicates a deposit, and a negative number indicates a withdrawal).

Output: Print one integer to the standard output, representing the largest balance on the account at any given moment during that period.

Example:
Input
5
4
2
-3
5
-4
Output
8
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
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    
    int sum = 0, mx = INT_MIN;
    for (int x : a)
    {
        sum += x;
        mx = max(mx, sum);
    }
    cout << mx;
}
