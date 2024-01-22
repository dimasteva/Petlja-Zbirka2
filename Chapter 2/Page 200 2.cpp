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
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    
    int sol = INT_MIN;
    forn(i, n)
    {
        int mx = a[i], mn = a[i];
        for (int j = i; j < n; j++)
        {
            int len = j - i + 1;
            if (a[j] > mx)
                mx = a[j];
            else if (a[j] < mn)
                mn = a[j];
            
            int r = mx - mn + 1;
            if (r == len)
                sol = max(sol, len);
        }
    }
    cout << sol << endl;
}
