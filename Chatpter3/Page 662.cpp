/*
Task: Updating the Median  
In the statistics office, they want to estimate the average salary as impartially as possible. They concluded that calculating the arithmetic mean might give a slightly distorted picture because a few individuals with very high salaries can significantly raise the average. Therefore, they decided to calculate the median instead, which is obtained by sorting all salaries in non-decreasing order and taking the middle element of that array. If the array has an even number of elements, the median is taken as the arithmetic mean of the two middle elements. For example, the median of the array of numbers 1, 2, 4, 7, 9 is 4 (since it is the middle element), and the median of the array of numbers 1, 2, 4, 5, 7, 9 is 4.5 (as it is the arithmetic mean of the two middle elements 4 and 5). Salary data is coming into the office, and the software must be able to provide the median of all entered salaries at any time.  
Input: Lines are read from standard input until the end of the input. A line either contains the letter d followed by a salary amount (integer), which means a new salary data entry, or it contains the letter m, which means the current median of all entered salaries should be printed to standard output. The first line will surely contain d.  
Output: The required medians are printed to standard output, each on a separate line, rounded to one decimal place.  

Example:  
Input  
d 5  
d 7  
d 6  
m  
d 8  
m  
Output  
6.0  
6.5  
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
    priority_queue<int, vector<int>, greater<int>> right;
    priority_queue<int, vector<int>, less<int>> left;
    
    char c;
    while(cin >> c)
    {
    	if (c == 'd')
    	{
    		int d; cin >> d;
    		if (right.empty())
    			right.push(d);
    		else
    		{
    			if (d <= right.top())
    				left.push(d);
    			else
    				right.push(d);
    			if (left.size() > right.size())
    			{
    				right.push(left.top());
    				left.pop();
				}
				else if (right.size() > left.size() + 1)
				{
					left.push(right.top());
					right.pop();
				}
			}
		} else
		{
			double sol = right.top();
			if ((left.size() + right.size()) % 2 == 0)
				sol = (left.top() + right.top()) / 2.0;
			cout << setprecision(1) << fixed << showpoint << sol << endl;
		}
	}
}
