/*
Task: Segment Load Increase
A truck is transporting cargo over N kilometers of road. The truck starts empty and loads and unloads packages during the journey. If the loading and unloading points for each package are known, along with their weights, write a program that determines the truck's load at each kilometer of the road.

Assume that each item is loaded at the beginning of the specified kilometer and unloaded at the end of the specified kilometer.

Input: Read from the standard input, the number of kilometers N (10 ≤ N ≤ 10000), then in the next line, the number of items M (0 ≤ M ≤ 10000). After that, in the next M lines, there are three integers separated by spaces representing the kilometer where the item is loaded (an integer between 0 and N − 1), the kilometer where the item is unloaded (an integer between 0 and N −1), and the weight of the item (an integer between 1 and 10).

Output: Print to the standard output the weight of the cargo in kilograms at each kilometer of the road (write one space after each weight).

Example:
Input
10
3
1 5 10
3 7 10
2 8 15

Output
0 10 25 35 35 35 25 25 15 0
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
    int m; cin >> m;
    map<int, int> mapa;
    while(m--)
    {
        int a, b, c; cin >> a >> b >> c;
        mapa[a] += c;
        mapa[b + 1] -= c;
    }
    int sum = 0;
    forn(i, n)
    {
        sum += mapa[i];
        cout << sum << " ";
    }
}
