/*
Task: Measurement with n Weights
Given n weights, each weight's mass is known. Using the given weights, you need to measure the mass S so that the total mass of the selected weights differs from S as little as possible. Write a program to determine the minimal difference in such measurement.
Input: The first line of the standard input contains a natural number n (n ≤ 10). The next n lines contain real numbers, each in a separate line, representing the masses of the given weights. The last line of the standard input contains a real number S representing the mass to be measured.
Output: Print in a single line on the standard output the minimal difference obtained in the measurement, rounded to two decimal places.
Example
Input
5
2.3
1
0.5
2
0.25
4
Output
0.05
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

double target;
double difference = DBL_MAX;
void minDiff(vector<double>& a, double sum, int index, double left)
{
    if (index == a.size())
    {
        difference = min(difference, abs(sum - target));
        return;
    }
    if (abs(sum - target) - left > difference)
        return;
    minDiff(a, sum, index + 1, left - a[index]);
    if (sum + a[index] < target + difference)
        minDiff(a, sum + a[index], index + 1, left - a[index]);
}


int main()
{
    int n; cin >> n;
    vector<double> a(n);
    for (double &x : a)
        cin >> x;
    cin >> target;
    double sum = 0;
    forn(i, n)
        sum += a[i];
    minDiff(a, 0, 0, sum);
    cout << fixed << setprecision(2) << difference;
}
