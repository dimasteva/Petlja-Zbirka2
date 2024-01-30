/*
Task: Maximum GCD of the Array after One Element Replacement
Write a program that determines the maximum possible greatest common divisor (GCD) of the elements in an array if exactly one element in the array is allowed to be replaced with any value.

Input: Read from the standard input, the number n (3 ≤ n ≤ 105), and then in the next line, n natural numbers less than 10^15.

Output: Print to the standard output the required GCD.

Example 1
Input
3
6 7 8
Output
2
Explanation: If we replace the number 7 with the number 2, we get the array 6, 2, 8, whose GCD is 2. It is not possible to get a GCD greater than 2.

Example 2
Input
3
12 18 17
Output
6
Explanation: We can replace the element 17 with, for example, the number 30, and then the GCD of the array 12, 18, 30 is equal to 6. It is not possible to get a GCD greater than 6.
*/

#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    vector<long long> prefixGCD(n), suffixGCD(n);
    prefixGCD[0] = a[0];
    for (int i = 1; i < n; i++)
        prefixGCD[i] = gcd(prefixGCD[i - 1], a[i]);

    suffixGCD[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--)
        suffixGCD[i] = gcd(suffixGCD[i + 1], a[i]);

    long long maxGCD = max(prefixGCD[n - 2], suffixGCD[1]);
    for (int i = 1; i < n - 1; i++)
        maxGCD = max(maxGCD, gcd(prefixGCD[i - 1], suffixGCD[i + 1]));

    cout << maxGCD << endl;

    return 0;
}
