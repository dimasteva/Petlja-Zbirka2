/*
Task: Difference of Adjacent Digits k
Write a program that, for given n and k, displays all natural n-digit numbers such that the difference between any two adjacent digits is equal to the given number k (0 ≤ k ≤ 4). For example, in the number 5753, the difference between any two adjacent digits is 2.
Input: The first line of standard input contains a natural number n (0 < n < 10), and the second line contains a natural number k (0 ≤ k ≤ 9).
Output: Display the requested numbers in ascending order, each number on a separate line.
Example
Input
3
2
Output
131
135
202
242
246
313
353
357
420
424
464
468
531
535
575
579
642
646
686
753
757
797
864
868
975
979
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

void rec(string& s, int n, int k, int curr)
{
    if (s.size() == n)
    {
        cout << s << endl;
    } else
    {
        
        if (curr - k >= 0)
        {
            s += to_string(curr - k);
            rec(s, n, k, curr - k);
            s.pop_back();
        }
        if (curr + k <= 9 && k != 0)
        {
            s += to_string(curr + k);
            rec(s, n, k, curr + k);
            s.pop_back();
        }
    }   
}

int main()
{
    int n, k; cin >> n >> k;
    string s;
    for (int i = 1; i <= 9; i++)
    {
        s = to_string(i);
        rec(s, n, k, i);
    }
}
