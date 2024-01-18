/*
Task: Most Voted Candidate
Students voted for the class president. Write a program that determines how many votes the winner received.

Input: The total number of votes 'n' is read from the standard input (1 ≤ n ≤ 105), and then in the next n lines, one name composed of up to 20 English alphabet letters.

Output: Print to the standard output the number of votes the winner received (the name that appeared most frequently in the input).

Example:
Input
5
pera
mika
jovana
pera
ana

Output
2
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
    int n;
    cin >> n;
    map<string, int> m;
    int mx = 0;
    forn(i, n)
    {
        string s; cin >> s;
        m[s]++;
        mx = max(m[s], mx);
    }
    cout << mx << endl;
}
