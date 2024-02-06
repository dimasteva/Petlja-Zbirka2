/*
Task: Conversion of Miles to Kilometers

The mile is an English historical unit of length equal to 1609.344 m. Write a program that prints a conversion table from miles to kilometers.

Input: Enter integers a (1 ≤ a ≤ 10), b (10 ≤ b ≤ 100), and k (1 ≤ k ≤ 10) from the standard input.

Output: Print on the standard output the conversion table for each number of miles from the interval [a, b], with a step of k. Round the number of kilometers to 6 decimals and display the table in a format identical to the example.

Example:
Input
10
20
2

Output
10 mi = 16.093440 km
12 mi = 19.312128 km
14 mi = 22.530816 km
16 mi = 25.749504 km
18 mi = 28.968192 km
20 mi = 32.186880 km
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

void print(int a, int b, int k)
{
    if (a <= b)
    {
        cout << a << " mi = " << setprecision(6) << fixed << (a * 1609.344) / 1000 << " km" << endl;
        print(a + k, b, k);
    } 
}

int main()
{
    int a, b, k; cin >> a >> b >> k;
    print(a, b, k);
}
