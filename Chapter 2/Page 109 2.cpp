/*
Task: D-Permutation
Given an array containing natural numbers and an integer D, write a program that determines which of several given arrays can be obtained from the initial array by swapping elements that are exactly at a distance of D.

Input: The standard input reads an integer d (1 ≤ d ≤ k), then an integer k (5 ≤ k ≤ 105), then an integer n (1 ≤ n ≤ 10), and after that, n arrays of length k are entered, where the elements are separated by spaces.

Output: On the standard output, for each array from the second to the last, print "da" if it can be transformed into the first array by swapping elements at a distance of d; otherwise, print "ne".

Example:
Input
2
7
6
1 2 3 4 5 6 7
3 4 1 2 7 6 5
2 1 4 3 6 5 7
1 4 7 2 3 6 5
1 4 7 6 3 2 5
5 4 7 6 3 1 2
Output
da
ne
da
da
ne
Explanation:
3 4 1 2 7 6 5 - swap 3 and 1, 4 and 2, and 7 and 5
2 1 4 3 6 5 7 - cannot be transformed
1 4 7 2 3 6 5 - swap 4 and 2, 7 and 3, and 7 and 5
1 4 7 6 3 2 5 - swap 6 and 2, 4 and 2, 7 and 3, and 7 and 5
5 4 7 6 3 1 2 - cannot be transformed
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
    int d, k, n;
    cin >> d >> k >> n;

    map<int, int> m;

    forn(i, k)
    {
        int c; cin >> c;
        m[c] = i;
    }

    forn(i, n - 1)
    {
        bool ok = true;
        forn(j, k)
        {
            int c; cin >> c;
            if (abs(j - m[c]) % d != 0)
                ok = false;
        }
        cout << (ok? "da" : "ne") << endl;
    }
}
