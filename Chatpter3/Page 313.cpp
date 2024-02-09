/*
Task: Negative Number
Write a program that checks whether there is a negative number among the entered numbers.

Input: The first line of standard input contains a natural number n (1 ≤ n ≤ 100) representing the number of numbers. Each of the next n lines contains a real number.

Output: On standard output, print "da" if there is a negative number among the entered numbers, otherwise print "ne".

Example 1:
Input
5
10.89
12.349
-5.9
2.3
-2.45
Output
da

Example 2:
Input
4
100.89
12.349
0
2.3
Output
ne
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

bool negative(int n, bool found)
{
    if (n > 0)
    {
        double c; cin >> c;
        if (c < 0)
            found = true;
        return negative(n - 1, found);
    }
    else
        return found;
}

int main()
{
    int n; cin >> n;
    cout << (negative(n, false)? "da" : "ne");
}
