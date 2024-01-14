/*
Task: N-th Day of Training

On the planet of superheroes, water polo players participate in preparations for a competition lasting n days. On the first day of training, each water polo player swims a meters, and each subsequent day they swim d meters more than the previous day. Write a program that determines, for each water polo player in the club, how many meters they swim on the last day of preparation.

Input:
The first line of the standard input contains the number of days of preparation n (n = 105). Each subsequent line of the standard input represents data for one water polo player (at most 105). Three numbers are entered per line separated by spaces: the number of meters the water polo player swims on the first day of preparation a (a = 3000), and the number of meters they swim more each day compared to the previous day d (d = 1000).

Output:
On the standard output, for each water polo player, display how many meters they swim on the last day of preparation.

Example:
Input:
10
500 100
400 20
Output:
1400
580

*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
        ll n;
        cin >> n;
        ll a, d;
        while(cin >> a >> d)
        	cout << a + (n - 1) * d << endl;
}
