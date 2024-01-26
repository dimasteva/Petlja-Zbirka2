/*
Task: Number of Segments with the Same Parity
Write a program that determines how many non-empty segments (subarrays of consecutive elements) in a given array consist of elements with the same parity.

Input: Read the length of the array n (1 ≤ n ≤ 50000) from the standard input, followed by n lines each containing a natural number representing an element of the array.

Output: Print the number of required segments to standard output.

Example:
Input
5
1
3
5
2
4
Output
9
Explanation: The segments are 1, 1 3, 1 3 5, 3, 3 5, 5, 2, 2 4, and 4.
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
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    ll sum = 0;
    ll cnt = 1;
    int last = a[0]; 
    forn1(i, n)
    {
        if (a[i] % 2 == last % 2)
            cnt++;
        else
        {
            sum += cnt * (cnt + 1) / 2;
            cnt = 1;
        }
        last = a[i];
    }
    sum += cnt * (cnt + 1) / 2;
    cout << sum;
}
