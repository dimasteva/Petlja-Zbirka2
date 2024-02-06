/*
Task: Average of All Numbers Until the End of Input

Read the contestant's scores from the standard input during a programming competition. Write a program that calculates the average score of all contestants.

Input: Each line of the standard input contains an integer between 0 and 100. NOTE: When interactively testing the program, the end of standard input is marked by pressing the combination of keys ctrl + z on Windows or ctrl + d on Linux.

Output: Print on the standard output the average rounded to 5 decimals.

Example:
Input
1
2
3
4

Output
2.50000
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

void calculateAverage(double& sum, int& count) {
    int num;
    if (cin >> num) {
        sum += num;
        count++;
        calculateAverage(sum, count);
    }
}

int main() {
    FIO

    double sum = 0.0;
    int count = 0;

    calculateAverage(sum, count);

    if (count != 0) {
        cout << fixed << setprecision(5) << sum / count << endl;
    }

    return 0;
}
