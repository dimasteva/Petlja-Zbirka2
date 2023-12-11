/*
Task: Number of Divisible Numbers in Range

Write a program that determines how many numbers divisible by k exist in the interval [a, b].

Input: The standard input contains three integers, each on a separate line.
• a (0 = a = 10^9)
• b (a = b = 10^9)
• k (1 = k = 10^9)

Output: Print the requested integer to the standard output.

Example:
Input:
30
53
5
Output:
5
Explanation:
The numbers are 30, 35, 40, 45, and 50.
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main()
{
	int a, b, k;
	cin >> a >> b >> k;
	
	int first = a / k;
	int second = b / k;
	cout << second - first + 1;
}
