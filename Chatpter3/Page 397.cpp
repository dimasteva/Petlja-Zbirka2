/*
Task: All palindromes from a given word
The word is represented by the string r written in lowercase English alphabet. Write a program to display all palindromes that can be obtained by rearranging the letters of the given word in lexicographic order.
Input: The first and only line of standard input contains the string r with at most 20 lowercase letters of the English alphabet.
Output: Display the requested palindromes on standard output. If no palindrome can be formed, display a dash -.
Example 1:
Input
racecar
Output
acrerca
arcecra
carerac
craearc
racecar
rcaeacr
Example 2:
Input
abcdecda
Output
-
*/

#include <bits/stdc++.h>

using namespace std;

bool is_palindrome(string s) {
    string r = s;
    reverse(r.begin(), r.end());
    return s == r;
}

bool can_form_palindrome(string s) {
    vector<int> count(26, 0);
    for (char c : s) {
        count[c - 'a']++;
    }
    int odd_count = 0;
    for (int i : count) {
        if (i % 2 != 0) {
            odd_count++;
        }
    }
    return odd_count <= 1;
}

void print_palindromes(string s) {
    if (!can_form_palindrome(s)) {
        cout << '-' << endl;
        return;
    }
    sort(s.begin(), s.end());
    do {
        if (is_palindrome(s)) {
            cout << s << endl;
        }
    } while (next_permutation(s.begin(), s.end()));
}

int main() {
    string s;
    cin >> s;
    print_palindromes(s);
    return 0;
}
