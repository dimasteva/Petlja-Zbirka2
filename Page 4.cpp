/*
Title: 1.3.1 Proof of Correctness for Recursive Functions
Problem: Define a function that determines the minimum of a non-empty array of numbers and prove its correctness.
*/

#include <bits/stdc++.h>
using namespace std;

int minElement(const vector <int> a, int n)
{
    int c = a[0];
    for (int i = 1; i < n; i++)
    {
        c = min(c, a[i]);
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    cout << minElement(a, n);
}