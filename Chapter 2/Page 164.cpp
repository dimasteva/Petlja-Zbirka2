/*
Task: Trees

A lumberjack needs to cut a certain amount of wood and has a chainsaw that can be adjusted to cut at any integer height (in meters). Since the chainsaw only cuts the wood above the set height, the higher the chainsaw is set, the less wood will be cut. The lumberjack cares about the environment and does not want to cut more trees than necessary. Write a program that determines the highest possible integer height for the chainsaw so that the lumberjack obtains enough wood (assume there is always enough wood).

Input: The standard input reads the number of trees in the forest, n (1 ≤ n ≤ 105), followed by an array of heights of each tree (an array of natural numbers between 1 and 10000, each on a separate line). After that, the input reads the amount of cut wood (since all tree trunks have the same thickness, the quantity is measured in meters of the cut tree height).

Output: Print on the standard output the maximum integer height of the chainsaw required.

Example:
Input
5
24
21
19
14
22
14
Output
18
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
	int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)    
        cin >> x;
    
    int x; cin >> x;
    int mx = *max_element(all(a));
    int start = 0;
    while(start <= mx)
    {
        int mid = start + (mx - start) / 2;
        ll sum = 0;
        forn(i, n)
        {
            if (mid < a[i])
                sum += a[i] - mid;
        }
        
        if (sum >= x)
            start = mid + 1;
        else
            mx = mid - 1;
    }
    cout << mx;
    return 0;
}
