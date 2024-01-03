/*
Task: Number of competitors above the threshold
The State Commission needs to determine the threshold for the passage of competitors from the regional to the national competition. Since informatics has become a mandatory subject in primary schools, the number of competitors is very large. Administrator Maja, who maintains a table of results, is constantly asked about the number of competitors who would advance if the passing threshold were so and so points (all students whose score is greater than or equal to the threshold advance). She decided to write a program that provides answers to these questions.

Input: The standard input is used to read the number of competitors n (0 ≤ n ≤ 105), and then the scores of the competitors (integers), given in sorted order from highest to lowest. After that, the number m (1 ≤ m ≤ 50000) is read, representing the number of questions Maja needs to answer, followed by m numbers for which she needs to provide the answer of how many competitors would be placed if that number were taken as the threshold. Each number is on a separate line.

Output: Print the requested number of placed competitors for each question on the standard output, each on a separate line.

Example:
Input
5
89
73
73
56
23
4
95
50
70
0
Output
0
4
3
5
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

int main() { 
    int n; cin >> n;
    vector <int> a(n);
    for(int &x : a)    
        cin >> x;
    
    int m; cin >> m;
    while(m--)
    {
        int c; cin >> c;
        cout << distance(a.begin(), lower_bound(all(a), c, greater<int>())) << endl;
    }
}
