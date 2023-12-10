/*
Task: Smallest Number Not a Sum of Set Elements

Given is a set of natural numbers (provided in the form of a sorted array). Determine the smallest natural number that is not the sum of some elements of that set (each element of the set can participate in the sum only once).

Input:
Read a number n (1 ≤ n ≤ 103) from the standard input, followed by a sorted array of n distinct natural numbers less than 104.

Output:
Print to the standard output the smallest natural number that is not the sum of some elements of that set.

Example:
Input:
8
1 2 4 7 15 32 35 48

Output:
30
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n; cin >> n;
    vector <int> v(n);
    for (int &x : v)
        cin >> x;
    
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > sum + 1)
            break;
        sum += v[i];
    }
    cout << sum + 1 << endl;
}