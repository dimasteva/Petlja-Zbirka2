/*
Task: Conference

During a conference, there are n lectures held in a single day. There are m computer companies represented by numbers from 1 to m, and some companies may hold multiple lectures. A conference attendee wants to attend lectures from all companies without leaving the lecture hall. Write a program that determines the minimum number of lectures the attendee needs to listen to in order to hear at least one lecture from each company.

Input: The standard input contains the number of companies m (1 ≤ m ≤ 50) in the first line, the total number of lectures n (1 ≤ n ≤ 50000) in the second line, and the order of company lectures in the third line, with their ordinal numbers (from 1 to m) separated by spaces.

Output: Print the minimum number of lectures the attendee needs to listen to continuously in order to hear at least one lecture from each company. If it is not possible for the attendee to hear lectures from each company continuously, print "ne moze" (without quotes).

Example 1:
Input
4
20
4 2 4 3 3 2 2 4 2 2 3 3 1 3 3 1 4 4 1 4
Output
6
Explanation: It is possible to listen to lectures from companies 4, 2, 2, 3, 3, 1.

Example 2:
Input
3
10
1 2 1 2 1 2 1 2 1 2
Output
ne moze
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

bool found(vector <int> a, int n, int mid, int m)
{
    map <int, int> mp;

    forn(i, n)
    {
        if (i >= mid)
            if (--mp[a[i - mid]] == 0)
                mp.erase(a[i - mid]);
        mp[a[i]]++;
        if (mp.size() == m)
            return true;
    }
    return false;
}

int main()
{
    int m; cin >> m;
	int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)    
        cin >> x;
    
    int start = 0, end = n;
    int mn = INT_MAX;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if (found(a, n, mid, m))
        {
            mn = mid;
            end = mid - 1;
        }
        else
            start = mid + 1;
    }
    if (mn != INT_MAX)
        cout << mn;
    else
        cout << "ne moze";
}

