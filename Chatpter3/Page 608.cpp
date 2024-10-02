/*
Task: Frog on Stones

Stones are placed along the positive part of the x-axis, and the coordinate x of each stone is known. The frog starts jumping from the first stone located at the origin and wants to reach the last stone in as few jumps as possible. In each jump, it can skip a maximum distance of r (but it can also jump less if needed). Write a program that determines whether the frog can reach the last stone and, if so, the minimum number of jumps required.

Input: From the standard input, the number n (1 ≤ n ≤ 50000) is given, followed by n lines each containing one positive integer (representing a sorted list of the coordinates of the stones). In the last line, a positive integer r is given.

Output: On the standard output, print the minimum number of jumps required for the frog to reach the last stone or -1 if it is not possible.

Example

Input
5
0
3
8
14
16
10

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
#define MOD 1000000007
#define FIO                \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);

int main()
{
    FIO
    int n; 
    cin >> n;
    
    vector<int> stones(n);
    for (int i = 0; i < n; i++) {
        cin >> stones[i];
    }
    
    int r; 
    cin >> r;

    int jumps = 0;
    int currentPos = 0;

    while (currentPos < n - 1)
	{
        int maxReach = stones[currentPos] + r;
        
        auto it = lower_bound(stones.begin() + currentPos + 1, stones.end(), maxReach + 1);
        
        if (it == stones.begin() + currentPos + 1)
		{
            cout << -1 << endl;
            return 0;
        }
        
        currentPos = distance(stones.begin(), it) - 1;
        jumps++;
    }
    
    cout << jumps << endl;
}
