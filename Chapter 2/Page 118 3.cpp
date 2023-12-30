/*
Task: Correct Phones
A sequence of phone numbers is correct if no number is a prefix of another (meaning there are no two identical numbers in the sequence). Write a program that determines whether the input sequence of numbers is correct.

Input: The standard input provides the number of phone numbers, n (1 ≤ n ≤ 50000), followed by n lines containing n phone numbers. Each number consists of between 3 and 50 digits.

Output: Print "da" if the sequence is correct, i.e., "ne" if it is not.

Example 1
Input
4
192
194
199342
192865

Output
ne

Example 2
Input
4
199342
193865
192
194

Output
da
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
    vector <string> v(n);
    for (string &s : v)
        cin >> s;
    
    sort(all(v));

    bool ok = true;

    forn1(i, n)
    {
        if (v[i - 1].size() <= v[i].size() && equal(begin(v[i - 1]), end(v[i - 1]), begin(v[i])))
            {ok = false; break;}
    }
    cout << (ok? "da" : "ne") << endl;
}
