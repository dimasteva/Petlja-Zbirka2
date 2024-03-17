/*
Task: Next Permutation

All permutations of numbers from 1 to n can be ordered lexicographically. For example, for n = 3, permutations in lexicographic order are:
123
132
213
231
312
321

Write a program that, for a given natural number n and a given permutation of numbers from 1 to n, displays the next permutation in lexicographic order (the first permutation that comes after the given permutation).

Input: The first line of the standard input contains a natural number n (n < 1000). In each of the next n lines of the standard input, the elements of the permutation are provided, each on a separate line.

Output: Print to the standard output the elements of the next permutation in lexicographic order, each element on a separate line. If there is no next permutation (the given permutation is the last one), print the message "ne postoji" on a single line.

Example 1
Input
5
3
1
4
5
2
Output
3
1
5
2
4

Example 2
Input
3
3
2
1
Output
ne postoji
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

bool nextpermutation(vector<int>& a, int n)
{
    int i = n - 2;
    while(i >= 0 && a[i] > a[i + 1])
        i--;
    if (i < 0)
        return false;
    int j = n - 1;
    while(a[j] < a[i])
        j--;
    swap(a[i], a[j]);
    for (j = n - 1, i++; i < j; i++, j--)
        swap(a[i], a[j]);
    return true;
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    forn(i, n)
        cin >> a[i];
    if (nextpermutation(a, n))
    {
        forn(i, n)
            cout << a[i] << endl;
    }
    else
        cout << "ne postoji";
}
