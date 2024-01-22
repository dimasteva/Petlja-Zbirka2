/*
Task: Sum of a Series
A group of friends went ice skating. They rented skates, skated for a while, and then decided to warm up with hot tea. They took off their skates, placed them in a pile, but forgot to mark which skates belonged to whom. Since all of them have very similar-sized feet, they agreed that it doesn't matter, and each person can take any pair of skates from the pile. Calculate the probability that none of them received the same skates they used before the tea break, knowing that this probability can be calculated as \(1 - \frac{1}{1!} + \frac{1}{2!} - \frac{1}{3!} + \ldots + (-1)^n\frac{1}{n!}\), where \(n\) is the number of friends.

Input: The standard input contains the number of friends \(n\) (2 ≤ n ≤ 20).

Output: Print to the standard output the requested probability, rounded to 14 decimals.

Example 1:
Input
2
Output
0.50000000000000

Example 2:
Input
10
Output
0.367879464285714
*/
