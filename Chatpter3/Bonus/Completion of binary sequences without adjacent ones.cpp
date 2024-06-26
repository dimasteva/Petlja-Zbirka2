/*
Time: 0.1 s
Memory: 64 MB
Input: Standard input
Output: Standard output

Filling Binary Sequences Without Adjacent Ones

Write a program that, for a partially filled sequence of zeros and ones, prints all possible ways to complete that sequence such that no two adjacent ones exist.

Input:
A string consisting of characters 0, 1, and ., where . represents an empty field to be filled. The number of empty fields is not greater than 30.

Output:
Print all required sequences of zeros and ones obtained by filling in the input string, each on a separate line, in lexicographical order.

Example:

Input:
1...0

Output:
10000
10010
10100
*/

#include <bits/stdc++.h>
using namespace std;

vector<string> sol;

string trans(string& s)
{
    string ret;
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] == '1')
            ret += s[i];
        else
            ret += '0';
    }
    return ret;
}

void generisi(string& s, int i)
{
    while(i >= 0)
    {
        if (s[i] != '.')
            {i--; continue;}
        if (s[i - 1] != '1' && s[i + 1] != '1')
        {
            s[i] = '1';
            sol.push_back(trans(s));
            generisi(s, i - 1);
            s[i] = '.';
        }
        i--;
    }
}


int main()
{
    string s; cin >> s;
    s.insert(0, 1, '0');
    s += '0';
    sol.push_back(trans(s));
    generisi(s, s.size() - 2);
    sort(begin(sol), end(sol));
    for (string s1 : sol)
        cout << s1 << endl;
}
