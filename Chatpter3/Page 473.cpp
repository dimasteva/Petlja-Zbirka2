/*
Task: Median
There are several measures that determine the center of a given series of numbers. The most well-known is the arithmetic mean, or average, however, it is quite sensitive to data errors, and a few elements that significantly deviate from others can greatly alter the average. For example, the average of the numbers 3, 2, 1, 5, 4 is 3, however, if the number 99 is added to them, the average becomes around 19, which is a very large change caused by just one element, which may result from some data error. That's why the median is often considered, which is obtained by sorting the array and considering the middle element (if the total number of elements is odd), or the average of the two middle elements (if the total number of elements is even). For example, if our initial series is sorted, we get 1, 2, 3, 4, 5 and the middle element there is 3, which is also the median, and if 99 is added, then the two middle elements are 3 and 4 and the median is 3.5. Write a function that determines the median of a given series of numbers.

We will test the calculation of the median by applying it to a series of numbers obtained by applying the recursive formula ai+1 = c0 · ai + c1, starting from the given element a0. For example, if a0 = 0, c0 = 4, and c1 = 1, the series obtained is 0, 1, 5, 21, 85,... All arithmetic is performed with unsigned integers modulo 232.

Input: The first line of the standard input contains the number n representing the number of elements in the series whose median needs to be calculated. The second line contains the numbers c0, c1, separated by a single space. The third line contains the number a0.

Output: Print the median value rounded to 2 decimal places to the standard output.

Example 1
Input
5
4 1
0
Output
5

Example 2
Input
10
1664525 1013904223
1
Output
1586537357.00

Explanation:
The series of numbers being analyzed is:
1
1015568748
1586005467
2165703038
3027450565
217083232
1587069247
3327581586
2388811721
70837908

When sorted, the series becomes:
1
70837908
217083232
1015568748
1586005467
1587069247
2165703038
2388811721
3027450565
3327581586

The median is the arithmetic mean between the two middle elements (1586005467 + 1587069247)/2 = 1586537357.
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

int random_value(int i, int j) {
  mt19937_64 random_generator;
  uniform_int_distribution<int> dist(i, j);
  return dist(random_generator);
}

unsigned nthElement(vector<unsigned>& a, int l, int r, int n) {
  while (true) {
    swap(a[l], a[random_value(l, r)]);
    int i = l + 1, j = r;
    while (i <= j) {
      if (a[i] < a[l])
        i++;
      else if (a[j] > a[l])
        j--;
      else
        swap(a[i++], a[j--]);
    }
    swap(a[l], a[j]);
    if (n < j)
      r = j - 1;
    else if (n > j)
      l = j + 1;
    else
      return a[n];
  }
}

unsigned nthElement(vector<unsigned>& a, int n) {
  return nthElement(a, 0, a.size() - 1, n);
}

double median(vector<unsigned>& a) {
  if (a.size() % 2 != 0)
    return nthElement(a, a.size() / 2);
  else
    return ((double)nthElement(a, a.size() / 2 - 1) +
            (double)nthElement(a, a.size() / 2)) / 2.0;
}

int main() {
  int n;
  cin >> n;
  unsigned c0, c1;
  cin >> c0 >> c1;
  vector<unsigned> a(n);
  cin >> a[0];
  for (int i = 1; i < n; i++)
    a[i] = c0 * a[i-1] + c1;
  cout << fixed << showpoint << setprecision(2) << median(a) << endl;
  return 0;
}
