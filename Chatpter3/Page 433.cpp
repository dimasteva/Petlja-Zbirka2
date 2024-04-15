/*
Task: Arranging n Queens on a Chessboard
Write a program that determines all positions of n queens on an n × n chessboard such that no two queens attack each other. To prevent queens from attacking each other, there must be exactly one queen in each row, and no two queens are in the same column. Therefore, the arrangement is determined by an array of n distinct numbers from 1 to n representing the column numbers in which the queens are located in rows from 1 to n.

Input: Enter the number n from standard input (4 ≤ n ≤ 11).

Output: Print all possible arrangements of queens to standard output (in any order).

Example:
Input:
4

Output:
3 1 4 2
2 4 1 3
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define MOD 1000000007
#define all(c) (c).begin(), (c).end()

bool QueensAttacking(vector<int>& p, int k)
{
    forn(i, k)
    {
        if (p[i] == p[k])
            return true;
        if (abs(k - i) == abs(p[k] - p[i]))
            return true;
    }
    return false;
}

void nQueen(vector<int>& p, int k)
{
    if (k == p.size())
    {
        for (int x : p)
            cout << x + 1 << " ";
        cout << endl;
    } else
    {
        forn(i, p.size())
        {
            p[k] = i;
            if (!QueensAttacking(p, k))
                nQueen(p, k + 1);
        }
    }
}

void nQueen(int n)
{
    vector<int> p(n);
    nQueen(p, 0);
}

int main()
{
    int n; cin >> n;
    nQueen(n);
}
