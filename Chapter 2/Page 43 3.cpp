/*
Task: Maximum Yield

A farmer owns a field with dimensions a × b meters. To facilitate parceling of his field, the numbers a and b are integers. Based on a subsidy, he got the ability to extend the sides of his field by a total of c meters (but in such a way that the field remains of integer dimensions). He wants to do this in a way that maximizes the area, so he can achieve the highest total yield. Write a program that determines the largest possible area of the field after the extension.

Input: Natural numbers a, b, c (a, b, c ≤ 10^9) are entered from the standard input, separated by a single space.

Output: Print the maximum area after the extension to the standard output.

Example 1:
Input:
5 10 3
Output:
80
Explanation:
The dimensions after the extension will be 8 × 10.

Example 2:
Input:
9 10 4
Output:
132
Explanation:
The dimensions after the extension will be 11 × 12.

Example 3:
Input:
14 17 5
Output:
324
Explanation:
The dimensions after the extension will be 18 × 18.

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ll a, b, c;
    cin >> a >> b >> c;

    ll mn = min(a, b);
    ll mx = max(a, b);

    if (mx - mn > c)
    {
        cout << mx * (mn + c);
        return 0;
    }
    c -= (mx - mn);
    mn = mx;
    cout << (mx + c / 2) * (mn + c / 2 + !(c % 2 == 0));
}
