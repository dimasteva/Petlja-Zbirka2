/*
Task: Sorting by First Letter
Patients have come for a systematic examination. Since there are many of them, they will be examined by several doctors, and students will be divided based on their initials (the initial letters of their first names and last names). The information system is very old, unfortunately, it only uses Latin letters of the English alphabet. The nurse has been tasked with organizing the collected booklets so that first come the booklets for children whose initials are aa, then ab, then ac, and so on, then ba, bb, bc, and so on, up to zy and zz. Within each group (each pair of initials), the order of booklets must remain the same as in the initial sequence.

Input: Names and last names of students are loaded from the standard input, one name and last name in each line, separated by exactly one space, until the end of the input. Note: during interactive testing, the end of the input can be entered using ctrl + z or ctrl + d.

Output: Print all the loaded names and last names in the requested order to the standard output.

Example:
Input
branko zdravkovic
aleksandar aleksic
mirko svetic
aleksije avakumovic
cile petrovic
marko savic
andrea bircanin
Output
aleksandar aleksic
aleksije avakumovic
andrea bircanin
branko zdravkovic
cile petrovic
mirko svetic
marko savic
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define forn1(i, n) for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

bool CompareByFirstCharacter(const pair<string, string> &a, const pair<string, string> &b)
{
    if (a.first[0] != b.first[0])
        return a.first[0] < b.first[0];
    else
        return a.second[0] < b.second[0];
}

int main()
{
    string name, surname;
    vector<pair<string, string>> patients;

    while (cin >> name >> surname)
        patients.pb(make_pair(name, surname));

    stable_sort(all(patients), CompareByFirstCharacter);

    forn(i, patients.size())
        cout << patients[i].first << " " << patients[i].second << endl;

    return 0;
}
