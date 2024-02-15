/*
Task: Towers of Hanoi
From three given pegs, one has n disks of different sizes, and the other two are empty. The disks on the first peg are arranged in size order, with the disk of size n at the bottom and the disk of size 1 on top.
It is necessary to move the disks from the first peg to the third peg using as few moves as possible. When moving the disks, they must be moved one by one, and only a smaller disk can be placed on top of a larger one, not vice versa.
For example, if n = 3, the sequence of moves should be:
Move disk size 1 from peg 1 to peg 3
Move disk size 2 from peg 1 to peg 2
Move disk size 1 from peg 3 to peg 2
Move disk size 3 from peg 1 to peg 3
Move disk size 1 from peg 2 to peg 1
Move disk size 2 from peg 2 to peg 3
Move disk size 1 from peg 1 to peg 3

Write a program that, given the number of disks n, prints the sequence of moves.

Input: Read from standard input the number of pegs n (1 ≤ n ≤ 10).

Output: For each move of one disk, print one line containing the peg number from whose top the disk is moved and the peg number on whose top the disk is moved, separated by a single space.

Example 1
Input
3
Output
1 3
1 2
3 2
1 3
2 1
2 3
1 3

Example 2
Input
2
Output
1 2
1 3
2 3
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
    cin.tie(0); \
    cout.tie(0);

void hanoi(int n, int from, int to, int aux) {
    if (n == 1) {
        cout << from << " " << to << "\n";
        return;
    }
    hanoi(n - 1, from, aux, to);
    cout << from << " " << to << "\n";
    hanoi(n - 1, aux, to, from);
}

int main() {
    FIO

    int n; cin >> n;
    hanoi(n, 1, 3, 2);
    return 0;
}
