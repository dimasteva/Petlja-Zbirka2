/*
Task: Sorting Numbers with Radix Sort
Given an array of natural numbers, implement a program that sorts them using the Radix Sort algorithm.

Input: Enter the number n (1 ≤ n ≤ 50000) from the standard input, followed by n natural numbers between 1 and 999999999 (each on a separate line).

Output: Print these numbers in non-decreasing order to the standard output.

Example:
Input
9
342
43
5432
432
34222
3423
546
6363
636
Output
43
342
432
546
636
3423
5432
6363
34222
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

void DigitSort(vector <int> &a, int n, int d)
{
    int digitFrequency[10] = {0};
    
    forn(i, n)
        digitFrequency[(a[i] / d) % 10]++;

    forn1(i, 10)
        digitFrequency[i] += digitFrequency[i - 1];
    
    vector <int> temp(n);
    for (int i = n - 1; i >= 0; i--)
        temp[--digitFrequency[(a[i] / d) % 10]] = a[i];
    
    a = temp;
}

void RadixSort(vector <int> &a, int n)
{
    int mx = *max_element(all(a));

    for (int d = 1; mx / d > 0; d *= 10)
        DigitSort(a, n, d);
}

int main()
{
    int n; cin >> n;
    vector <int> a(n);
    for (int& x : a)
        cin >> x;
    
    RadixSort(a, n);

    forn(i, n)
        cout << a[i] << endl;
}
