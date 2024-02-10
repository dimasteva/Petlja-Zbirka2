/*
Task: Average of Excellent Students
Given the average grades of n students in a class, write a program to determine the average of the average grades of all excellent students in that class.

Input: The first line of standard input contains a natural number n (1 ≤ n ≤ 100) representing the number of students. In the next n lines, there is a real number in the interval [2, 5]. These numbers represent the average grades of the students.

Output: On the first line of standard output, display the average of the average grades of excellent students in the class rounded to two decimal places. If there are no excellent students, print "-".

Example 1:
Input
4
3.5
4.75
3
4.5

Output
4.62

Example 2:
Input
4
3.5
3.75
2.80
4.35

Output
-
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

void avg(int n, double &sum, int &cnt)
{
    if (n > 0)
    {
        double c; cin >> c;
        if (c >= 4.50)
            sum += c, cnt++;
        return avg(n - 1, sum, cnt);
    }
}

int main()
{
    int n; cin >> n;
    double sum = 0;
    int cnt = 0;
    avg(n, sum, cnt);
    if (sum == 0)
        cout << "-";
    else
        cout << fixed << setprecision(2) << sum / cnt;
}
