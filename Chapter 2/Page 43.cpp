/*
Task: Breads

Each man carries two breads, each woman one, and each child half a bread. They have a total of n breads. Write a program that reads a natural number n and prints the number of solutions for the number of men, women, and children.

Input: Read a number n (1 ≤ n ≤ 10^9) from the standard input.

Output: Print the number of solutions to the standard output.

Example 1:
Input:
5
Output:
2
Explanation:
Possible solutions are (1, 2, 2) and (0, 5, 0).

Example 2:
Input:
12
Output:
5

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	  int n; cin >> n;
    int cnt = 1;
    cnt += n / 3;
    cout << cnt << endl;
}
