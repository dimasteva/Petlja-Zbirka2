/*
Task: Abacaba
The sequence of letters ABACABADABACABAEABACABADABACABAF ABACA... can be formed in the following way:
1. The sequence starts empty.
2. Append the first capital letter of the English alphabet that does not appear in the formed part of the sequence. Repeat all the letters that appeared before it.
3. Repeat step 2 as needed.

Thus, after the first application of step 2, we get the sequence A, after the second sequence ABA, after the third sequence ABACABA, and so on.

Determine the letter that appears in the n-th position in the sequence, counting positions from 1. The order of letters in the English alphabet is ABCDEFGHIJKLMNOPQRSTUVWXYZ.

Input: One natural number less than 67,108,864.

Output: One capital letter of the English alphabet.

Example 1:
Input
8

Output
D

Example 2:
Input
65

Output
A

Example 3:
Input
100

Output
C
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
    vector <int> a(26);
    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int pw = 1;
    forn(i, 26)
    {
        a[i] = pw;
        pw *= 2;
    }
    int n; cin >> n;
    for (int i = 25; i >= 0; i--)
    {
        if (n % a[i] == 0)
            {cout << chars[i]; break;}
    }
  //or you can just do [cout << (char)('A' + __builtin_ctz(n)) << endl;]
}
