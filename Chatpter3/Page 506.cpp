/*
Task: Smart Stock Trading
The prices of stocks over several days are given. Write a program that determines the maximum profit that can be achieved by buying the stock on one day and selling it on a subsequent day. If the stock prices are strictly decreasing, the profit is 0.
Input: The standard input contains an integer n (2 ≤ n ≤ 50000), followed by n lines each containing one positive number representing the stock price.
Output: Print the maximum profit.
Example
Input
7
3
5
8
4
2
6
9
Output
7
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n)          for (int i = 0; i < int(n); i++)
#define forn1(i, n)          for (int i = 1; i < int(n); i++)
#define pb                  push_back
#define MOD                 1000000007 // 998244353
#define FIO                 ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define all(c) (c).begin(), (c).end()

int maxProfit(vector<int>& prices, int start, int end) {
    if (end - start < 1) {
        return 0;
    }

    if (end - start == 1) {
        return max(prices[end] - prices[start], 0);
    }

    int mid = start + (end - start) / 2;

    int maxProfitLeft = maxProfit(prices, start, mid);
    int maxProfitRight = maxProfit(prices, mid + 1, end);

    int minPriceLeft = prices[start];
    for (int i = start + 1; i <= mid; i++) {
        minPriceLeft = min(minPriceLeft, prices[i]);
    }

    int maxPriceRight = prices[mid + 1];
    for (int i = mid + 2; i <= end; i++) {
        maxPriceRight = max(maxPriceRight, prices[i]);
    }

    int maxProfitMiddle = maxPriceRight - minPriceLeft;

    return max(max(maxProfitLeft, maxProfitRight), maxProfitMiddle);
}

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int result = maxProfit(prices, 0, n - 1);
    cout << result << endl;

    return 0;
}
