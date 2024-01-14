/*
Task: Sports Training

The water polo players of the "Dolphins" club have organized training sessions lasting n days. On the first day of training, each water polo player swims a meters, and each subsequent day they swim d meters more than the previous day. Write a program to determine how many total kilometers each water polo player of the "Dolphins" club swims during these preparations.

Input:
The first line of the standard input contains the number of days of preparation n (n ≤ 105). Each subsequent line of the standard input represents data for one water polo player (at most 105). Two numbers are entered per line separated by a space: the number of meters the water polo player swims on the first day of preparation a (a ≤ 3000), and the number of meters they swim more each day compared to the previous day d (d ≤ 1000).

Output:
On the standard output, for each water polo player, display the total number of kilometers they swim during the preparation.

Example:
Input:
10
500 100
400 20
Output:
9.50
4.9
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

using namespace std;

long long Gauss(long long n)
{
    return n * (n + 1) / 2;
}

long long ArithmeticSeriesSum(int a, int d, int n)
{
    return static_cast<long long>(n) * a + d * Gauss(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    string line;
    while (getline(cin, line))
    {
        stringstream ss(line);
        int a, d;
        ss >> a >> d;

        long long S = ArithmeticSeriesSum(a, d, n);
        double Skm = static_cast<double>(S) / 1000.0;
        cout << fixed << setprecision(2) << Skm << endl;
    }

    return 0;
}
