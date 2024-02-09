/*
Task: Merging
In the school of little yellow ants, the teacher reviewed the test tasks. First, he reviewed the students who worked on group A, and then those who worked on group B. He organized the results for each group and sorted the ants based on the number of points they earned. Write a program that helps him obtain a unique sorted list of all students from the ordered list of students who worked on tasks from group A and from the ordered list of students who worked on tasks from group B.

Input: Read from the standard input, the number of students m who worked on group A (5 ≤ m ≤ 25000), followed by the non-decreasing sorted array of points of these students (elements in one line, separated by a single space). After that, enter the number of students n who worked on group B (5 ≤ n ≤ 25000), followed by the non-decreasing sorted array of points of these students (elements in one line, separated by a single space).

Output: Print to the standard output the non-decreasing sorted array of points for all students together, separated by a single space.

Example:
Input
4
1 3 5 7
3
2 4 5
Output
1 2 3 4 5 5 7
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

void mergeArrays(const vector<int>& groupA, int indexA, const vector<int>& groupB, int indexB,
                 vector<int>& result, int indexResult) {
  if (indexA < groupA.size() && indexB < groupB.size()) {
    if (groupA[indexA] < groupB[indexB]) {
      result[indexResult] = groupA[indexA];
      mergeArrays(groupA, indexA+1, groupB, indexB, result, indexResult+1);
    } else {
      result[indexResult] = groupB[indexB];
      mergeArrays(groupA, indexA, groupB, indexB+1, result, indexResult+1);
    }
  } else if (indexA < groupA.size()) {
    result[indexResult] = groupA[indexA];
    mergeArrays(groupA, indexA+1, groupB, indexB, result, indexResult+1);
  } else if (indexB < groupB.size()) {
    result[indexResult] = groupB[indexB];
    mergeArrays(groupA, indexA, groupB, indexB+1, result, indexResult+1);
  }
}

int main() {
    int sizeA, sizeB, temp;
    vector<int> groupA, groupB, result;

    cin >> sizeA;
    for(int i = 0; i < sizeA; i++) {
        cin >> temp;
        groupA.push_back(temp);
    }

    cin >> sizeB;
    for(int i = 0; i < sizeB; i++) {
        cin >> temp;
        groupB.push_back(temp);
    }

    result.resize(groupA.size() + groupB.size());
    mergeArrays(groupA, 0, groupB, 0, result, 0);

    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}
