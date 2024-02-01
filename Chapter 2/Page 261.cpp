/*
Task: Merging
In the school of little yellow ants, the teacher reviewed the test tasks. First, he reviewed the students who worked on group A, and then those who worked on group B. He organized the results for each group and sorted the ants based on the number of points they earned. Write a program that helps him obtain a unique sorted list of all students from the ordered list of students who worked on tasks from group A and from the ordered list of students who worked on tasks from group B.

Input: Read from the standard input, the number of students m who worked on group A (5 ≤ m ≤ 25000), followed by the non-decreasing sorted array of points of these students (elements in one line, separated by a single space). After that, enter the number of students n who worked on group B (5 ≤ n ≤ 25000), followed by the non-decreasing sorted array of points of these students (elements in one line, separated by a single space).

Output: Print to the standard output the non-decreasing sorted array of points for all students together, separated by a single space.

Example:
Input
4
1 3 5 7
3
2 4 5
Output
1 2 3 4 5 5 7
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
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
    int m; cin >> m;
    vector <int> b(m);
    for (int &x : b)
        cin >> x;
    int i = 0, j = 0;
    
    while(i < n)
    {
        if (j >= m)
            {cout << a[i++] << " "; continue;}
        if (a[i] < b[j])
        cout << a[i++] << " ";
        else
            cout << b[j++] << " ";
    }
    while(j < m)
        cout << b[j++] << " ";
}
