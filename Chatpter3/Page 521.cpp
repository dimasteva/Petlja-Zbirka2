/*
Task: Number of Combinations with Repetition  
Write a program that determines how many ways you can draw \( k \) balls from a drum containing \( n \) different balls if each drawn ball is returned to the drum before the next draw.  
Input: The input consists of the number \( k \) (1 ≤ k ≤ n) and \( n \) (1 ≤ n ≤ 30), each on a separate line.  
Output: Output the number of combinations with repetition.  
Example  
Input  
2  
3  
Output  
6  
Explanation  
These are the combinations (1, 1), (1, 2), (1, 3), (2, 2), (2, 3), and (3, 3).
*/

#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

ll comb(int k, int n)
{
    vector<ll> dp(k + 1);
    dp[0] = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i <= k)
            dp[i] = 1;
        
        for (int j = min(k, i - 1); j > 0; j--)
            dp[j] += dp[j - 1];
    }
    return dp[k];
}

int main()
{
    FIO;
    int k, n;
    cin >> k >> n;
    cout << comb(k, n + k - 1);
}
