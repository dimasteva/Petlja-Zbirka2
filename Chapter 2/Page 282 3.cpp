/*
Task: Triplets with Given Sum (3sum)
Programming competitors have their ratings expressed as integers. For the national team competition, schools need to send their three-member teams. However, to make the competition more interesting, the organizers instruct that all teams should be balanced, meaning that each team in the competition has a total rating of zero. If the ratings of all competitors from a school are known, write a program that determines how many ways the school can choose its team.

Input: Read from the standard input the number of competitors n (3 ≤ n ≤ 1000), followed by n distinct integers in the range [-10^6, 10^6], separated by a single space (these are the ratings of the competitors).

Output: Print on the standard output the number of possible three-member teams such that the total rating of those three members is equal to zero.

Example:
Input
9
-8 -5 7 4 1 -2 9 -3 2
Output
4
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

int main()
{
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    sort(all(a));
    int cnt = 0;
    int start = 0, end = n - 1;
    for (int i = 0; i < n - 2; i++)
    {
        int start = i + 1, end = n - 1;
        while(start < end)
        {
            int sum = a[start] + a[end] + a[i];
            if (sum == 0)
            {
                cnt++;
                start++;
                end--;
            }
            else if (sum < 0)
                start++;
            else
                end--;
        }
    }
    cout << cnt;
}
