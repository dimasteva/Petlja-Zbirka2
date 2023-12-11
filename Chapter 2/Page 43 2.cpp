/*
Task: Divisible Around a Number

Given integers n and k, write a program that determines the largest integer l ≤ n divisible by k and the smallest integer d ≥ n divisible by k.

Input: Two integers are entered from the standard input (each on a separate line).
- n (0 ≤ n ≤ 100000)
- k (1 ≤ k ≤ 10000)

Output: Print the two requested integers to the standard output, each on a separate line.

Example 1:
Input:
23
5
Output:
20
25

Example 2:
Input:
49
7
Output:
49
49
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	int n; cin >> n;
    int k; cin >> k;
    if (k > n)
    {
        cout << "none" << endl << k << endl;
        return 0;
    }
    int left = n % k;
    cout << n - left << endl << n + (left == 0? 0 : k - left) << endl;
}
