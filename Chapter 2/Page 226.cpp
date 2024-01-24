/*
Task: Segment with the Highest Average
Given an array a of real numbers of length n and a natural number k, write a program to determine the starting position of a segment (subarray of consecutive elements) of length k with the highest average. If multiple segments have the same average, report the starting position of the last one.

Input: The first line of standard input contains a natural number k (k ≤ 5 · 103). The second line contains a natural number n (n ≤ 5 · 105). The next n lines contain one real number each (these numbers represent the elements of array a).

Output: Display on standard output the starting position of the last segment of length k in array a with the highest average (positions are counted from zero).

Example
Input
3
5
1.0
5.0
8.0
2.0
7.0
Output
2
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
    int k; cin >> k;
    int n; cin >> n;
    vector <float> a(n);
    for (float &x : a)
        cin >> x;
    int i = 0, j = k - 1;
    float sum = accumulate(a.begin() + i, a.begin() + j + 1, 0);
    int mx = sum;
    int indx = 0;
    i++, j++;
    for (; j < n; j++, i++)
    {
        sum -= a[i - 1];
        sum += a[j];
        if (sum >= mx)
        {
            indx = i;
            mx = sum;
        }
    }
    cout << indx;
}
