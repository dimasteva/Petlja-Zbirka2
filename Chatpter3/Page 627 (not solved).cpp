/*
Task: Bridge
A group of people is standing on one side of a river during the night. They have only one lantern. There is a bridge over the river, but no more than two people can cross it at the same time, and only if they carry the lantern. For each person, the time it takes them to cross the bridge is known. If two people cross the bridge together, they move at the speed of the slower person. Write a program that determines the minimum time required for all people in the group to cross to the other side of the river.

Input: The input from standard input consists of the number of people n (1 ≤ n ≤ 100), followed by n lines containing the times it takes for those n people to cross the bridge.

Output: The output to standard output should be the minimum time required for everyone to cross to the other side.

Example
Input
4
1
2
5
10

Output
17

Explanation
First, person 1 and person 2 cross, and person 1 returns (this takes max(1, 2) + 1 = 3 minutes). Then, person 3 and person 4 cross, and person 2 returns (this takes max(5, 10) + 2 = 12 minutes). Finally, person 1 and person 2 cross together (this takes max(1, 2) = 2 minutes). Thus, the total time is 3 + 12 + 2 = 17 minutes.
*/
