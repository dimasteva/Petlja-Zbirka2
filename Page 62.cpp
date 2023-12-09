#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

void solve()
{
    int p, k, n; cin >> p >> k >> n;
    int lastIndex = 0;
    int mx = 0;
    bool moze = false;
    forn(i, n)
    {
        int c; cin >> c;
        if (c < p)
        {
            if (i - lastIndex >= k)
                moze = true;
            lastIndex = i;
        }
    }
    cout << (moze? "da" : "ne") << endl;
}


int main()
{
    //int t; cin >> t;
    //while(t--)
    //{
        solve();
    //}
}