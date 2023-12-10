/*
Task: Sports Training

The water polo players of the "Dolphins" club have organized training sessions lasting n days. On the first day of training, each water polo player swims a meters, and each subsequent day they swim d meters more than the previous day. Write a program to determine how many total kilometers each water polo player of the "Dolphins" club swims during these preparations.

Input:
The first line of the standard input contains the number of days of preparation n (n ≤ 105). Each subsequent line of the standard input represents data for one water polo player (at most 105). Two numbers are entered per line separated by a space: the number of meters the water polo player swims on the first day of preparation a (a ≤ 3000), and the number of meters they swim more each day compared to the previous day d (d ≤ 1000).

Output:
On the standard output, for each water polo player, display the total number of kilometers they swim during the preparation.

Example:
Input:
10
500 100
400 20
Output:
9.50
4.9
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

float calculate(int n, int a, int d)
{
    return (float(n) / 2) * (2 * a + (n - 1) * d);
}


int main()
{
    int n; cin >> n;
    int a, d;
    while(cin >> a >> d)
    {
        cout << calculate(n, a, d) / 1000 << endl;
    }
}
