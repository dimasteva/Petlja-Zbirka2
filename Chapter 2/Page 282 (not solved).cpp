/*
Task: Optimal Service
The planned distances that a driver needs to cover with a truck over the next n days are given. Element a0 represents the planned distance for the first of the n days, a1 for the second day, and so on. It is necessary to perform truck servicing in a way that the total sums of covered distances before and after servicing differ minimally. Servicing is done at the end of each working day. If there are two days with the same minimum difference, servicing is done on the earlier day. Write a program that determines on which day the servicing should be performed.

Input: The first line of the standard input contains a natural number n (1 < n ≤ 50000). The next n lines contain one natural number each (between 1 and 1000), representing the planned distances sequentially for each day.

Output: Print on the standard output, in a single line, the ordinal number of the day after which the servicing should be done.

Example:
Input
5
100
120
50
150
70
Output
1
*/
