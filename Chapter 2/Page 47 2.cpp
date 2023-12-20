/*
Task: Greatest Common Divisor

Ants, bees, and mosquitoes are organizing a sports tournament and want to divide into teams so that each team consists only of one type of insect, all teams have the same number of members (to qualify representatives from each species for the common tournament after the qualification rounds), and each insect is included in exactly one team. If the number of insects of each of the three species is known, write a program that determines the maximum possible number of members for each team.

Input: The program reads three numbers from standard input, each in the range [1, 2 · 109], each on a separate line: the number of ants, bees, and mosquitoes.

Output: Print one integer to standard output - the requested size of the teams.

Example
Input
20
30
40
Output
10
*/
#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int euclid(int a, int b)
{
    while(a != b)
        if (a > b)
            a-=b;
        else
            b-=a;
    return a;
}

int main()
{
	int a, b, c;
    cin >> a >> b >> c;
    cout << euclid(euclid(a, b), c);
}
