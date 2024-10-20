/*
Task: Non-decreasing distances of adjacent elements  
Write a program that rearranges the elements of a given array so that, after calculating the array of absolute differences between adjacent elements of the resulting array, a non-decreasing sequence is obtained.  
Input: The length of the array `n` (1 ≤ n ≤ 50000) is read from the standard input, followed by the elements of the array (integers between −10⁹ and 10⁹, each on a separate line).  
Output: Print the elements of the array in the order obtained after the required rearrangement, separated by a single space. If there are multiple such arrangements, print any.  
Example  
Input  
6  
3  
-2  
4  
5  
10  
-8  
Output  
4 3 -2 5 -8 10
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
    vector<int> b(n);
    int inc = 0;
    int l = 0, r = n - 1;
    while(l <= r)
    {
    	b[inc++] = a[r--];
    	b[inc++] = a[l++];	
	}
	for (int i = n - 1; i >= 0; i--)
		cout << b[i] << " ";
}
