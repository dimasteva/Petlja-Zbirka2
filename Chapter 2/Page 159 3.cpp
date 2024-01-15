/*
Task: Minimum of Rotated Sorted Array

A sorted array of integers, where all elements are distinct, is rotated k places to the left, creating a cyclic array that satisfies the condition xk < xk+1 < ... < xn−1 < x0 < ... < xk−1. An example of such an array is 11 13 15 19 24 1 3 8 9. Write a program that finds the smallest element in such an array. Try to ensure that the minimum is found in O(log n) time complexity after reading the elements.

Input: The standard input reads the number n (1 ≤ n ≤ 50000), followed by n array elements (each on a separate line).

Output: Print on the standard output the smallest element in the array.

Example:
Input
9
11
13
15
19
24
1
3
8
9
Output
1
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
	int n; cin >> n;
	vector <int> a(n);
	for (int &x : a)
		cin >> x;
	
	auto it = lower_bound(all(a), 0, 
							[n, a](int val, int index) {
								 return (index + 1 < n) ? val >= a[index + 1] : false;
							});
	
	cout << ((a[0] < *it)? a[0] : *it) << endl;
}
