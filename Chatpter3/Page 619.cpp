/*
Task: Little Postman  
Jovica earns pocket money by delivering packages to his neighbors. He starts from his house and needs to deliver the packages to other houses arranged along the street and then return home. For each house, the distance from the start of the street is known. He would cover the shortest distance if he delivered the packages in order to his neighbors along the street. Since Jovica wants to stay in good physical shape, he runs while delivering the packages and wants to arrange the deliveries to cover the longest distance possible. Write a program that determines the maximum distance he can travel.  
Input: The input first includes the number of houses to which packages need to be delivered (including Jovica's house), followed by the distances of those houses from the start of the street.  
Output: Print the greatest distance that Jovica can travel while delivering the packages.  
Example 1  
Input  
5  
7 3 6 10 2  
Output  
24  
Explanation  
There are several ways for Jovica to cover 24 distance units. For example, if his house is at position 3, he can visit the houses in the order 3, 7, 2, 10, 6, and return to 3.  
Example 2  
Input  
7  
3 5 11 4 2 17 9  
Output  
56  
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
    for (int& x : a)
    	cin >> x;
    sort(all(a));
    int i = 0, j = n - 1;
    ll sum = 0;
    while(i < j)
    {
    	sum += a[j] - a[i];
    	i++;
    	sum += a[j] - a[i];
    	j--;
	}
	cout << sum + a[j + (n % 2 == 0)] - a[0];
}

