/*
Task: First Non-Divisible
Consider the sequence of numbers 210, 2310, 390, 30, 510, 66, 6, 138, 46, 106, 59, 17, 23. It is interesting for several reasons. For example, the first five numbers are divisible by 10, and after that, no number is divisible by 10. The first ten numbers are even, and after that, all numbers are odd. The first eight numbers are divisible by 6, and after that, no number is divisible by 6. The first two numbers are divisible by 210, and after that, no number is divisible by 210, and so on. Try to find more patterns like this. Write a program that, for each entered divisor, determines how many numbers in the sequence are divisible by it. Assume that the stated pattern holds for each entered divisor.

Input: The standard input reads the number n (1 ≤ n ≤ 105), followed by n natural numbers (less than 1018) separated by a single space. After that, divisors are entered until the end of the input, each on a separate line. For each divisor, it is guaranteed (and it is not necessary to check) that the sequence contains first the numbers divisible by it, followed by numbers that are not divisible by it.

Output: For each entered divisor, print on a separate line the number of elements in the sequence that are divisible by it.

Example:
Input
13
210 2310 390 30 510 66 6 138 46 106 59 17 23
10
2
6
2
4
15
Output
5
10
8
10
0
5
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
	vector <ll> a(n);
	for (ll &x : a)
		cin >> x;
	
	ll d;
	while(cin >> d)
	{
		auto itr = upper_bound(all(a), 0,
								[d](ll _, ll x) {
									return x % d != 0;	
								});
		cout << distance(begin(a), itr) << endl;
	}
}
