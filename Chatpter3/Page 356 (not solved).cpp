/*
Task: P-Q Knights
Write a program that determines the minimum number of (P, Q) knights needed to control (visit) all fields on a chessboard of dimensions nxm.

A (P, Q) knight is a chess piece that moves in one step P squares horizontally and Q squares vertically, or Q squares horizontally and P squares vertically. For example, a (1, 2) knight is a standard chess knight.

A piece or group of pieces control a field if they can reach it in zero or more moves. For example, to control a standard 8x8 chessboard, two (1, 1) knights are needed (similar to bishops, but moving for one square).

Input: The first line of standard input contains the number of rows in the matrix m (2 ≤ m ≤ 20), the second line contains the number of columns n (2 ≤ n ≤ 20), the third line contains the jump length P, and the fourth line contains the jump length Q.

Output: A natural number representing the minimum number of (P, Q) knights.

Example:
Input
8
8
3
5
Output
10
*/
