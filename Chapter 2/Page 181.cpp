/*
Task: Unpaired Element
The queen bee invited her friends, bee couples, and drones to the party. Since there were many guests, each received a chair number. The bee couples received the same numbers. What number did the queen bee get?

Input: The number 'n' is entered from the standard input, followed by 'n' natural numbers, each on a separate line, where all but one appear exactly twice.

Output: Print one number to the standard output - the one that occurred exactly once in the input.

Example:
Input
9
3
2
1
4
2
5
5
3
1

Output
4
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
    map<int, int> m;

    forn(i, n)
    {
        int c; cin >> c;
        m[c]++;
    }
    for (auto itr : m)
        if (itr.second == 1)
            {cout << itr.first << endl; break;}
}
