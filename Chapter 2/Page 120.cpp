/*
Task: Barcode Verification
In a store, there are many types of products, and their barcodes are known. The manufacturer wants to know how many types of his products are sold in that store. If the list of all product codes in the store is given in sorted order, and the list of all product codes from the manufacturer is delivered in unsorted order, write a program that determines the required number.

Input: The standard input provides the number n (1 ≤ n ≤ 50000), followed by n natural numbers (up to six digits), separated by spaces. These numbers represent the product barcodes in the store and are sorted in ascending order. After that, product codes from the manufacturer are read until the end of the input (up to six-digit natural numbers, each in a separate line).

Output: Print on the standard output the number of products from the manufacturer that are already sold in the store.

Example
Input
5
1 3 5 6 7
2
3
4
5
8

Output
2
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
    int n; cin >> n;
    vector <int> a(n);
    for (int &x : a)
        cin >> x;
    
    int c;
    int cnt = 0;
    while(cin >> c)
        cnt += binary_search(all(a), c);

    cout << cnt << endl;
}
