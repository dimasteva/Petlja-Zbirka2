/*
Task: Duplicate Student
On the list of students who have passed the exam, one student has been mistakenly entered twice. Write a program that finds that student.

Input: Names and surnames of students are entered from the standard input (up to 50,000 of them, each on a separate line, separated by a single space).

Output: Print the name and surname of the student who appears twice on the list.

Example:
Input
pera peric
ana anic
pera peric
mika mikic

Output
pera peric
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
    string line, sol;
    map<string, int> m;
    while(getline(cin, line))
    {
        m[line]++;
        if (m[line] == 2)
            sol = line;
    }

    cout << sol << endl;
}
