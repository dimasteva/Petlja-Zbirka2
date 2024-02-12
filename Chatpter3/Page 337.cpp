/*
Task: Removing Digits in All Ways
Write a program that, for a given natural number n, determines the sum of all numbers that can be obtained by removing some digits from the number n.

Input: Read a number that can have up to 1000 digits from standard input.

Output: Print on standard output the required sum.

Example:
Input
123

Output
177

Explanation:
123 + 12 + 13 + 23 + 1 + 2 + 3 + 0 = 177.
*/

#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

vector<int> add(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    int carry = 0;
    for (size_t i = 0; i < a.size() || i < b.size(); i++) {
        int sum = (i < a.size() ? a[i] : 0) +
                  (i < b.size() ? b[i] : 0) + carry;
        result.pb(sum % 10);
        carry = sum / 10;
    }
    if (carry > 0)
        result.pb(carry);
    return result;
}

vector<int> multiplyByNumber(const vector<int>& a, int b) {
    vector<int> result;
    int carry = 0;
    for (size_t i = 0; i < a.size(); i++) {
        int product = a[i] * b + carry;
        result.pb(product % 10);
        carry = product / 10;
    }
    if (carry > 0)
        result.pb(carry);
    return result;
}

vector<int> readNumber(const string& number) {
    vector<int> result(number.size());
    for (int i = number.size() - 1; i >= 0; i--)
        result.pb(number[i] - '0');
    return result;
}

string printNumber(const vector<int>& number) {
    string s;
    for (int i = number.size() - 1; i >= 0; i--)
        s.pb('0' + number[i]);
    return s;
}

int main() {
    string number;
    cin >> number;
    vector<int> sum;
    sum.pb(0);
    vector<int> twoPower;
    twoPower.pb(1);
    for (char c : number) {
        sum = add(sum, add(multiplyByNumber(sum, 10),
                          multiplyByNumber(twoPower, c - '0')));
        twoPower = multiplyByNumber(twoPower, 2);
    }
    cout << printNumber(sum) << endl;
    return 0;
}
