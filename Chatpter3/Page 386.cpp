/*
Task: All Combinations

Combinations of length k from n elements involve selecting k elements from the set {1, . . . , n}, similar to how, for example, in the game of lotto, 7 out of 39 balls are chosen. Write a program that lists and prints all combinations for given values of k and n, ordered lexicographically.

Input: The first line of the standard input contains the number k (1 ≤ k ≤ n), and the next line contains the number n (2 ≤ n ≤ 20).

Output: Print to the standard output all combinations. Each combination should be represented by an array of numbers sorted strictly in ascending order, and all combinations should be ordered lexicographically.

Example
Input
3
5
Output
1 2 3
1 2 4
1 2 5
1 3 4
1 3 5
1 4 5
2 3 4
2 3 5
2 4 5
3 4 5
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

void print(vector<int>& a, int n)
{
    forn(i, n)
        cout << a[i] << " ";
    cout << endl;
}

void rec(vector<int>& a, int n, int k)
{
    int i = n - 1;
    while(i >= 0)
    {
        if (a[i] < k - (n - i - 1))
        {
            a[i]++;
            for (int j = i + 1; j < n; j++)
            {
                if (a[j] - a[j - 1] != 1)
                    a[j] = a[j - 1] + 1;
                else
                    break;
            }
            print(a, n);
            break;
        } else
            i--;
    }
    if (i >= 0)rec(a, n, k);
}

int main()
{
    int n, k; cin >> n >> k;
    vector<int> a(n);
    forn(i, n)
    {
        a[i] = i + 1;
        cout << a[i] << " ";
    }
    cout << endl;
    rec(a, n, k);
}
