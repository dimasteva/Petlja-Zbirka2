/*
Task: Sorting by Average

The teacher recorded a table with students' final grades. Write a program that sorts students by their average grades in non-decreasing order.
If two students have the same average grade, they should remain in the order in which they were initially.

Input: The standard input reads the number of students (u) (5 ≤ u ≤ 50000), then the number of grades (o) (5 ≤ o ≤ 100), and after that, the grades for each student on the next u lines (o grades separated by spaces).

Output: Print the sorted grades on the standard output (in the same format as entered).

Example:

Input:
6 5
3 5 5 4 2
5 4 2 2 5
5 5 5 4 5
3 3 3 2 1
4 2 5 1 3
5 4 5 5 5

Output:
5 5 5 4 5
5 4 5 5 5
3 5 5 4 2
5 4 2 2 5
4 2 5 1 3
3 3 3 2 1

*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

struct Kid
{
	vector <int> grades;
	int sum;	
};

bool Compare(const Kid &a, const Kid &b)
{
	return a.sum > b.sum;
}

int main()
{
	int u, o;
	cin >> u >> o;
	
	vector <Kid> kids(u);
	
	forn(i, u)
	{
		kids[i].grades.resize(o);
		kids[i].sum = 0;
		forn(j, o)
		{
			cin >> kids[i].grades[j];
			kids[i].sum += kids[i].grades[j];
		}
	}
	
	sort(all(kids), Compare);
	
	forn(i, u)
	{
		forn(j, o)
			cout << kids[i].grades[j] << " ";
		cout << endl;
	}
}
