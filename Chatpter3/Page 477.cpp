/*
Task: Sum of Top k
A student has completed n tasks and received a certain number of points for each task. Determine the sum of points for the top k tasks that the student performed best on.

Input: The standard input consists of:
- The first line contains a natural number n (1 ≤ n ≤ 10^6) - the number of tasks the student completed.
- The second line contains a natural number k (1 ≤ k ≤ n) - the number of tasks the student performed best on.
- The next n lines contain the number of points the student received for each task.

Output: Print the total number of points the student scored on the top k tasks.

Example
Input
10
3
15
80
25
60
10
20
50
45
40
30
Output
190
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()


int main()
{
    int n; cin >> n;
    int k; cin >> k;
    vector<int> a(n);
    forn(i, n)
        cin >> a[i];

    nth_element(begin(a), next(a.begin(), k), end(a), greater<int>());

    cout << accumulate(begin(a), next(begin(a), k), 0) << endl;
}
