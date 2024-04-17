/*
Task: Measuring with n types of weights

Given are n types of weights, for each weight its mass is known (a real number), and how many weights of that type we have available (a natural number). With the given weights, you need to measure the mass S with an accuracy of 2 decimal places. Write a program to check if this is possible.

Input: The first line of standard input contains a natural number n (n ≤ 10). Each of the next n lines contains a real and a natural number separated by a single space character, representing the mass of the weight and the number of weights of that mass we have available, respectively. The last line of standard input contains a real number S representing the mass we are measuring.

Output: Display the message 'da' on standard output if the requested measurement is possible, otherwise display 'ne'.

Example:

Input
3
0.255 4
1.041 3
2.00 2
1.80

Output
da
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

int n;
double target;

bool compare(double b1, double b2) {

    double num1 = floor(b1 * 100) / 100;
    double num2 = floor(b2 * 100) / 100;

    return num1 == num2;
}


bool found(vector<pair<double, int>>& a, double curr, int i)
{
    bool ok = false;
    if (i == n)
        return compare(curr, target);
    else
    {
        if (a[i].second > 0)
        {
            a[i].second--;
            ok = (ok || found(a, curr + a[i].first, i));
            a[i].second++;
        }
        ok = ok || found(a, curr, i + 1);
    }
    return ok;
}

int main()
{
    FIO;
    cin >> n;
    vector<pair<double, int>> v(n);
    forn(i, n)
        cin >> v[i].first >> v[i].second;
    cin >> target;
    if (found(v, 0, 0))
        cout << "da";
    else
        cout << "ne";
}
