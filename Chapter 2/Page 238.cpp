/*
Task: Segment Sums
The earnings of a company are known for a certain number of days. Write a program that allows the user to calculate the total earnings of the company in time periods defined by the start and end days.

Input: Read the number of days, n (1 ≤ n ≤ 100000), from the standard input. On the next line, input n integers between 0 and 100, separated by a single space, representing the earnings over n days. Then, input the number of queries, m (1 ≤ m ≤ 100000), and in the next m lines, input time periods defined by the starting day a and the ending day b (0 ≤ a ≤ b < n).

Output: Print m integers to standard output, representing the total earnings in each of the m periods.

Example
Input
5
1 2 3 4 5
3
0 4
1 3
2 2
Output
15
9
3
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
    int n; cin >> n;
    vector <int> v(n);
    for (int &x : v)
        cin >> x;
    int m; cin >> m;
    while(m--)
    {
        int a, b; cin >> a >> b;
        cout << accumulate(begin(v) + a, begin(v) + b + 1, 0) << endl;
    }
}
