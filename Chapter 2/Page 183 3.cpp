/*
Task: Largest Repeated Element

Write a program that determines the largest number that appears at least twice in an array or states that such a number does not exist.

Input: Read the number n (1 ≤ n ≤ 50000) from the standard input, followed by the next n lines of n integers between 1 and 50000.

Output: Print the desired number to the standard output or the text "nema" if all elements of the array are distinct.

Example 1:
Input
6
3
8
2
2
3
5
Output
3

Example 2:
Input
3
1
2
3
Output
nema

Example 3:
Input
6
3
3
2
2
1
1
Output
3
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    vector<int> arr(n);
    set<int> s;
    int mx = -1;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(s.count(arr[i]) > 0) // If the number is already in the set
            mx = max(mx, arr[i]); // Update the maximum repeated number
        else
            s.insert(arr[i]); // If the number is not in the set, insert it
    }

    cout << (mx == -1? "nema" : to_string(mx)) << endl;
}
