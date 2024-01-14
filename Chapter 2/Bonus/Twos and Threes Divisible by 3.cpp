/*
Twos and Threes Divisible by 3

Time: 1s
Memory: 64mb
Input: standard input
Output: standard output 

In the given array of natural numbers of length n, determine the number of groups consisting of two or three elements such that the sum of all elements in the group is divisible by 3. For example, in the array [2, 1, 3, 10], there are 4 such groups: [2, 1], [2, 10], [2, 1, 3], [2, 3, 10].

Input
The first line of the standard input contains the number of elements in the array n (1 ≤ n ≤ 50000). The next n lines contain the elements of the array in order (natural numbers between 0 and 1000).

Output
Print on the standard output the number of desired groups in the array in a single line.

Example
Input
4
2
1
3
10
Output
4
*/
#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n), cnt(3, 0);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
        cnt[arr[i] % 3]++;
    }

    long long res = 0;
    // groups of 2
    res += (long long)cnt[0]*(cnt[0]-1)/2;
    res += (long long)cnt[1]*cnt[2];

    // groups of 3
    res += (long long)cnt[0]*(cnt[0]-1)*(cnt[0]-2)/6;
    res += (long long)cnt[1]*cnt[2]*cnt[0];
    res += (long long)cnt[1]*(cnt[1]-1)*(cnt[1]-2)/6;
    res += (long long)cnt[2]*(cnt[2]-1)*(cnt[2]-2)/6;

    cout << res << endl;
    return 0;
}
