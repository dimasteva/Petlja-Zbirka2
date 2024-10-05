/*
Task: Smallest Number by Concatenating Multiple Numbers  
Given an array of numbers \( a_i \) where \( i = 0, 1, \ldots, n-1 \). The concatenation of two numbers \( x \) and \( y \) is defined as the number \( xy \), which is obtained by appending the digits of \( y \) after the digits of \( x \) (for example, concatenating the numbers 123 and 45 gives 12345). Determine the smallest number that can be obtained by concatenating all the numbers in the array \( a_i \), where \( i = 0, 1, \ldots, n-1 \).  
Input: The first line of standard input contains the number of elements in the array \( n \) (2 ≤ \( n \) ≤ 1000), followed by \( n \) lines each containing one natural number between 1 and \( 10^6 \).  
Output: Print the required smallest number in a single line of standard output.  
Example 1  
Input  
5  
32  
11  
987  
12  
3  
Output  
1112323987  
Example 2  
Input  
2  
91919  
919191  
Output  
91919191919  
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
    vector<string> a(n);
    forn(i, n)
    	cin >> a[i];
    sort(all(a), [](const string& x, const string& y)
    {
        return x + y < y + x;
    });
	
	forn(i, n)
	{
		cout << a[i];
	}
}
