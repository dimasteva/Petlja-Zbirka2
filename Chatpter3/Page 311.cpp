/*
Task: Difference between Sum of Masses before and after Max
Enter the masses of objects and determine the difference between the sum of masses before the first occurrence of the object with the maximum mass and the sum of masses after the first occurrence of the object with the maximum mass (the object with the maximum mass is not included in either sum).

Input: The first line of standard input contains the number of objects n (1 ≤ n ≤ 50000). Each of the next n lines contains a natural number from the interval [1, 50000], representing the masses of each of the n objects.

Output: On the first line of standard output, display the requested difference in masses.

Example:
Input
5
10
13
7
13
4

Output
-14
Explanation
The object with the maximum mass is 13. The sum of masses before its first occurrence is 10, and after its first occurrence, it is 24. Therefore, the requested difference is -14.
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

int diff(vector <int> &a, int iter, int mx, int sum, bool found)
{
    if (iter >= a.size())
        return sum;
    if (a[iter] == mx && !found)
    {
        return diff(a, iter + 1, mx, sum, true);
    }
    if (!found)
        sum += a[iter];
    else
        sum -= a[iter];
    return diff(a, iter + 1, mx, sum, found);
}


int main()
{
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    int mx = *max_element(all(a));
    cout << diff(a, 0, mx, 0, false);
}
