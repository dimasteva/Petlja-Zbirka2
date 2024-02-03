/*
Task: Height Difference
In one class, actors are being chosen for a school play "Stanley and Ollie". These actors are known for having a significant difference in height. Write a program that determines in how many ways we can select two actors from the class such that their height difference is equal to a given number r.

Input: From the standard input, first enter a positive natural number r, followed by the number of students in the class n (1 ≤ n ≤ 50000). After that, in the next n lines, input the height of each student in millimeters.

Output: Print on the standard output the number of pairs that can be formed.

Example
Input
2350
5
15745
18095
15745
16234
13395
Output
4
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main() {
    FIO;
    int difference;
    cin >> difference;
    int n;
    cin >> n;
    vector<int> heights(n);
    forn(i, n) cin >> heights[i];
    sort(all(heights));
    ll pairs = 0;
    int i = 0, j = 1;
    while (j < n) {
        if (heights[j] - heights[i] < difference)
            j++;
        else if (heights[j] - heights[i] > difference)
            i++;
        else {
            int ii;
            for (ii = i+1; ii < n && heights[ii] == heights[i]; ii++);
            int count_i = ii - i;
            i = ii;
            int jj;
            for (jj = j+1; jj < n && heights[jj] == heights[j]; jj++);
            int count_j = jj - j;
            j = jj;
            pairs += (ll)count_i * count_j;
        }
    }
    cout << pairs << endl;
    return 0;
}
