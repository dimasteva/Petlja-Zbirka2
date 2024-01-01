/*
Task: i-th in Place i

Write a program that checks whether there exists a position i in a strictly increasing array of elements such that the value at position i is equal to i, i.e., ai = i (positions are counted from zero).

Input: Enter a number n (0 ≤ n ≤ 105), and then a strictly increasing array of n integers (each on a separate line).

Output: Print on the standard output the index i such that ai = i, or the text "nema" (meaning "none") if such an index does not exist in the array. If there are multiple such indices in the array, print the smallest one.

Example
Input
6
-3
-1
1
3
5
7

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

int main() {
    int n; cin >> n;
    int indx = -1;
    forn(i, n)
    {
        int c; cin >> c;
        if (!(c - i) && indx == -1)
        {
            indx = i;
        }
    }
    if (indx != -1)
        cout << indx;
    else
        cout << "nema";
}
