/*
Task: Averages

A car travels, changing speed during the journey. It is known that one part of the road moved at a uniform speed of v1 km/h, then one part of the road moved at a uniform speed of v2 km/h, and so on, until the last part of the road where it moved at a uniform speed of vn km/h. Write a program that determines the average speed of the car on that road, both:

- if it is assumed that each part of the road took the same amount of time,
- if it is assumed that the car covered the same distance on each part of the road.

Input: Enter n (2 ≤ n ≤ 10) positive real numbers from the standard input: v1, v2, …, vn (for each vi, 30 ≤ vi ≤ 120), followed by the end of input.

Output: In the first line of the standard output, print a real number rounded to 2 decimals representing the average speed assuming that each part of the road took the same amount of time. In the second line, print a real number rounded to 2 decimals representing the average speed assuming that the car covered the same distance on each part of the road.

Example:
Input
60
40

Output
50.00
48.00
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

void input(double sum1, double sum2, int n)
{
    double c;
    if (cin >> c)
    {
        n++;
        sum1 += c;
        sum2 += 1/c;
        input(sum1, sum2, n);
    } else
    {
        cout << fixed << setprecision(2) << sum1 / n << endl << n / sum2 << endl;
    }
}

int main() {
    input(0, 0, 0);
}
