/*
Task: Sweets for All the Money
Along one street, children sell sweets. Jovana has G dinars and wants to spend them by walking along the street, buying exactly one sweet from each child in order (no child will be skipped). If the prices of all the sweets are known, and the starting position from which Jovana begins her purchase is known, determine the number of sweets that Jovana will buy in this way.

Input: The standard input consists of the number of children selling sweets, n (1 ≤ n ≤ 5 × 10^4), followed by an array containing the prices of sweets (positive natural numbers less than 100). After that, the number of queries k is entered (1 ≤ k ≤ 5 × 10^4), followed by the next k lines of queries containing the position of the first child Jovana will visit (positions are numbered from zero), and then the amount of dinars Jovana has.

Output: For each query, print the number of sweets that Jovana will buy on a separate line.

Example:
Input
7
3 5 1 2 3 1 4
4
3 1
2 5
2 13
0 10
Output
0
2
5
3
Explanation:
In the first query, Jovana has one dinar and starts from the child selling sweets for 2 dinars, so she cannot buy any sweets.
In the second query, Jovana has five dinars and buys sweets costing 1 and 2 dinars.
In the third query, Jovana has 13 dinars and buys sweets costing 1, 2, 3, 1, and 4 dinars.
In the fourth query, Jovana has 10 dinars and buys sweets costing 3, 5, and 1 dinar.
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

using namespace std;

int main() {
    FIO;
    int n;
    cin >> n;
    vector<int> prices(n);
    for(int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    vector<int> prefixSum(n+1, 0);
    for(int i = 0; i < n; i++) {
        prefixSum[i+1] = prefixSum[i] + prices[i];
    }

    int k;
    cin >> k;
    while(k--) {
        int start, money;
        cin >> start >> money;

        int left = start, right = n, candies = 0;
        while(left <= right) {
            int mid = left + (right - left) / 2;
            if(prefixSum[mid] - prefixSum[start] <= money) {
                candies = mid - start;
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        cout << candies << endl;
    }

    return 0;
}
