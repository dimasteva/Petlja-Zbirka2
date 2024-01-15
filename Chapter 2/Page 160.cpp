/*
Task: Search in Rotated Sorted Array

A sorted array of integers, where all elements are distinct, is rotated k places to the left, creating a cyclic array that satisfies the condition xk < xk+1 < ... < xn−1 < x0 < ... < xk−1. An example of such an array is 11 13 15 19 24 1 3 8 9. Write a program that efficiently performs a search in such an array.

Input: The standard input reads the number n (1 ≤ n ≤ 105), followed by n array elements (each on a separate line). After that, the input reads the number m (1 ≤ m ≤ 50000). In the next m lines, m integers are read, representing the numbers to be searched in the array.

Output: For each of the entered numbers, print 0 if the number belongs to the array, and 1 if the number does not belong to the array (print each digit on a separate line).

Example:
Input
5
6
9
1
3
4
3
7
4
2
Output
0
1
0
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

bool check(const vector<int>& a, int x) {
    int n = a.size();
    int l = 0, d = n-1;
    while (l <= d) {
        int s = l + (d-l)/2;
        if (a[s] == x)
            return true;
        if (l < s && a[l] < a[s-1]) {
            if (a[l] <= x && x <= a[s-1])
                d = s-1;
            else
                l = s+1;
        } else {
            if (s == d)
                return false;
            if (a[s+1] <= x && x <= a[d])
                l = s+1;
            else
                d = s-1;
        }
    }
    return false;
}

int main()
{
    int n; cin >> n;
    vector<int> a(n);
    for (int &x : a)    
        cin >> x;
    
    int t; cin >> t;
    while(t--)
    {
        int c; cin >> c;
        if (check(a, c))
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
