/*
Task: Number of elements to the right of a given element greater than or equal to it
Given an array of n integers representing the value of actions of a company during a certain time period. Day d (counted from 0 to n-1) is considered k-successful if after it, no more than k days occurred where the value of the action was strictly greater than or equal to the value during day d. Write a program that determines whether day d was k-successful for various values of d and k.

Input: The standard input reads the number of days n (1 ≤ n ≤ 50000), followed by n distinct integers between 1 and 106 representing the values of the company's actions. After that, the number of queries q (1 ≤ q ≤ 50000) is read, followed by q lines each containing two numbers d (0 ≤ d < n) and k (0 ≤ k ≤ n), separated by a space.

Output: For each of the q queries, print "da" or "ne" on the standard output depending on whether day d was k-successful.

Example
Input
7
30 14 20 15 8 23 25
1
1 2
Output
ne
*/
