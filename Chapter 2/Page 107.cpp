/*
Task: Nearest Rooms
Two guests have arrived at a hotel and wish to stay in rooms that are as close to each other as possible, so they can work together in one of those rooms during the evening. If there are multiple such rooms, they prefer to be farther away from the reception, i.e., in rooms with higher room numbers, to avoid noise disturbance. If the list of available rooms is known at that moment, write a program that determines the room numbers the guests should be assigned.

Input: The first line of the standard input contains the number n (1 ≤ n ≤ 105), and then in the following lines, there are the numbers of available rooms (one in each line) – all numbers are distinct, but their order is arbitrary.

Output: Print on the standard output the room numbers for the guests (first the smaller number, then the larger one), separated by a single space.

Example
Input
7
18
6
25
11
4
1
16
Output
16 18
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
    
    int room1 = 0, room2 = 0;
    int diff = INT_MAX;
    for (int i = 0; i + 1 < n; i++)
    {
        if (a[i + 1] - a[i] <= diff)
        {
            room1 = a[i];
            room2 = a[i + 1];
            diff = a[i + 1] - a[i];
        }
    }
    cout << room1 << " " << room2;
}
