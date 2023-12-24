/*
Task: Zigzag Selection
Sort the array of numbers so that the smallest of all elements goes to the first position, the smallest of the remaining goes to the last position, the next smallest goes to the second position, and so on.

Input: The first line of the standard input contains the number n, representing the number of elements in the array (1 ≤ n ≤ 105). The next n lines contain the elements of the array, where −106 ≤ ai ≤ 106.

Output: In each of the n output lines, display one element of the array sorted in the specified order.

Example:
Input
7
-3
7
1
8
-5
2
9
Output
-5
1
7
9
8
2
-3
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
    int n;
    cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    
    sort(all(a));

    vector <int> sol(n);

    int start = 0, end = n - 1;
    forn(i, n)
    {
        if (i % 2 == 0)
            sol[start++] = a[i];
        else
            sol[end--] = a[i];
    }
    
    forn(i, n)
        cout << sol[i] << endl;
}
