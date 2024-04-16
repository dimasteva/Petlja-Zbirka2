/*
Task: Latin Squares
A Latin square of size n × n contains numbers from 1 to n arranged so that in each row and in each column all elements are different. Write a program that fills in the given partially filled square in all possible ways to form a Latin square.
Input: The standard input reads the dimension n (1 ≤ n ≤ 6), followed by the elements of the square (empty fields are marked with the digit 0).
Output: Print all Latin squares to the standard output (write an empty line after each one).
Example
Input
3
120
000
000
Output
123
231
312

123
312
231
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

int n; 

void print(vector<vector<int>>& a)
{
    forn(i, n)
    {
        forn(j, n)
            cout << a[i][j];
        cout << endl;
    }
    cout << endl;
}

bool check(vector<vector<int>>& a, int x, int y)
{
    forn(i, n)
    {
        if (a[x][i] == a[x][y] && i != y)
            return false;
        if (a[i][y] == a[x][y] && i != x)
            return false;
    }
    return true;
}

void gen(vector<vector<int>>& a, int x, int y)
{
    //print(a);
    if (x == n - 1 && y == n)
    {
        print(a); return;
    }
    if (y == n)
        {gen(a, x + 1, 0); return;}
    else if (a[x][y] != 0)
        {gen(a, x, y + 1); return;}
    else
    {
        forn1(i, n + 1)
        {
            a[x][y] = i;
            if (check(a, x, y))
                gen(a, x, y + 1);
        }
    }
    a[x][y] = 0;
}

int main()
{
    cin >> n;
    vector<vector<int>> v(n, vector<int>(n));
    forn(i, n)
    {
        string s; cin >> s;
        forn(j, n)
            v[i][j] = s[j] - '0';
    }
    
    gen(v, 0, 0);
}
