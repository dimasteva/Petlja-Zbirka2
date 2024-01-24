/*
Task: Maximum Segment Sum with Fixed Start
Given an array of integers of length n, for a fixed left endpoint 0 ≤ i < n, find the minimum sum of the form ai + ai+1 + . . . + aj, where i ≤ j < n. Write a program that reads the array and then various starting values i, outputting the corresponding maximum sum for each starting point.

Input: The standard input first reads a number n (3 ≤ n ≤ 105), followed by n elements of the array separated by spaces. After that, it reads a number of queries q (1 ≤ q ≤ 105), followed by q natural numbers i (0 ≤ i < n), separated by spaces.

Output: For each entered value of i, print the corresponding maximum sum on a separate line of standard output.

Example
Input
5
3 -1 4 -3 2
3
0 2 3
Output
6 4 -1
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
    FIO;
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    int q; cin >> q;
    vector <int> b(n);
    int sum = 0;
    for (int k = n - 1; k >= 0; k--)
    {
        sum += a[k];
        b[k] = sum;
        if (sum < 0)
            sum = 0;
    }

    while(q--)
    {
        int i; cin >> i;
        cout << b[i] << " ";
    }
}



