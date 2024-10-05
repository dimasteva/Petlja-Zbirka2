/*
Task: Activity Schedule
In a classroom, programming training is held on Saturdays. Each teacher has written down the time slot during which they want to hold the class (the hour and minute of the start and the hour and minute of the end of the class are known). Determine how it is possible
to create a schedule of classes so that the maximum number of teachers is included.
Input: The input first reads the number n (the total number of teachers, 1 ≤ n ≤ 50000), and then in n
next lines, four numbers separated by spaces that represent the hour and minute of the start and the hour and minute of the end of the class (assume that the end is always after the start).
Output: Print the maximum number of teachers who can hold their classes.
Example
Input
7
8 15 9 20
10 45 11 30
11 20 12 45
9 30 12 40
10 20 11 20
12 00 13 00
11 30 13 30
Output
3
Explanation
Classes can be held, for example, from 8:15 to 9:20, then from 10:20 to 11:20, and finally from 11:30 to 13:30.
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
    FIO
    int n; cin >> n;
    vector<vector<int>> a(n, vector<int>(2));
    forn(i, n)
    {
    	int s, m, s1, m1;
    	cin >> s >> m >> s1 >> m1;
    	a[i][0] = s * 60 + m;
    	a[i][1] = s1 * 60 + m1;
	}
	sort(begin(a), end(a), [](const vector<int>& a, const vector<int>& b)
	{
		return a[1] < b[1];
	});
	int score = 1;
	int last = a[0][1];
	for (int i = 1; i < n; i++)
	{
		if (a[i][0] >= last)
		{
			last = a[i][1];
			score++;
		}
	}
	cout << score << endl;
}
