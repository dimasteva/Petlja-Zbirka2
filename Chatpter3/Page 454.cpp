/*
Task: Number of expressions from given value
Given a string s containing only digits (0, ..., 9) and a natural number x. Write a program to determine the number of expressions that can be obtained by inserting the operators +, −, and · into the string s so that the value of the resulting expression is equal to x. Additionally, each operand in that expression must be a correctly formatted natural number (multi-digit numbers cannot start with zero).
Input: The first line of the standard input contains the string s, and the second line contains the natural number x.
Output: Display the number of desired expressions on the standard output in a single line.
Example
Input
1009
10
Output
8
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

int numberOfWays(const string& digits, int pos,
                 long long value, long long lastSummand,
                 int targetValue) {
    if (pos == digits.length())
        return value == targetValue ? 1 : 0;

    int totalWays = 0;

    long long number = 0;
    for (int i = pos; i < digits.length(); i++) {
        if (digits[pos] == '0' && i > pos)
            break;

        number = number * 10 + digits[i] - '0';

        totalWays += numberOfWays(digits, i+1, value + number, number, targetValue);
        totalWays += numberOfWays(digits, i+1, value - number, -number, targetValue);
        totalWays += numberOfWays(digits, i+1, value - lastSummand + lastSummand * number, lastSummand, targetValue);
    }

    return totalWays;
}

int numberOfWays(const string& digits, int targetValue) {
    int totalWays = 0;

    long long number = 0;
    for (int i = 0; i < digits.length(); i++) {
        if (digits[0] == '0' && i > 0)
            break;

        number = number * 10 + digits[i] - '0';

        totalWays += numberOfWays(digits, i + 1, number, number, targetValue);
    }
    return totalWays;
}

int main() {
    string digits;
    cin >> digits;
    int targetValue;
    cin >> targetValue;
    cout << numberOfWays(digits, targetValue) << endl;
    return 0;
}
