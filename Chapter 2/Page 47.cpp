/*Task: Amicable Numbers
Numbers are amicable if the sum of divisors of the first number is equal to the second number, and the sum of divisors of the second number is equal to the first number (the sum of divisors includes the number 1, but not the number itself). Write a program that prints all pairs of amicable numbers such that both numbers are within a given interval.

Input: The program reads numbers a and b (1 ≤ a ≤ b ≤ 500000) from standard input.

Output: Print all requested pairs to standard output, sorted in ascending order by the first element, so that in each pair, the first number is less than or equal to the second.

Example 1
Input
1
1000
Output
6 6
28 28
220 284
496 496

Example 2
Input
300000
400000
Output
308620 389924
356408 399592
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

vector <int> SumOfDivisors(int n)
{
    vector <int> a(n + 1, 1);
    for (int i = 2; i <= n; i++)
    {
        for (int j = 2 * i; j <= n; j += i)
            a[j] += i;
    }
    return a;
}

int main()
{
	int a, b;
    cin >> a >> b;
    vector <int> sum = SumOfDivisors(b);
    for (int i = a; i <= b; i++)
    {
        if (sum[i] <= b && i <= sum[i] && i == sum[sum[i]])
            cout << i << " " << sum[i] << endl;
    }
}
