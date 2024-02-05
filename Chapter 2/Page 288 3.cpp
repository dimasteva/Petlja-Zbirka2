/*
Task: Gifts in the Backpack
Nenad has traveled to Paris and wants to buy gifts for his parents. Since he is traveling with a low-cost airline, there is a limit to the weight he can carry in his backpack. He will buy a gift for his father in one store and another gift for his mother in another store. Write a program that, based on the known weights and prices of the gifts in both stores, helps Nenad buy the most valuable gifts for his parents (considering their total price).

Input: The input is entered from the standard input, providing data on products in two stores. For each store, the number of products n is entered (1 ≤ n ≤ 105), and then in the next n lines, two integers each between 1 and 109 are entered, representing the weight and then the price of the product. After that, the total weight of gifts that can be carried in the backpack is entered (an integer between 1 and 2 · 109).

Output: Print to the standard output the maximum possible sum of prices for the first and second gifts that can be carried in the backpack.

Example
Input
3
2 4
3 6
4 5
3
2 3
3 2
4 5
6

Output
9
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

typedef pair<int, int> Product;

vector<Product> readProducts() {
    int n;
    cin >> n;
    vector<pair<int, int>> products(n);
    for (int i = 0; i < n; i++) {
        int price, weight;
        cin >> price >> weight;
        products[i] = make_pair(price, weight);
    }
    return products;
}

int main() {
    vector<Product> products1 = readProducts();
    vector<Product> products2 = readProducts();
    int maxWeight;
    cin >> maxWeight;

    sort(begin(products1), end(products1));
    sort(begin(products2), end(products2));

    int n1 = products1.size(), n2 = products2.size();

    vector<int> maxPriceUpTo2(n2 + 1);
    maxPriceUpTo2[0] = 0;
    for (int i = 1; i <= n2; i++)
        maxPriceUpTo2[i] = max(maxPriceUpTo2[i-1], products2[i-1].second);

    int maxPrice = 0;

    int i1 = 0, i2 = n2-1;
    while (i1 < n1 && products1[i1].first < maxWeight) {
        while (i2 >= 0 && products1[i1].first + products2[i2].first > maxWeight)
            i2--;

        if (i2 < 0)
            break;

        maxPrice = max(maxPrice, products1[i1].second + maxPriceUpTo2[i2+1]);

        i1++;
    }

    cout << maxPrice << endl;

    return 0;
}
