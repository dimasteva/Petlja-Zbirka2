/*
Task: Largest Repeated Element

Write a program that determines the largest number that appears at least twice in an array or states that such a number does not exist.

Input: Read the number n (1 ≤ n ≤ 50000) from the standard input, followed by the next n lines of n integers between 1 and 50000.

Output: Print the desired number to the standard output or the text "nema" if all elements of the array are distinct.

Example 1:
Input
6
3
8
2
2
3
5
Output
3

Example 2:
Input
3
1
2
3
Output
nema

Example 3:
Input
6
3
3
2
2
1
1
Output
3
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
    map<int, int> m;

    forn(i, n)
    {
        int c; cin >> c;
        m[c]++;
    }

    int mx = 0;
    for (auto itr : m)
    {
        if (itr.second >= 2 && itr.first > mx)
            mx = itr.first;
    }
    cout << (mx == 0? "nema" : to_string(mx)) << endl;
}
