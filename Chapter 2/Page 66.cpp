/*
Task: Property 132
A sequence a0, a1, ..., an−1 satisfies the 132-property if there exists a triple of indices 0 ≤ i < j < k < n such that ai < ak < aj. Write a program that checks whether the sequence satisfies the 132-property.

Input: The standard input contains the number of elements in the sequence, n (3 ≤ n ≤ 105), followed by n elements of the sequence (separated by spaces).

Output: Print "da" (yes) or "ne" (no) to the standard output depending on whether the sequence satisfies the 132-property or not.

Example 1:
Input
4
1 2 3 4
Output
ne

Example 2:
Input
4
3 1 4 2
Output
da
Explanation
For example, the elements 3, 4, 2 satisfy the 132-property.

Example 3:
Input
7
9 11 8 9 10 7 9
Output
da
Explanation
For example, the elements 9, 11, 7 satisfy the 132-property.
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

int sol()
{
    
}

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    
    int ai = a[0];
    for (int j = 1; j < n; j++)
    {
        int mn = min(a[j], ai);
        int aj = a[j];
        ai = mn;

        if (aj == ai)
            continue;
        
        for (int k = j + 1; k < n; k++)
            if (a[k] > ai && a[k] < aj)
                {cout << "da"; return 0;}
    }
    cout << "ne" << endl;
}
