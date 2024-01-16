/*
Task: Largest Square in Histogram
Write a program that determines the area of the largest square that can be inscribed in a given histogram (the histogram consists of columns with a width of 1).

Input: The standard input contains the number n (1 ≤ n ≤ 50000), representing the number of columns, followed by the heights of the columns (positive integers less than 105, separated by spaces).

Output: Print the area of the largest square.

Example:
Input
5
1 5 4 4 2
Output
9
*/
#include <bits/stdc++.h>

using namespace std;

int largestSquare(vector<int>& heights) {
    int n = heights.size();
    vector<int> left(n), right(n);
    stack<int> s;
    for(int i = 0; i < n; i++) {
        while(!s.empty() && heights[s.top()] >= heights[i])
            s.pop();
        left[i] = s.empty() ? -1 : s.top();
        s.push(i);
    }
    while(!s.empty())
        s.pop();
    for(int i = n - 1; i >= 0; i--) {
        while(!s.empty() && heights[s.top()] >= heights[i])
            s.pop();
        right[i] = s.empty() ? n : s.top();
        s.push(i);
    }
    int maxSquare = 0;
    for(int i = 0; i < n; i++) {
        int len = min(right[i] - left[i] - 1, heights[i]);
        maxSquare = max(maxSquare, len * len);
    }
    return maxSquare;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a)
        cin >> x;
    cout << largestSquare(a);
}
