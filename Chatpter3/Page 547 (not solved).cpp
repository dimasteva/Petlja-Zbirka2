/*
Task: Binary Sequences Without Two Consecutive 1s - Lexicographical Order

Consider sequences of length n that contain only the elements 0 or 1 and do not contain two consecutive 1s. These sequences can be arranged in lexicographical order. For example, all such sequences of length 3 arranged lexicographically are 000, 001, 010, 100, 101.
Write a program that can calculate the lexicographical rank of a given sequence and, for a given number k, determine the sequence that is the k-th in lexicographical order (numbering starts from zero).

Input: The first line of the input contains a sequence s that contains only 0s and 1s but does not contain consecutive 1s (elements are written next to each other without spaces).
The length of the sequence is between 2 and 35. The next line contains the number n (2 ≤ n ≤ 35) as well as a natural number k, separated by a space.

Output: On the first line of the output, print the lexicographical rank of the sequence s.
On the second line, print the elements of the sequence of length n whose rank is k (or the text ne postoji if the number k is greater than the largest possible rank for sequences of length n).

Example 1
Input:
01001
5 35

Output:
6 
ne postoji

Example 2 
Input: 
01001010
8 35 

Output: 
28 
10000001
*/
