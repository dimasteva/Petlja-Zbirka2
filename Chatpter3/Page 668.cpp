/*
Task: Suspicious Transactions  
The bank wants to alert customers about suspicious activities on their accounts. For each transaction, the median value \( m \) of the previous \( d \) transactions is observed, and if the current transaction is greater than or equal to double the value of \( m \), a warning is issued. The median of a series can be calculated by finding the middle element in the sorted series (if the number of elements is even, the arithmetic mean between the two middle elements is taken). Write a program that determines the number of warnings that the bank will send based on the list of transactions.  
Input: A single integer \( n \) (5 ≤ \( n \) ≤ 100,000) is read from standard input, which determines the total number of transactions, then the number \( d \) (1 ≤ \( d \) ≤ \( n \)), and then \( n \) transaction values (natural numbers between 1 and 200). All numbers are on separate lines.  
Output: Write a single natural number to standard output that represents the number of suspicious transactions.  
Example  
Input  
8  
3  
2  
5  
3  
4  
3  
6  
2  
9  
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

int d;
vector<int> transactionCount(201, 0);

double findMedian()
{
	int sum = 0;
	int median1 =  -1, median2 = -1;
	
	for (int i = 0; i < transactionCount.size(); i++)
	{
		sum += transactionCount[i];
		if (median1 == -1 && sum >= (d / 2) + (d % 2))
			median1 = i;
		if (median2 == -1 && sum >= (d / 2 + 1))
		{
			median2 = i;
			break;
		}
	}
	if (d % 2 == 0)
		return (median1 + median2) / 2.0;
	else
		return median1;
}

int main()
{
    int n; cin >> n >> d;
    vector<int> transactions(n);
    forn(i, n)
    	cin >> transactions[i];
    
    forn(i, d)
    	transactionCount[transactions[i]]++;
    
    int alerts = 0;
    for (int i = d; i < n; i++)
    {
    	double median = findMedian();
    	if (transactions[i] >= 2 * median)
    		alerts++;
    	
    	transactionCount[transactions[i-d]]--;
    	transactionCount[transactions[i]]++;
	}
	cout << alerts << endl;
}
