/*
Task: Number of Combinations
Write a program that determines the number of combinations without repetition of length k from a set of n elements (i.e., the number of different combinations in a lottery game if k balls are drawn from a drum containing n balls). 
Input: The input consists of the number k (1 ≤ k ≤ n) and the number n (1 ≤ n ≤ 40). 
Output: Output the number of combinations. 
Example 1 
Input 
3 
5 
Output 
10 
Explanation 
These are the combinations (1, 2, 3), (1, 2, 4), (1, 2, 5), (1, 3, 4), (1, 3, 5), (1, 4, 5), (2, 3, 4), (2, 3, 5), (2, 4, 5), and (3, 4, 5). 
Example 2 
Input 
7 
39 
Output 
15380937
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
    cout << comb(k, n);
}
