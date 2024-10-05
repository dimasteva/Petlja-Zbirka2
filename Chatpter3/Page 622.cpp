/*
Task: Minimum Sum of Two Numbers Formed from Given Digits  
Write a program that determines the minimum possible sum of two numbers formed from the digits of a given array (from 0 to 9). Each element of the array must be used either in one number or the other, and the numbers may start with zero. For example, for the digits 5, 3, 0, 7, 5, the smallest sum is 92 (since 35 + 057 = 92).  
Input: The first line of standard input contains the number of digits n (2 ≤ n ≤ 30), followed by n lines each containing one digit.  
Output: Print the required minimum sum in a single line of standard output.  
Example 1  
Input  
5  
5  
3  
0  
7  
5  
Output  
92  
Example 2  
Input  
6  
1  
2  
3  
4  
5  
6  
Output  
381  
Example 3  
Input  
5  
0  
1  
0  
2  
0  
Output  
3  
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
    vector<char> a(n);
    for (char& x : a)
    	cin >> x;
    int i = 0;
    sort(all(a));
    while(i < n && a[i] == '0')
    	i++;
    string num1 = "0", num2 = "0";
    bool f = true;
    for (; i < n; i++)
    {
    	if (f)
    		num1 += a[i];
    	else
    		num2 += a[i];
    	f = !f;
	}
	cout << stoll(num1) + stoll(num2) << endl;
}
