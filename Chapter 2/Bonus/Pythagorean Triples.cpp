/*
Pythagorean Triples

Time: 0,2s
Memory: 64mb
Input: standard input
Output: standard output 

Input:
Read a natural number n (n ≤ 5000) from the standard input.

Output:
Print on the standard output the Pythagorean triples in lexicographical order, each on a separate line, with a single space between the numbers.

Example:
Input
17
Output
3 4 5
5 12 13
6 8 10
8 15 17
9 12 15

Note:
The program should output all Pythagorean triples of natural numbers where a^2 + b^2 = c^2, and additionally, a ≤ b ≤ c, and all three numbers are less than or equal to n.
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int n;
  cin >> n;

  for (int a = 1; 2*a*a <= n*n; a++)
    for (int b = a; a*a + b*b <= n*n; b++) {
      double cr = sqrt(a*a + b*b);
      int c = round(cr);
      if (c == cr)
        cout << a << " " << b << " " << c << " " << endl;
    }
    return 0;
}
