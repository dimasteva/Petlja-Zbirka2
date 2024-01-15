/*
Task: i-th in its Place

Write a program that checks if there is a position i in a strictly increasing array such that the value at position i is equal to i, i.e., ai = i (positions are counted from zero).

Input: The standard input reads the number n (0 ≤ n ≤ 105), followed by a strictly increasing array of n integers (each on a separate line).

Output: Print on the standard output the index i such that ai = i, or the text "nema" if such an index does not exist in the array. If there are multiple such indices in the array, print the smallest one.

Example:
Input
6
-3
-1
1
3
5
7
Output
3
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] -= i;
    }

    auto it = lower_bound(a.begin(), a.end(), 0);

    if (it != a.end() && *it == 0)
        cout << distance(a.begin(), it) << endl;
    else
        cout << "nema" << endl;

    return 0;
}
