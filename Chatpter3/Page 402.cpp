/*
Task: Next Partition
Partitions of a number n represent its decomposition into addends whose value is between 1 and n. For example, the number 10 can be partitioned as 5+2+2+1. Each partition can be normalized by assuming, for example, that the addends are sorted in non-decreasing order. Write a program that, given a partition, determines the next partition in lexicographic order.

Input: The standard input will contain a normalized partition, where the addends are separated by the + character (their sum is less than 1000).

Output: Print to standard output the next normalized partition in lexicographic order (in one line, with the addends separated by the + character), or the word "no" if such a partition does not exist.

Example:
Input
5+2+2+1
Output
5+3+1+1
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
    vector<int> partition;
    
    while (true) {
        int x;
        cin >> x;
        partition.push_back(x);
        char c = cin.get();
        if (c != '+')
            break;
    }
    
    if (nextPartition(partition)) {
        cout << partition[0];
        for (int i = 1; i < partition.size(); i++)
            cout << "+" << partition[i];
        cout << endl;
    } else {
        cout << "ne" << endl;
    }
    
    return 0;
}
