/*
Task: Ranking of each element

After a computer science competition, a list of students with scores is known (each student has a different score), but the ranking (ordinal number of each student) is unknown.
Write a program that determines the ranking for each student and prints a report on the ranking, with students displayed in the same order as in the initial list with scores.

Input: The standard input includes the number n, followed by data for n students (for each student, the name and score are given on separate lines).

Output: For each student, print their name and ranking on separate lines to standard output.

Example

Input
5
Pera 85
Ana 93
Jelena 90
Mika 72
Lidija 75

Output
Pera 3
Ana 1
Jelena 2
Mika 5
Lidija 4
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

    vector <pair<int, string>> students(n);
    map<int, int> studentPoints;
    forn(i, n)
    {
        string name;
        int points;
        cin >> name >> points;
        students[i] = make_pair(points, name);
        studentPoints[points] = 0;
    }

    int cnt = 0;
    for (auto& itr : studentPoints)
        itr.second = n - cnt++;

    forn(i, n)
        cout << students[i].second << " " << studentPoints[students[i].first] << endl;
}
