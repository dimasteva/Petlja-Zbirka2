/*
Task: Number of Subarrays with Given Sum
Write a program that determines how many subarrays (not necessarily consecutive elements) of a given array of positive numbers have a sum equal to a given number.
Input: The standard input reads a number 1 ≤ n ≤ 30, followed by n positive real numbers separated by spaces.
Output: Print the number of subarrays to the standard output (two real numbers can be considered equal if they differ by less than 10^(-5)).
Example
Input
4
3.2 5.7 9.4 6.9
12.6
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


int SubArray(vector<double>& a, int n, double sum, double left, int k)
{
    if (abs(sum) < 0.00001)
        return 1;
    if (k == n)
        return 0;
    if (a[k] > sum + 0.00001)
        return 0;
    if (left + 0.00001 < sum)
        return 0;
    return SubArray(a, n, sum - a[k], left - a[k], k + 1) +
        SubArray(a, n, sum, left - a[k], k + 1);
}

int main()
{
    int n; cin >> n;
    vector<double> a(n);
    for (double &x : a)
        cin >> x;
    double target; cin >> target;
    sort(all(a));
    double sum = 0;
    forn(i, n)
        sum += a[i];
    cout << SubArray(a, n, target, sum, 0);
}
