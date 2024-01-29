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
#define FIO \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

typedef pair<int, int> Product;

vector<Product> readProducts() {
    int n;
    cin >> n;
    vector<Product> products(n);
    for (int i = 0; i < n; i++) {
        int weight, price;
        cin >> weight >> price;
        products[i] = make_pair(weight, price);
    }
    return products;
}

int main() {
    FIO;

    vector<Product> products1 = readProducts();
    vector<Product> products2 = readProducts();
    int maxWeight;
    cin >> maxWeight;

    sort(begin(products2), end(products2));

    vector<int> maxPriceUntil(products2.size() + 1);
    maxPriceUntil[0] = 0;

    for (size_t i = 1; i <= products2.size(); i++)
        maxPriceUntil[i] = max(maxPriceUntil[i - 1], products2[i - 1].second);

    int maxPrice = 0;

    for (const auto& p1 : products1) {
        auto p2Boundary = upper_bound(begin(products2), end(products2), 
                                      maxWeight - p1.first,
                                      [](int weight, const Product& p) {
                                          return weight < p.first;
                                      });

        int p2 = distance(begin(products2), p2Boundary);

        if (p2 > 0)
            maxPrice = max(maxPrice, p1.second + maxPriceUntil[p2]);
    }

    cout << maxPrice << endl;

    return 0;
}
