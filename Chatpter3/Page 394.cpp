/*
Task: All Permutations

Write a program that generates and prints all permutations of the set {1, 2, . . . , n}.

Input: The standard input contains a number n (1 ≤ n ≤ 8).

Output: Print to the standard output the requested permutations. Print each permutation on a separate line, with elements separated by a single space. The order of permutations can be arbitrary.

Example:
Input
3
Output
1 2 3
1 3 2
2 1 3
2 3 1
3 1 2
3 2 1
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
    a[i] = i + 1;
    do {
    forn(i, n)
        cout << a[i] << " ";
    cout << endl;
    } while(nextpermutation(a, n)); 
}
