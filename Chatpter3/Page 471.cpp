/*
Task: Sorting Numbers
Write a program that sorts a sequence of numbers in non-decreasing order (each subsequent number must be greater than or equal to the previous one).
Input: From the standard input, enter a number n (1 ≤ n ≤ 5 · 104) followed by n natural numbers less than 2n, each on a separate line.
Output: Print the entered numbers in sorted order to the standard output.
Example
Input
5
3
1
6
8
1
Output
1
1
3
6
8
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

void merge(vector<int>&a, int leftA, int rightA, int leftB, int rightB, vector<int>& c, int k)
{
    while(leftA <= rightA && leftB <= rightB)
        c[k++] = a[leftA] < a[leftB]? a[leftA++] : a[leftB++];
    
    while (leftA <= rightA)
        c[k++] = a[leftA++];

    while(leftB <= rightB)
        c[k++] = a[leftB++];
}

void merge_sort(vector<int>& a, int left, int right, vector<int>& temp)
{
    if (left < right)
    {
        int s = left + (right - left) / 2;

        merge_sort(a, left, s, temp);
        merge_sort(a, s + 1, right, temp);

        merge(a, left, s, s + 1, right, temp, left);

        for (int i = left; i <= right; i++)
            a[i] = temp[i];
    }
}

int main()
{
    FIO;
    int n; cin >> n;
    vector<int> a(n);
    forn(i, n)
        cin >> a[i];
    vector<int> temp(n);
    merge_sort(a, 0, n - 1, temp);
    forn(i, n)
        cout << a[i] << endl;    
}
