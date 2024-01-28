/*
Task: Maximum Segment Sum
Write a program that determines the maximum sum of a segment (subarray of consecutive elements) of a given array.

Input: Enter the number n (1 ≤ n ≤ 50,000) from the standard input, followed by n integers between -10 and 10, with each number on a separate line.

Output: Print the requested sum to the standard output.

Example:
Input
6
2
-3
4
-1
3
-2
Output
6
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

int main() {
  FIO;
  int n;
  cin >> n;

  int prefix_sum = 0;
  int min_prefix_sum = prefix_sum;
  int max_sum = 0;

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    prefix_sum += x;
    
    int segment_sum = prefix_sum - min_prefix_sum;
    
    if (segment_sum > max_sum)
      max_sum = segment_sum;

    if (prefix_sum < min_prefix_sum)
      min_prefix_sum = prefix_sum;
  }

  cout << max_sum << endl;

  return 0;
}
