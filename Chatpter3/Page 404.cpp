/*
Task: All Partitions
Partitions of a number n represent its decomposition into addends whose value is between 1 and n. For example, the number 10 can be partitioned as 5 + 2 + 2 + 1. Each partition can be normalized by assuming, for example, that the addends are sorted in non-decreasing order. Write a program that prints all partitions of a given number.

Input: Read from the standard input a number n (1 ≤ n ≤ 25).

Output: Print to standard output all normalized partitions of the number n, sorted lexicographically in ascending order.

Example:
Input
5
Output
1 1 1 1 1
2 1 1 1
2 2 1
3 1 1
3 2
4 1
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

bool nextPartition(vector<int>& partition) {
    int k = partition.size();
    
    if (k == 1)
        return false;
    
    int i;
    int sum = partition[k - 1];
    for (i = k - 2; i > 0 && partition[i] == partition[i - 1]; i--)
        sum += partition[i];
    
    partition.resize(i + 1);
    
    partition[i]++;
    
    for (int m = 0; m < sum - 1; m++)
        partition.push_back(1);
    
    return true;
}

int main() {
    int n; cin >> n;
    vector<int> partition(n, 1);
    cout << partition[0];
        for (int i = 1; i < partition.size(); i++)
            cout << " " << partition[i];
        cout << endl;
    while (nextPartition(partition)) {
        cout << partition[0];
        for (int i = 1; i < partition.size(); i++)
            cout << " " << partition[i];
        cout << endl;
    }
    
    return 0;
}
