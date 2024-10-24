/*
Task: Maximum Bijection  
A film producer is organizing a dinner and wants to invite actors. To ensure that the actors feel comfortable at the dinner, the producer wants to make sure that every actor present is a favorite actor of another actor present at the dinner. Each of the n actors, potential guests, has chosen their favorite actor from this group (it is possible that an actor has chosen themselves). Write a program that determines the largest subset of this group of actors who can be invited to the dinner.  
Input: The number n (1 ≤ n ≤ 50000) representing the number of actors who voted is given via standard input, followed by the index numbers of the favorite actor of each actor (all numbers are between 0 and n − 1).  
Output: Print the largest number of actors that can attend the dinner to standard output.  
Example  
Input  
7  
2  
0  
0  
4  
4  
3  
5  
Output  
3  
Explanation  
Actors with numbers 0, 2, and 4 can be invited to the dinner. Actor 0 is the favorite actor of actor 2, actor 2 is the favorite actor of actor 0, and actor 4 is their own favorite.  
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
    int count = n;
    for (int &x : a)
    	cin >> x;
    vector<int> ul(n, 0);
    forn(i, n)
    	ul[a[i]]++;
    queue<int> q;
    forn(i, n)
    	if (ul[i] == 0)
    		q.push(i);
    while (!q.empty())
    {
    	int x = q.front(); q.pop();
        ul[a[x]]--;
    	count--;
    	if (ul[a[x]] == 0)
    	{
    		q.push(a[x]);
		}
	}
	cout << count;
}
