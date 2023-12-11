/*
Task: Missing Number

In an array of numbers from 0 to n, exactly one number is missing. Write a program that, without storing the array elements, reads numbers from the input and efficiently determines the missing number.

Input: The standard input first contains the number n (1 = n = 10^9), and then the described array of numbers (numbers are listed in one line, separated by a single space).

Output: Print the missing element to the standard output.

Example:
Input:
5
0 4 2 5 1
Output:
3

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll CalculateSum(int n)
{
	return n * (n + 1) / 2;
}

int main()
{
	int n;
	cin >> n;
	
	ll sum = 0;
	
	vector <int> a(n);
	for (int i = 0; i < n; i++)
		{cin >> a[i]; sum += a[i];}
		
	cout << CalculateSum(n) - sum << endl;
}
