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
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main() {
    int r, n;
    cin >> r >> n;
    map<int, int> heights;
    forn(i, n) {
        int h;
        cin >> h;
        heights[h]++;
    }

    long long pairs = 0;
    for(auto it = heights.begin(); it != heights.end(); ++it) {
        if(heights.count(it->first + r)) {
            pairs += (long long)it->second * heights[it->first + r];
        }
    }

    cout << pairs << endl;

    return 0;
}
