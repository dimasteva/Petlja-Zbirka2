/*
Task: Messengers
Along a road, messengers are positioned. The first messenger receives the message at the beginning of the road, and the goal is for all messengers to learn the message as quickly as possible. Each messenger can convey the message to everyone within a given voice range (the same for all messengers). During this process, all messengers can move at a speed of up to one meter per second in any direction (they can change their speed and direction over time, or even stand still).

Input: Read from the standard input the voice range d (a real number, 1 ≤ d ≤ 106), then the number of messengers n (an integer, 1 ≤ n ≤ 105), and finally, the position of each messenger gi (a real number, 0 ≤ gi ≤ 109, representing the distance from the beginning of the road).

Output: Print on the standard output the minimum time elapsed from the moment the first messenger learns the message until the moment all messengers learn the message, as a real number rounded to three decimals (the deviation from the exact value should be at most 10^-3).

Example 1:
Input
3.000
2
0.000
6.000
Output
1.500

Example 2:
Input
2.000
4
0.000
4.000
4.000
8.000
Output
1.000
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

bool canSpreadNews(const vector<double>& positions, double range, double time) {
    double p = positions[0] + time;
    
    for (int i = 1; i < positions.size(); i++) {
        if (p + range < positions[i] - time)
            return false;
        p = min(positions[i] + time, p + range);
    }
    
    return true;
}

int main() {
    FIO;
    double range;
    cin >> range;
    
    int n;
    cin >> n;
    
    vector<double> positions(n);
    for (int i = 0; i < n; i++)
        cin >> positions[i];
    
    double left = 0, right = positions[n-1] - positions[0];
    
    while (right - left > 0.001) {
        double s = (left + right) / 2.0;
        if (canSpreadNews(positions, range, s))
            right = s;
        else
            left = s;
    }
    
    cout << fixed << showpoint << setprecision(3) << (left + right) / 2.0 << endl;
    
    return 0;
}
