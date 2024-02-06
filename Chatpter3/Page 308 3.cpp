/*
Task: Function Tabulation

A car is moving uniformly accelerated with an initial speed v0 (expressed in m/s) and an acceleration a (expressed in m/s^2). The total time to reach the maximum speed is T seconds. It is necessary to calculate the distance covered by the car every ∆t seconds from the beginning. Note: for uniformly accelerated motion, the distance covered after time t is expressed as s = v0 · t + a·t^2 / 2.

Input: Four real numbers are entered from the standard input (each on a separate line):
- v0 (0 ≤ v0 ≤ 5) - initial speed
- a (1 ≤ a ≤ 3) - acceleration
- T (5 ≤ T ≤ 10) - total time
- ∆t (0.1 ≤ ∆t ≤ 2.5) - interval

Output: Print on the standard output a series of numbers representing the distance covered at the specified moments.

Example:
Input
1
1
2
0.5

Output
0.00000
0.62500
1.50000
2.62500
4.00000
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

void print(double v0, double a, double T, double dt, double t = 0.0) {
    if (t <= T) {
        double s = v0 * t + 0.5 * a * t * t;
        cout << fixed << setprecision(5) << s << endl;
        print(v0, a, T, dt, t + dt);
    }
}

int main() {
    FIO

    double v0, a, T, dt;
    cin >> v0 >> a >> T >> dt;
    print(v0, a, T, dt);
    return 0;
}

