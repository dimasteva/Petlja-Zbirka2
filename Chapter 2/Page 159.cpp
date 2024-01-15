/*
Task: Mountain Peak
Hikers climbed a mountain and reported their altitude every 10 minutes. Determine the altitude of the mountain (assuming hikers reported the altitude both while ascending and resting at the peak).

Input: The standard input reads the number n (3 ≤ n ≤ 50000), followed by an array of n distinct numbers such that the array first increases (hikers climb), and then decreases (hikers descend). There is at least one number on both the left and right sides of the peak altitude.

Output: Print one number on the standard output representing the altitude of the mountain.

Example:
Input
5
3
5
8
6
3
Output
8
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
	int mx = INT_MIN;
	forn(i, n)
	{
		int c; cin >> c;
		if (c > mx)
			mx = c;
	}
	cout << mx << endl;
}
