/*
Task: Number of Ways to Decompose into a Sum of Distinct n-th Powers

Write a program that, for given natural numbers x and n, displays the number of ways in which the number x can be expressed as a sum of n-th powers of distinct natural numbers.

Input: The first line of standard input contains a natural number x (x ≤ 10000). The second line of standard input contains a natural number n (n < 10).

Output: Display the required number of ways on one line of the standard output.

Example 1 
Input 
10  
2  

Output
1  

Explanation 
10 = 1² + 3²  

Example 2 
Input
1729  
3  

Output
4  

Explanation  
1729 = 1³ + 12³  
1729 = 1³ + 3³ + 4³ + 5³ + 8³ + 10³  
1729 = 1³ + 6³ + 8³ + 10³  
1729 = 9³ + 10³  
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

long long power(int n, int x)
    {
        if (x == 0)
            return 1;
        
        if (x % 2 == 0)
            return power(n * n, x / 2);
        else
            return n * power(n, x - 1);
    }

long long numberOfWays(int n, int x)
{
    int nthroot = (int)ceil(pow(n, 1.0/x));
    vector<vector<long long>> dp(n + 1, vector<long long>(nthroot + 2, 0));
    for (int o = 1; o <= nthroot + 1; o++)
        dp[0][o] = 1;
    
    for (int i = 1; i <= n; i++)
    {
        int o = nthroot + 1;
        int pw;
        do
        {
            o--;
            pw = power(o, x);
        } while (pw > i);
        while(o >= 0)
        {
            dp[i][o] = dp[i - pw][o+1] + dp[i][o+1];
            o--;
            pw = power(o, x);
        }
    }
    return dp[n][1];
}

int main()
{
    int n, k; cin >> n >> k;
    cout << numberOfWays(n, k);
}
