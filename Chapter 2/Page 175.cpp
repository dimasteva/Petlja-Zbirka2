/*
Task: Construction
For a long street, permissible locations for construction are known. Each location is given by a single integer, representing the distance of the location from the beginning of the street. It is necessary to build N buildings, but in such a way that adjacent buildings are as far apart from each other as possible. Investors evaluate the quality of the construction plan G (i.e., the choice of N locations) using the distance D(G). The distance D(G) represents the minimum distance between consecutive buildings in the construction plan G. Investors are particularly interested in the maximum possible value of D(G). Write a program that, given the allowed locations and the required number of buildings, prints the largest achievable distance.

Input: The first line contains the number of planned buildings N (2 ≤ N ≤ L), and the second line contains the number of available locations L (2 ≤ L ≤ 105). The next L lines provide the positions of potential construction locations Xi (1 ≤ i ≤ L, 0 ≤ Xi ≤ 109).

Output: Print on the standard output the maximum possible minimum distance between adjacent buildings.

Example:
Input
3
7
9
4
6
2
10
14
12

Output
5

Explanation:
There are 7 locations available for building 3 houses. If they are built at locations 2, 9, and 14, the minimum distance between houses is 5 (a better solution is not possible).
*/
