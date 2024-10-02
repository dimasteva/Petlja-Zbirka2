/*
Task: Mentors

Competitors on the "Petlja" site solve problems and earn their rating. It has been decided that more experienced competitors will help younger ones by becoming their mentors. For one competitor to be a mentor to another, their rating must be at least twice as high as the first competitor's rating. Given the ratings of all competitors, determine the maximum number of student-mentor pairs that can be formed, where a competitor can simultaneously be both a student and a mentor (a mentor to someone with at least half their rating and a student to someone with at least double their rating), but no competitor can have two students or two mentors.
Input: The first line of the input contains the number of competitors N, followed by N lines, each containing one integer representing the competitor's rating.
Output: Print a single integer representing the maximum number of pairs that can be formed.
Example
Input
6
4
3
10
1
30
40
Output
4
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
    
    vector<vector<bool>> mem(n, vector<bool>(2, false));
    int score = 0;
    for (int i = 0; i < n; i++)
    {
    	int target = 2 * a[i];
    	int it = distance(begin(a), lower_bound(all(a), target));
    	if (it < n && mem[it][1] == false)
    	{
    		score++;
    		mem[i][0] = true;
    		mem[it][1] = true;
		} else
		{
			while(it < n && mem[it][1] == true)
				it++;
			if (it < n && mem[it][1] == false)
	    	{
	    		score++;
	    		mem[i][0] = true;
	    		mem[it][1] = true;
			}
		}
	}
	cout << score;
}
