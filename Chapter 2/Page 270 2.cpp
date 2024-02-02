/*
Task: Two-color
Write a program that organizes the elements of an array so that all even elements come first, followed by odd elements, with the order of even and odd elements among themselves not being important. First, read the elements into an array, and then transform that array in linear time (with only one pass through the array).

Input: In the first line of the standard input, enter a natural number n (1 ≤ n ≤ 50000) - the number of array elements. In the next line, enter n natural numbers in the range from 1 to 1000.

Output: Print the elements of the array ordered as required, separated by a single space.

Example
Input
10
2 5 3 6 1 8 9 10 11 4

Output
2 6 8 10 4 5 3 1 9 11
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void organize(int n, vector <int> &v)
{
    int low = 0, high = 0;
    while(high < n)
    {
        if (v[high] % 2 == 1 && v[low] % 2 == 0)
        {
            low = high;
        } else if (v[high] % 2 == 0)
        {
            swap(v[high], v[low]);
            low++;
        }
        high++;
    }
}

int main()
{
    int n; cin >> n;

    vector <int> v(n);
    for (int &x : v)
        cin >> x;

    organize(n, v);

    for (int x : v)
        cout << x << " ";
}
