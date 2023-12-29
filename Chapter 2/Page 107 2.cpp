/*
Task: Largest Subset Containing Consecutive Integers
In an array of integers, find the largest subset of elements that can be arranged in a sequence of consecutive integers. For example, for the array 4, 8, 1, −6, 9, 5, −9, 10, −1, 3, 0, 1, 2, the output should be −1, 0, 1, 2, 3, 4, 5. If there are multiple such subsets, display the first one (the one with the smallest numbers).

Input: The first line of the standard input contains the number of array elements, n (1 ≤ n ≤ 50000), and then the next n lines contain the integer elements of the array −100000 ≤ ai ≤ 100000.

Output: The largest subset of consecutive integers (elements of the given array) arranged in non-decreasing order.

Example:
Input
13
4 8 1 -6 9 5 -9 10 -1 3 0 1 2
Output
-1
0
1
2
3
4
5
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
    
    int start = 0, len = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (abs(a[i + 1] - a[i]) == 1)
        {    
            int tempstart = i;
            int templen = 2;
            i++;
            while(i < n - 1)
            {
                if (a[i + 1] - a[i] == 1)
                    templen++, i++;
                else if (a[i + 1] - a[i] <= 1)
                    i++;
                else
                    break;
            }
            if (templen > len)
            {
                len = templen;
                start = tempstart;
            }
        }
    }
    for (int i = start; i <= start + len; i++)
        if (i != 0 && a[i] != a[i - 1])
            cout << a[i] << endl;
}
