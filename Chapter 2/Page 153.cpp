/*
Task: K-Nearest Opponents
A young programmer wants to practice programming by organizing an online competition against a certain number of his peers. Since he wants to realistically assess his current knowledge, he wants to choose opponents who have ratings most similar to his own. When selecting an opponent, if there is a choice between a competitor with a higher or lower rating, the programmer prefers to choose the one with a lower rating. Our programmer is not selfish and wants his program to be used to help all his friends choose opponents based on their ratings. There are many competitors, and he wants a quick answer.

Input: The standard input reads the ratings of potential opponents, sorted in ascending order. All opponents have different ratings. First, the number n (1 ≤ n ≤ 10000) is read, followed by n ratings (integers). After that, the input reads the number m (1 ≤ m ≤ 10000), which represents the number of competitions to be organized. In the following lines, m pairs of integers are read, representing the rating of the competitor for whom the competition is organized and the number of competitors in the competition (one pair per line).

Output: Print m numbers on the standard output (each on a separate line), representing the indexes of the first selected opponent for each competition (indexing starts from zero).

Example:
Input
6
3
5
7
9
11
13
6
1 3
6 3
8 3
11 3
13 3
19 3
Output
0
0
1
3
3
3
Explanation:
A competitor with a rating of 1 should compete against competitors with ratings 3, 5, 7 (the index of the first one is 0).
A competitor with a rating of 6 can compete against competitors with ratings 3, 5, and 7, or against competitors with ratings 5, 7, and 9. However, when choosing between competitors with ratings 3 and 9, the one with a lower rating, 3, is preferred, so the index of the first opponent is again 0. The same principle is applied in other competitions.
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

int func(vector <int> a, int x, int k)
{
	auto it = upper_bound(begin(a), prev(end(a), k), 0,
							[x, k](const int& _, const int& y)
							{
								return abs(y - x) <= abs(*(next(&y, k)) - x);
							});
	
	return distance(begin(a), it);
}

int main()
{
	int n; cin >> n;
	vector <int> a(n);
	for (int &x : a)
		cin >> x;
	
	int m; cin >> m;
	while(m--)
	{
		int x, k;
		cin >> x >> k;
		cout << func(a, x, k) << endl;
	}
}
