/*
Task: Segments with a Given Sum in an Array of Natural Numbers
In a given array of positive natural numbers, find all segments (their start and end) whose sum is equal to a given positive number.

Input: The first line of standard input contains a positive natural number z representing the given sum (0 < z < 106). The second line contains the number of elements in the array, N (2 ≤ N ≤ 50000). The following N lines each contain one element of the array (a positive natural number less than 200).

Output: For each segment, print two numbers (integers) separated by a space on a separate line, representing the indices of the start and end of the segment (counting from zero). If there are multiple segments with the given sum, print their indices sorted based on the left end.

Example
Input
125
10
60
40
25
50
50
100
25
35
30
35
Output
0 2
2 4
5 6
6 9
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
    int z; cin >> z;
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    int i = 0, j = 0;
    int sum = a[0];
    while(j < n)
    {
        if (sum < z)
            sum += a[++j];
        else if (sum == z)
        {
            cout << i << " " << j << endl;
            sum -= a[i++];
        } else
        {
            sum -= a[i++];
        }
    }   
}
