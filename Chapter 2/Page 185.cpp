/*
Task: Permutation Check
Lenka was assigned the task of programming a function that "shuffles" a given array of numbers, i.e., determines its random permutation. Lenka wrote her function, ran it on a certain number of test cases, but when she received the output results, she couldn't immediately tell if her function was correct. Write a program to help her by inputting the initial array of elements and the array obtained by shuffling. Check if the second array is a permutation of the first, i.e., if it could be obtained from the first by changing the order of its elements.

Input: Two arrays of natural numbers are input from the standard input. For each array, the number of elements is entered (at most 50000), followed by the elements, each on a separate line.

Output: Print "da" on the standard output if the second array is obtained by shuffling the first; otherwise, print "ne".

Example:
Input
5
1
3
2
4
3
5
4
3
2
3
1
Output
da
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
    FIO;
    int n; cin >> n;
    map<int, int> m1, m2;
    forn(i, n)
    {
        int c; cin >> c;
        m1[c]++;
    }
    int k; cin >> k;
    forn(i, k)
    {
        int c; cin >> c;
        m2[c]++;
    }

    for (auto itr : m1)
        if (itr.second != m2[itr.first])
            {cout << "ne"; return 0;}

    for (auto itr : m2)
        if (itr.second != m1[itr.first])
            {cout << "ne"; return 0;}
    
    cout << "da";
}
