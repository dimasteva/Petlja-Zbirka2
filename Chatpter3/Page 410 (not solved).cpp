/*
Here's a translation of the problem statement into English:

Task: K-th heavy word
A word is "light" if it contains two adjacent substrings of the same letters (two consecutive identical substrings). Otherwise, the word is "heavy." Examples of "light" words are BBA (substring is B), ABCDACABCABA (substring is CAB), BACBAC (substring is BAC), and examples of "heavy" words are D, DC, CBABCBA. Write a program that, for a given natural number n and a natural number k, determines the k-th "heavy" word in lexicographic order obtained from the first n capital letters of the English alphabet. An empty word is considered heavy and is considered as the zeroth word.
Input: The first line of standard input contains a natural number n (2 ≤ n ≤ 26), the second line contains a natural number K (1 ≤ K ≤ 105).
Output: Display the requested word in one line of standard output. If the requested word does not exist, output the message "ne postoji" (does not exist).
Example 1
Input
2
6
Output
BAB
Example 2
Input
2
7
Output
ne postoji (does not exist)
Example 3
Input
3
12
Output
ABACABCACBA
*/
