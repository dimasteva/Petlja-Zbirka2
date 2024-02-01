/*
Task: Common Elements of Three Sorted Arrays
Three local stores sell different products. Each product is characterized by a unique barcode (a natural number less than a billion). If the lists of products sold in these three stores are known (sorted in ascending order by barcodes), write a program that determines the products sold in all three stores.

Input: The first line of the standard input contains a natural number n (n ≤ 50000), representing the number of products in the first store. In the next line, n numbers are input in ascending order, separated by spaces, representing the barcodes of the products from the first store. After that, data for the second store is input in the same format, followed by data for the third store.

Output: Display the barcodes of the products sold in each of the three stores on the standard output, sorted in ascending order, each on a separate line.

Example:
Input
5
1 5 6 7 10
5
4 5 9 10 17
5
4 5 6 10 13
Output
5
10
*/

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define forn(i, n) for (int i = 0; i < int(n); i++)
#define all(c) (c).begin(), (c).end()
#define pb push_back
#define MOD 1000000007 // 998244353
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main()
{
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    int m; cin >> m;
    vector <int> b(m);
    for (int &x : b)
        cin >> x;
    int l; cin >> l;
    vector <int> c(l);
    for (int &x : c)
        cin >> x;

    // Initialize the three pointers
    int i = 0, j = 0, k = 0;

    // Use the three pointers to find common elements
    while (i < n && j < m && k < l) {
        // If a[i], b[j] and c[k] are same
        if (a[i] == b[j] && b[j] == c[k]) {
            cout << a[i] << " ";
            i++; j++; k++;
        }
        // If a[i] is smallest
        else if (a[i] < b[j])
            i++;
        // If b[j] is smallest
        else if (b[j] < c[k])
            j++;
        // If c[k] is smallest
        else
            k++;
    }

    return 0;
}
