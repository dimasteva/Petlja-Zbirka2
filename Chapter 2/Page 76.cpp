/*
Task: Sorting Competitors
Given an array of competitors, each competitor is known by their name and the number of points earned in the competition. Write a program that sorts the array of competitors in non-decreasing order of points, and if two competitors have the same number of points, then sort them in non-increasing order of names.

Input: The first line of the standard input contains a natural number n (n ≤ 50000). The next n lines contain the elements of the array. For each competitor, one line contains their name (up to 20 characters in length) and the number of points (a natural number in the range [0, 10000]) earned by the competitor, separated by a single space.

Output: Print the elements of the sorted array of competitors on the standard output. For each competitor, display their name and the number of points on one line, separated by a single space.

Example:
Input
5
Maja 56
Marko 78
Krsto 23
Jovan 78
Milica 89
Output
Milica 89
Jovan 78
Marko 78
Maja 56
Krsto 23
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

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparePairs(const pair<string, int> &x, const pair<string, int> &y) {
    if (x.second == y.second)
        return x.first < y.first;
    else
        return x.second > y.second;
}

int main() {
    int n;
    cin >> n;
    vector<pair<string, int>> a(n);
    for (pair<string, int> &x : a)
        cin >> x.first >> x.second;
    
    sort(a.begin(), a.end(), comparePairs);

    forn(i, n)
        cout << a[i].first << " " << a[i].second << endl;
}
