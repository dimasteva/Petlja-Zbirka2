/*
Task: First segment divisible by N
For a sequence of positive integers, print the first segment (subsequence of consecutive elements) whose sum is divisible by N without a remainder. The segment is considered the first if there is no other segment ending before it with the same sum, and there is no segment ending at the same position but starting before it.

Input: The first line of the standard input contains the length of the sequence represented by a natural number N (2 ≤ N ≤ 105). The next N lines each contain a natural number (these numbers represent the elements of the sequence a).

Output: Each line of the standard output should print one element of the requested segment.

Example:
Input
10
5
7
1
3
5
6
8
9
9
1
Output
7
1
3
5
6
8
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
    int n; cin >> n;
    vector<int> a(n);
    vector<int> prefixSum(n + 1);
    prefixSum[0] = 0;
    forn(i, n)
    {
        cin >> a[i];
        prefixSum[i + 1] = prefixSum[i] + a[i];
    }
    vector<int> first(n+1, -1);
    first[0] = 0;
    for(int i = 1; i <= n; i++) {
        if(first[prefixSum[i] % n] != -1) {
            for(int j = first[prefixSum[i] % n]; j < i; j++)
                cout << a[j] << "\n";
            break;
        }
        else
            first[prefixSum[i] % n] = i;
    }
    return 0;
}
