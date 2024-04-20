/*
Task: Sum of neighboring perfect squares
The sequence 8 1 15 10 6 3 13 12 4 5 11 14 2 7 9 is characteristic in that it represents a permutation of numbers from 1 to 15, and the sum of any two neighboring elements is a square of a natural number. Write a program that, given n, determines the lexicographically smallest permutation of numbers from 1 to n in which the sum of any two neighboring elements is the square of a natural number.

Input: The input is read from the standard input, consisting of a number n (1 ≤ n ≤ 45).

Output: Print the requested permutation to the standard output (all numbers on the same line separated by a single space), or print "nema" (which means "none" in Serbian) if the requested permutation does not exist.

Example 1
Input
12
Output
nema

Example 2
Input
17
Output
16 9 7 2 14 11 5 4 12 13 3 6 10 15 1 8 17
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()


bool found = false;
bool squareSum(int a, int b)
{
    int sum = a + b;
    int root = sqrt(sum);
    return root * root == sum;
}

void perm(int n, vector<int>& a, int index, vector<bool>& used)
{
    if (index == n)
    {
        forn(i, n)
            cout << a[i] << " ";
        found = true;
        return;
    }

    forn1(i, n + 1)
    {
        if (!used[i] && squareSum(a[index - 1], i))
        {
            a[index] = i;
            used[i] = true;
            perm(n, a, index + 1, used);
            if (found)
                return;
            used[i] = false;
        }
    }
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    vector<bool> used(n + 1, false);
    forn1(i, n + 1)
    {
        a[0] = i;
        used[i] = true;
        perm(n, a, 1, used);
        if (found)
            return 0;
        used[i] = false;
    }
    cout << "nema";
}
