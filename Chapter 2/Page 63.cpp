/*
Task: Number of Increasing Segments
Given an array a of integers, of length n. Write a program that determines the number of ways we can choose increasing segments in the array.
An increasing segment consists of consecutive elements of the array a[p] < a[p+1] < ... < a[q], where 0 ≤ p < q < n.

Input: The first line of the standard input contains a natural number n (2 ≤ n ≤ 10000), the number of elements in the array. In each of the next n lines of the standard input, there is one element of the array.

Output: Print on the standard output in a single line the number of increasing segments in the given array.

Example:
Input
5
1
3
4
-2
10
Output
4
Explanation
These are the arrays [1, 3], [1, 3, 4], [3, 4], [-2, 10].

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


int main()
{
	int n;
    cin >> n;
    int sum = 0, cnt = 0;
    int last = 0;
    cin >> last;
    forn(i, n - 1)
    {
        int c;
        cin >> c;
        if (c > last)
            cnt++, sum += cnt;
        else
            cnt = 0;
        last = c;
    }
    cout << sum << endl;
}
