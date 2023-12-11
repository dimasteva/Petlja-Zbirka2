/*
Task: Arithmetic Square

Numbers from 0 to n^2 - 1 are arranged in a square. For example, for n = 5, the following square is obtained:
0 1 2 3 4
5 6 7 8 9
10 11 12 13 14
15 16 17 18 19
20 21 22 23 24

Write a program that calculates the sum of numbers in a given row and a given column of the square (and we will count them from zero).

Input: The following integers are read from the standard input (each in a separate line).
- n - the dimension of the square (1 < n = 10^9)
- i - the row and column number for which the sum is required (0 = i < n)

Output: Print two integers to the standard output, each on a separate line:
- the sum of the numbers in the i-th row of the square, and
- the sum of the numbers in the i-th column of the square.
If these sums are greater than or equal to 10^9, print their last 9 digits.

Example:
Input:
5
1
Output:
35
55
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ColumnSum(int n, int i)
{
	ll a1 = i;
	
	ll sum = n * (2 * a1 + (n - 1) * n) / 2;
	
	return sum;
}

ll RowSum(int n, int i)
{
	ll a1 = i * n;
	
	ll sum = float(n) * (2 * a1 + (n - 1)) / 2;
	
	return sum;
}


int main()
{
	int n, i;
	cin >> n >> i;
	
	cout << RowSum(n, i) << endl;
	cout << ColumnSum(n, i) << endl;
}
