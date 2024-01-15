/*
Task: Nearest Advertisement Element
A video playback service displays ads to users. For each ad, the moment it appears in the video is known (expressed in seconds from the start of the video). During playback, the user can skip to any moment in the video (forward or backward) or play the video from any position (specified in seconds from the start of the video). The user is shown the ad that is closest to the point they skipped to (if two ads are equally distant from that point, the earlier one is shown). Write a program that determines which ad is displayed during each video skip.

Input: The standard input reads the number of ads, n (1 ≤ n ≤ 50000), followed by n integers (separated by spaces) representing the number of seconds from the start of the video when each ad appears. These numbers are given in non-decreasing order (multiple ads can appear at the same moment). Then, the input takes the number of video skips, m (1 ≤ m ≤ 50000), followed by m integers (separated by spaces) representing the number of seconds from the start of the video to which the user skips.

Output: Print to the standard output an array of m integers representing the ordinal number of the ad to be displayed (ads are numbered from 0) for each video skip.

Example:
Input
6
1 10 17 17 24 28
7
9 2 15 26 20 17 35
Output
1
0
2
4
2
2
5
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
	
	sort(all(a));
	
	int m; cin >> m;
	while(m--)
	{
		int c; cin >> c;
		auto itr = equal_range(all(a), c);
		if (itr.first == end(a))
		{
			cout << n - 1 << endl;
		}
		else if (itr.first == begin(a))
			cout << 0 << endl;
		else
		{
			int x = *(itr.first);
			auto p = prev(itr.first);
			while(p != begin(a) && *p == *prev(p))
				p = prev(p);
			int y = *p;
			if (c - y <= x - c)
			{
				cout << distance(begin(a), p) << endl;
			} else
			{
				cout << distance(begin(a), itr.first) << endl;
			}
		}
	}
}
