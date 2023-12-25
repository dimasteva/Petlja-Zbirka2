/*
Task: Sorting by Municipalities
The State Commission has compiled a list of all competitors in the country. It is necessary to distribute the list of competitors to each municipality, but in such a way that the order remains the same as on the initial list of the state commission.

Input: Enter the list of competitors from the standard input until the end of the input. For each competitor, enter the name of the municipality and the competitor's code, separated by a single tab character (Tab).
Only ASCII characters are used in the text. Note: during interactive testing, the end of the input can be entered using ctrl + z or ctrl + d.
The number of competitors is at most 105, and the number of municipalities is at most 103, while the length of the competitor's name and municipality is at most 15 characters.

Output: Print lists for all municipalities to standard output, each on a separate line. Municipalities are ordered lexicographically, in ascending order. Each list starts with the name of the municipality followed by a colon. After that, the codes of all competitors are listed, separated by commas. A single space is placed after each punctuation mark (colon and comma).

Example:
Input
vozdovac programmer
svilajnac teamX
vozdovac astro
alibunar mika
svilajnac pera.peric
medijana luke skywalker
Output
alibunar: mika
medijana: luke skywalker
svilajnac: teamX, pera.peric
vozdovac: programmer, astro
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
    map<string, string> m;
    string line, township, username;
    while (getline(cin, line)) {
        istringstream iss(line);

        if (iss >> township) {
            getline(iss, username);
            username = username.substr(username.find_first_not_of(" "), username.find_last_not_of(" ") + 1);

            if (m[township] == "")
                m[township] = username;
            else
                m[township] += ", " + username;
        }
    }
    
    for(auto itr : m)
    {
        cout << itr.first + ": " << itr.second << endl;
    }
}
