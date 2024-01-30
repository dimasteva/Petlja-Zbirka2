/*
Task: Sum of a Card Subarray
Đurica has found a sequence of n cards. The cards have integers written on them. Given a sequence of cards A, Đurica assigns the value f(A) = A_n−1 − A_0, which is equal to the difference between the values of the first and last card in the sequence.

Đurica wants to remove at most M cards from the sequence. By removing some m cards, where m ≤ M, he obtains a new sequence of cards. He then recalculates the value in the described way. Among all possible choices of m and all possible choices of m cards to be removed, he is interested in the sequence of cards that will have the highest value.

Help Đurica and tell him what is the maximum value. Note that at no point does Đurica change the order of the cards given at the beginning.

Input: The first line of the standard input contains the number n (2 ≤ n ≤ 105), and the next line contains n numbers on the cards, separated by a single space (numbers are between −106 and 106). The third line contains the number M (0 ≤ M ≤ n − 2).

Output: Print to the standard output the maximum value of the function f when between 0 and M cards are removed from the sequence.

Example 1
Input
11
5 1 7 2 5 3 8 2 3 6 5
4
Output
5
Explanation: The maximum value of the function can be obtained, for example, by removing three cards with a value of 5.

Example 2
Input
10
10 9 8 7 6 5 4 3 2 1
3
Output
-6
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
    int n, M;
    cin >> n;
    vector<int> A(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }
    cin >> M;

    int max_value = INT_MIN;
    for(int m = 0; m <= M; m++) {
        for(int i = 0; i <= m; i++) {
            int value = A[n - 1 - (m - i)] - A[i];
            max_value = max(max_value, value);
        }
    }

    cout << max_value << endl;

    return 0;
}
