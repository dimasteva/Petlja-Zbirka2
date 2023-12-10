/*
Write a program that reads an array of integers and then transforms it so that the elements are divided into three parts based on the specified values A and B. In the first part, the elements are smaller than the specified value A (values from the interval [−∞, A)), in the second part, the elements are greater than or equal to the specified value A and smaller than or equal to the specified value B (values from the interval [A, B]), and in the third part, the elements are greater than the specified value B (values from the interval (B, +∞)). The order of elements within the parts does not matter. Read the elements into an array and then rearrange the order of elements in that array (do not use additional arrays).

Input: The standard input contains the number of elements in the array, N, in one line, followed by the array elements separated by spaces in the next line. The last two lines contain integers A and B separated by a space, and A < B.

Output: Print the elements of the resulting array to the standard output (it is possible to print the elements of each of the three groups in a separate line, separated by spaces, or it is possible to print the entire array in one line or in multiple lines).

Input

10
1 3 5 4 8 5 7 2 3 6
3
5

Output

1 2
5 3 5 3
7 6 8
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void DutchNationalFlagAlgorithm(int n, vector <int> &v, int a, int b)
{
    int low = 0, mid = 0, high = n - 1;
    while (mid <= high)
    {
        if (v[mid] < a)
            {swap(v[low], v[mid]); low++, mid++;}
        else if (v[mid] >= a && v[mid] <= b)
            mid++;
        else
            {swap(v[mid], v[high]); high--;}
    }
}


int main()
{
    int n; cin >> n;

    vector <int> v(n);
    for (int &x : v)
        cin >> x;

    int a, b; cin >> a >> b;

    DutchNationalFlagAlgorithm(n, v, a, b);

    int endls = 0;

    for (int x : v)
    {
        if (x >= a && endls == 0)
            {cout << endl; endls++;}
        else if (x > b && endls == 1)
            {cout << endl; endls++;}
        cout << x << " ";
    }
}