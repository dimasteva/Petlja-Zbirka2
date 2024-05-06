/*
Task: Number of Inversions
Write a program that determines the number of inversions in an array (positions 0 ≤ i < j < n, such that ai > aj).
Input: The standard input consists of:
- An integer n (1 ≤ n ≤ 105), followed by n integers, each on a separate line.
Output: Print to standard output only the requested number of inversions.
Example
Input
5
3
1
4
2
5
Output
3
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

int inv(vector<int>& a, int left, int right, vector<int>& b)
{
    if (left >= right)
        return 0;
    int mid = left + (right - left) / 2;
    int num = 0;
    num += inv(a, left, mid, b);
    num += inv(a, mid + 1, right, b);

    int sl = left, sr = mid + 1, index = 0;
    while(sl <= mid && sr <= right)
    {
        if (a[sl] <= a[sr])
            b[index++] = a[sl++];
        else
        {
            num += mid - sl + 1;
            b[index++] = a[sr++];
        }
    }

    while(sl <= mid)
        b[index++] = a[sl++];
    while(sr <= right)
        b[index++] = a[sr++];
    
    copy(begin(b), next(begin(b), right - left + 1), next(begin(a), left));
    return num;
}

int inv(vector<int>& a)
{
    vector<int> temp1(a.size()), temp2(a.size());
    copy(all(a), begin(temp1));
    return inv(temp1, 0, a.size() - 1, temp2);
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    forn(i, n)
        cin >> a[i];
    
    cout << inv(a);
}
