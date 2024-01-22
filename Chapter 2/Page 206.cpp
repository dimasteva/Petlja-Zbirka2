/*
Task: Router
Along a street, buildings are evenly distributed (the distance between any two consecutive buildings is the same). For each building, the number of users that a new internet provider needs to connect is known. Determine which building to place the router on so that the total length of optical cables connecting each user to the router is minimized (consider only the cable length from one building to another and neglect lengths within buildings).

Input: The first line of the standard input contains the number n (1 ≤ n ≤ 105), and in the next line, there are n natural numbers separated by spaces representing the number of users in each of the n buildings.

Output: Print to the standard output the minimum length of the cables.

Example:
Input
6
3 5 1 6 2 4
Output
30
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

int main()
{
    FIO;
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    
    ll sum1 = 0, sum2 = 0, st1 = 0, st2 = 0;
    int inc = 1;
    forn1(i, n)
    {
        sum2 += a[i];
        st2 += inc++ * a[i];
    }
    ll mn = st2;

    forn1(i, n)
    {
        sum1 += a[i - 1];
        st2 -= sum2;
        sum2 -= a[i];
        st1 += sum1;

        if (st1 + st2 < mn)
            mn = st1 + st2;
        
    }
    cout << mn << endl;
}
