/*
Task: Segment of a Given Sum in an Array of Integers
Write a program that, for a given array of integers, determines the number of non-empty segments of consecutive elements whose sum is equal to a given number.

Input: The standard input includes, in the first line, the sought-after sum value z (an integer between -10000 and 10000). In the next line, input the dimension of the array n (3 ≤ n ≤ 50000), followed by n subsequent lines containing the elements of the array (integers between -100 and 100).

Output: Print to the standard output the number of segments whose sum equals z.

Example:
Input
11
10
1
2
3
5
1
-1
1
5
3
2
Output
7
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

    int z, n; cin >> z >> n;
    vector<int> a(n+1, 0);
    unordered_map<int, int> freq;
    freq[0] = 1;
    int cnt = 0;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        a[i] += a[i - 1];
        cnt += freq[a[i] - z];
        freq[a[i]]++;
    }

    cout << cnt << endl;
    return 0;
}
