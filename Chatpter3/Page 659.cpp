/*
Task: K-th Largest Sum of Pairs from Two Arrays  
Two arrays containing natural numbers are given. Write a program that determines the k-th largest sum that can be obtained by adding one element from the first array and one element from the second array.  
Input: The first line reads the number m (1 ≤ m ≤ 5000), followed by m elements of the first array separated by spaces. The next line reads the number n (1 ≤ n ≤ 5000), followed by n elements of the second array separated by spaces. The elements of both arrays are natural numbers between 0 and 10^6. Finally, the number k (0 ≤ k < mn) is read.  
Output: The output should be the sum located at position k in the array obtained by sorting all pair sums of one element from the first array and one element from the second array in non-increasing order (positions are zero-indexed).  

Example 1:  
Input  
3  
1 5 3  
3  
6 4 2  
4  
Output  
7  
Explanation  
The sums that can be obtained, sorted from largest to smallest, are 5 + 6 = 11, 5 + 4 = 9, 3 + 6 = 9, 5 + 2 = 7, 3 + 4 = 7, 1 + 6 = 7, 3 + 2 = 5, 1 + 4 = 5, 1 + 2 = 3, so the sum at position 4 is 7.  

Example 2:  
Input  
5  
5 3 8 6 1  
6  
1 10 9 7 12 2  
9  
Output  
15  
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
    vector<int> a(n);
    for (int &x : a)
    	cin >> x;
    
    int m; cin >> m;
    vector<int> b(m);
    forn(i, m)
    	cin >> b[i];
    int k; cin >> k;
    
    sort(all(a), greater<int>());
    sort(all(b), greater<int>());
    
    priority_queue<pair<int, int>> pq;
    forn(i, n)
    	pq.emplace(a[i] + b[0], 0);
    
    for (int K = 0; K < k; K++)
    {
    	int j, z;
    	tie(z, j) = pq.top(); pq.pop();
    	
    	if (j + 1 < m)
    		pq.emplace(z - b[j] + b[j+1], j+1);
	}
	cout << pq.top().first;
}
