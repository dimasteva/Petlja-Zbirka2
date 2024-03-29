/*
Task: Keyboard and Mouse
Ognjen wants to buy a keyboard and a mouse for a certain amount of money he has. Write a program that, based on the available prices of keyboards and mice, determines the maximum amount of money for which he can buy one keyboard and one mouse.

Input: The standard input is used to read the number of available keyboards, t (1 ≤ t ≤ 105), followed by t natural numbers less than 106 separated by spaces, representing the prices of keyboards. After that, the number of available mice, m (1 ≤ m ≤ 105), is read, followed by m natural numbers less than 106 separated by spaces, representing the prices of mice. In the last line, the budget that Ognjen has is given.

Output: Print the requested maximum price of one keyboard and one mouse that Ognjen can buy on the standard output.

Example:
Input
2
3 1
3
5 8 2
10
Output
9
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

    int t, m, budget;
    cin >> t;
    vector<int> keyboards(t);
    forn(i, t) {
        cin >> keyboards[i];
    }

    cin >> m;
    vector<int> mice(m);
    forn(i, m) {
        cin >> mice[i];
    }

    cin >> budget;

    sort(all(keyboards));
    sort(all(mice));

    int max_price = -1;
    int l = 0, r = m - 1;
    while (l < t && r >= 0) {
        int total_price = keyboards[l] + mice[r];
        if (total_price > budget) {
            --r;
        } else {
            max_price = max(max_price, total_price);
            ++l;
        }
    }

    cout << max_price << endl;

    return 0;
}
