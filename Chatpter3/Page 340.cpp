/*
Task: Do Not Contain the Digit 3
Write a program that determines how many natural numbers in the interval [0, n] do not contain the digit 3 in their decimal representation.

Input: The first line of standard input contains a natural number n (n ≤ 2 × 10^9).

Output: Print on standard output the required result.

Example 1:
Input
15

Output
14

Explanation:
In the interval [0, 15], there are 16 numbers, and the numbers 3 and 13 are the only ones containing the digit 3.

Example 2:
Input
999

Output
729

Example 3:
Input
12345

Output
8262
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

bool containsTwoOrMoreThrees(int number) {
    int countThrees = 0;
    while (number > 0) {
        int digit = number % 10;
        if (digit == 3) {
            countThrees++;
            if (countThrees >= 2) {
                return true;
            }
        }
        number /= 10;
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    int t = 1, result = 1;

    while (n > 0) {
        int digit = n % 10;
        if (digit < 3) {
            result = digit * t + result;
        } else if (digit == 3) {
            result = digit * t;
        } else {
            result = (digit - 1) * t + result;
        }
        t = 9 * t;
        n /= 10;
    }

    cout << result << endl;

    return 0;
}
