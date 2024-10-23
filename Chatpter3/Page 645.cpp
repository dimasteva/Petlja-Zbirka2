/*
Task: Sorting - All Before Smaller or All Before Larger  
The numbers in the array have the property that for each element, either all the elements before it are smaller than it, or all the elements before it are larger than it. For example, the array `5, 8, 12, 4, 2, 13, 19, 1` satisfies this property. Write a program that sorts this array in linear complexity.  
Input: The input consists of a number `n` (1 ≤ n ≤ 10⁵), followed by `n` elements of the array (the elements are given in one line, separated by spaces).  
Output: Print the sorted elements of the array to standard output (separated by spaces).  
Example  
Input  
8  
5 8 12 4 2 13 19 1  
Output  
1 2 4 5 8 12 13 19  
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
    FIO
    int n; cin >> n;
    priority_queue<int, vector<int>, greater<int>> minHeap;
    forn(i, n)
    {
    	int x; cin >> x;
    	minHeap.push(x);
	}
	while(!minHeap.empty())
	{
		cout << minHeap.top() << " ";
		minHeap.pop();
	}
}
