/*
Task: Optimal Matrix Multiplication

Multiplying matrices of dimensions D1 × D2 and D2 × D3 results in a matrix of dimensions D1 × D3, and to perform this multiplication, D1 · D2 · D3 multiplications of numbers are required.
When it is necessary to multiply a longer sequence of matrices, the efficiency depends on how these matrices are grouped (multiplication is an associative operation and any grouping of multiplications is allowed).
Write a program that determines the minimum number of multiplications of numbers needed to multiply a sequence of matrices of given dimensions.

Input:
From the standard input, first read the number 3 ≤ n ≤ 100, and then the sequence of dimensions D0, D1, D2, … Dn−1. The matrices to be multiplied are of dimensions D0 × D1, D1 × D2, … Dn−2 × Dn−1.

Output:
Print the required minimum number of multiplications to the standard output.

Example

Input 
4
5
4
6
2

Output
88

Explanation: We multiply matrix A of dimensions 5 × 4, matrix B of dimensions 4 × 6, and matrix C of dimensions 6 × 2. To compute the product (AB)C, 5·4·6 + 5·6·2 = 180 operations are needed, and to compute the product A(BC), 4 · 6 · 2 + 5 · 4 · 2 = 88 operations of multiplying numbers are needed.
*/
