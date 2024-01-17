/*
Task: Chef
A chef wants to prepare his favorite specialty for guests at a birthday celebration, which consists of n ingredients. A certain amount of each ingredient (expressed in grams) is required to prepare one serving. Some quantities of certain ingredients already exist in the kitchen, and the rest need to be purchased. All ingredients are available in the store, and each ingredient is available in smaller or larger packaging. The chef has d dinars and wants to spend them in a way that maximizes the number of servings of his favorite dish from the total quantity of ingredients.

Input: The first line of the standard input contains the number of dinars d (1 ≤ d ≤ 107). The second line of the standard input contains the number of ingredients n (1 ≤ n ≤ 100). The next n lines each contain six natural numbers:
- M (10 ≤ M ≤ 100) - the mass of the ingredient needed for one serving (in grams);
- M0 (1 ≤ M0 ≤ 100) - the mass of the ingredient already present in the kitchen (in grams);
- mm (1 ≤ mm < 100) - the mass of the smaller packaging of the ingredient (in grams);
- cm (10 ≤ cm < 100) - the price of the smaller packaging of the ingredient (in dinars);
- mv (mm < mv ≤ 100) - the mass of the larger packaging of the ingredient (in grams);
- cv (cm < cv ≤ 100) - the price of the larger packaging of the ingredient (in dinars).

Output: Print on the standard output the maximum number of servings that the chef can prepare with the available funds.

Example:
Input
100
2
10 8 10 10 13 11
12 20 6 10 17 24

Output
5

Explanation:
For 99 dinars, the chef will buy 3 smaller and one larger packaging of the first ingredient, and one smaller and two larger packagings of the second ingredient (3 * 10 + 1 * 11 + 1 * 10 + 2 * 24 = 99).
The chef will then have 51 grams (8 + 3 * 10 + 1 * 13) of the first ingredient and 60 grams (20 + 1 * 6 + 2 * 17) of the second ingredient, which is enough for 5 servings.
*/
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

struct Ingredient {
    ll M, M0, mm, cm, mv, cv;
};

bool canCook(ll mid, vector<Ingredient>& ingredients, ll d) {
    ll cost = 0;
    for (auto& ingredient : ingredients) {
        ll needed = max(0LL, mid * ingredient.M - ingredient.M0);
        ll costSmall = (needed + ingredient.mm - 1) / ingredient.mm * ingredient.cm;
        ll costLarge = needed / ingredient.mv * ingredient.cv + ((needed % ingredient.mv) ? ingredient.cm : 0);
        cost += min(costSmall, costLarge);
        if (cost > d) return false;
    }
    return true;
}

int main() {
    ll d;
    int n;
    cin >> d >> n;
    vector<Ingredient> ingredients(n);
    for (int i = 0; i < n; i++) {
        cin >> ingredients[i].M >> ingredients[i].M0 >> ingredients[i].mm >> ingredients[i].cm >> ingredients[i].mv >> ingredients[i].cv;
    }

    ll left = 0, right = 1e10;
    while (right - left > 1) {
        ll mid = left + (right - left) / 2;
        if (canCook(mid, ingredients, d)) {
            left = mid;
        } else {
            right = mid;
        }
    }

    cout << left << endl;
    return 0;
}
