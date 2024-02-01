/*
Task: Permutation with the Maximum Query Sum
Along a street, streetlights are installed, each emitting a different amount of light. The streetlights also illuminate nearby houses. For each house, it is known which streetlights illuminate it (these are always consecutive streetlights in the array of streetlights along the street). The total amount of light a house receives is equal to the sum of the light emitted by the streetlights illuminating it. If the intensities of the light emitted by all streetlights that need to be distributed are known, write a program that determines the distribution of streetlights such that the total illumination of the houses is maximized.

Input: Read from the standard input, the number of streetlights n (1 ≤ n ≤ 105), then in the next line, the intensities of the streetlights to be distributed (integers between 1 and 106). After that, enter the number of houses s (1 ≤ s ≤ 105), and then in the next s lines, for each house, provide information about the positions of the first and last streetlight illuminating it (two numbers [l, d], where 1 ≤ l ≤ d ≤ n).

Output: Print to the standard output the maximum possible total amount of light that all houses can receive.

Example 1
Input
3
5 3 2
3
1 2
2 3
1 3
Output
25

Example 2
Input
5
5 2 4 1 3
3
1 5
2 3
2 3
Output
33
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
	int m; cin >> m;
	sort(all(a), greater<int>());
	vector <int> mapa(n + 1, 0);
	vector <pair<int, int>> ranges(m);
	for(int i = 0; i < m; i++)
	{
		int l, d; cin >> l >> d;
		ranges[i] = {l-1, d};
		mapa[l-1]++;
		mapa[d]--;
	}
	for(int i = 1; i < n; i++)
		mapa[i] += mapa[i-1];
	sort(all(mapa), greater<int>());
	ll sum = 0;
	for (int i = 0; i < n; i++)
		sum += (ll)mapa[i] * a[i];
	cout << sum;
}
