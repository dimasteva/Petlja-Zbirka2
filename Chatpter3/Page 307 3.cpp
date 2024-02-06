/*
Task: Reading Until Zero

Enter integers until zero is entered. Write a program that displays the count of entered numbers, excluding zero.

Input: Each line of the standard input, except the last one, contains an integer different from zero. The last line contains zero.

Output: Print on the standard output the count of entered numbers, excluding zero, in the first line.

Example 1:
Input
5
-675
123
0

Output
3

Example 2:
Input
0

Output
0
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
int input()
{
    int c; cin >> c;
    if (c == 0)
        return 0;
    return 1 + input();
}

int main()
{
    cout << input() << endl;
}
