/*
Task: Filling the Gaps
In the warehouse, there are several shelves arranged side by side. On each shelf, there are boxes stacked on top of each other, and the number of boxes for each shelf is given by the corresponding element in the array. Determine how many boxes we can add at most to fill the gaps created by stacking the boxes (the added box fits between existing boxes and is not visible from the left or right).

Input: The first line of the standard input contains the number of shelves, N (3 ≤ N ≤ 50000). Then, in each of the next N lines of the standard input, the number of boxes on each shelf is given (a natural number between 0 and 100).

Output: The standard output should contain a single integer greater than or equal to 0, representing the maximum number of boxes we can add.

Example 1
Input
11
2
4
2
1
3
5
3
2
1
3
2

Output
9

Example 2
Input
11
2
4
2
5
3
2
3
5
1
3
2

Output
11
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
    auto mx = max_element(all(a));
    int el = distance(begin(a), mx);
    int curr = a[0];
    int sum = 0;
    forn1(i, el)
    {
        if (a[i] > curr)
            curr = a[i];
        else
            sum += curr - a[i];
    }
    curr = a[n - 1];
    for (int i = n - 2; i > el; i--)
    {
        if (a[i] > curr)
            curr = a[i];
        else
            sum += curr - a[i];
    }
    cout << sum;
}
