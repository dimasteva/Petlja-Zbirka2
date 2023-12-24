/*
Task: Most Valuable Items
For each item on sale, a code and price are given. The buyer has a certain amount of dinars at their disposal and wants to buy the most expensive items. They take items in order starting from the most expensive until they run out of money. If there is not enough money for the most expensive item, they take the most expensive one for which they have enough money. Display the codes of the items the buyer is buying and, if there is any left, the remaining amount of money. Note: this strategy does not guarantee that the items purchased will have the overall highest possible value (e.g., if they have 5 dinars and the prices of the items are 4, 3, and 2 dinars, they will only buy the item for 4 dinars, although they could buy items for 3 and 2 dinars).

Input: The first line of the standard input contains the amount of money (a real number) the buyer has, in the second line the number of items, N, and then, in every two lines of the standard input, the code (a string of characters) and the price (a real number) of the item, each in a separate line, for all N items.

Output: In each line of the standard output, display the codes and prices of the purchased items (separated by a space), if any. In the last line, show the remaining amount of money, if any.

Example 1
Input
1250.75
5
item1
1010.30
item2
357.35
item3
725.45
item4
1125.5
item5
115.75
Output
item4 1125.5
item5 115.75
9.50

Example 2
Input
10000
6
item1
3010
item2
3005
item3
5725
item4
1265
item5
2075
item6
385
Output
item3 5725.00
item1 3010.00
item4 1265.00
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

struct Predmet
{
    string id;
    float price;
};

bool Compare(const Predmet &a, const Predmet &b)
{
    return a.price > b.price;
}

int main()
{
    float cash;
    cin >> cash;
    int n;
    cin >> n;
    vector <Predmet> v(n);
    forn(i, n)
    {
        Predmet temp;
        cin >> temp.id >> temp.price;
        v[i] = temp;
    }

    sort(all(v), Compare);
    
    forn(i, n)
    {
        if (cash - v[i].price < 0)
            continue;
        
        cash -= v[i].price;
        cout << v[i].id << " " << fixed << showpoint << setprecision(2) << v[i].price << endl;
    }
    if (cash > 0)
        cout << fixed << showpoint << setprecision(2) << cash << endl;
}
