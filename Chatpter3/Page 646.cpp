/*
Task: Josephus Problem
Students sit in a circle marked with numbers from 0 to n−1 and play a counting game where one student is eliminated during each counting round. The counting starts from student 0, and every m-th student is eliminated. Write a program that determines which student will remain last.
Input: In the first line of standard input, the starting number of students n (1 ≤ n ≤ 10^5) is given, and in the second line the length of the counting m (2 ≤ m ≤ n).
Output: Print the number of the remaining student to standard output.
Example:
Input
8
3
Output
6
Explanation:
The students sitting in a circle at the beginning and after each elimination are:
0 1 2 3 4 5 6 7
0 1 3 4 5 6 7
0 1 3 4 6 7
1 3 4 6 7
1 3 6 7
3 6 7
3 6
6
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
    int m; cin >> m;
    queue<int> q;
    forn(i, n)
    	q.push(i);
	while(q.size() > 1)
	{
		forn(i, m-1)
		{
			q.push(q.front());
			q.pop();
		}
		q.pop();
	}
	cout << q.front() << endl;
}
