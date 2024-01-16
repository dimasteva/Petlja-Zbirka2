/*
Task: Full figurine
A social game is played by k players, and each player starts with k figurines, where all figurines of one player must be of the same strength, while the strengths of figurines from different players are different. Figurines are available in unlimited quantities, with a known sequence of strengths of available figurines. Write a program that determines the maximum number of players k who can play the game so that the difference between the total strength of all figurines of any two players does not exceed the specified limit.

Input: The standard input contains a number n (1 ≤ n ≤ 105), and then on the next line, n different strengths of available figurines are read (natural numbers between 1 and 105). The next line contains the limit (a natural number between 1 and 1012).

Output: Print two numbers separated by a space on the standard output – the number k and the minimum difference in total strengths of figurines when playing with k players.

Example:
Input
5
5 4 2 7 3
15

Output
4 12

Explanation:
If players take four figurines with strengths 5, 4, 2, and 3, the maximum difference in the strengths of players' figurines will be 4 * 5 - 4 * 2 = 12. If 5 players were to play, they would have to take figurines with a strength of 7, and the maximum difference would be 5 * 7 - 5 * 2 = 25, which exceeds the allowed limit.
*/
