/*
Task: Evil Teacher
The evil teacher Navi has decided to get back at his students for disrupting class. The next homework he assigns will be done in pairs. The teacher knows how many hours each student needs to complete their part of the assignment, and the time required for a pair of students to complete the assignment is the sum of the times of those two students. The teacher wants to determine how many maximum hours he can assign for the homework (because he wants to conceal his evil intentions and appear fair) so that at least one pair of students cannot complete the assignment, regardless of how the students are paired.
Input: The input reads an even number of students n (1 ≤ n ≤ 10^6). Then, n natural numbers are read, representing the number of days required for each student to complete the assignment.
Output: Print one natural number representing the number of days the teacher should set as the deadline for completing the assignment.
Example 1
Input
6
5 7 2 6 4 6
Output
10
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
    vector<int> a(n);
    for (int& x : a)
    	cin >> x;
    sort(all(a));
    int mx = 0;
    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
    	mx = max(mx, a[i] + a[j]);
	}
	cout << mx - 1 << endl;
}
