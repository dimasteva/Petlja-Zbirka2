/*
Task: Segments with a Sum Divisible by k
Given an array a of natural numbers of length n and a natural number k, Pera needs to choose a segment of array a (a non-empty subarray of consecutive elements) such that the sum of the segment is divisible by k. Write a program to determine in how many ways Pera can achieve this.

Input: The first line of standard input contains a natural number k (k ≤ 105). The second line contains a natural number n (n ≤ 105). The following n lines contain one natural number each (these numbers represent the elements of array a).

Output: Display on standard output the number of segments in array a whose sums are divisible by k.

Example:
Input
3
5
1
8
2
3
4
Output
4
Explanation: The segments are (1, 8), (3), (2, 3, 4), and (1, 8, 2, 3, 4).
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
    int k, n; cin >> k >> n;
    vector <int> a(n), prefixSum(n + 1, 0);
    forn(i, n)
    {
        cin >> a[i];
        prefixSum[i + 1] = (a[i] + prefixSum[i]) % k;
    }
    map <int, int> m;
    int cnt = 0;
    forn(i, n + 1)
    {
        cnt += m[prefixSum[i]];
        m[prefixSum[i]]++;
    }
    cout << cnt << endl;
}
