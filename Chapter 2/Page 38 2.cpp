/*
Task: Number of Substrings Starting and Ending with 1

Given a binary string (a string consisting of characters 0 and 1), write a program that determines the number of segments (substrings of consecutive elements) of length at least 2 that start and end with 1.

Input: The first and only line of the standard input contains a binary string (composed of 0 and 1).

Output: Display the required number of segments in a single line on the standard output.

Example:
Input:
010001001
Output:
3
Explanation:
These are the substrings 10001, 10001001, and 1001.
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll ArithmeticSequence(int x)
{
	return x * (1 + x) / 2;
}

int main()
{
	string s;
	cin >> s;
	
	int countOnes = 0;
	for (int i = 0; i < s.length(); i++)
		countOnes += (s[i] == '1'? 1 : 0);
	
	cout << ArithmeticSequence(countOnes - 1);
}
