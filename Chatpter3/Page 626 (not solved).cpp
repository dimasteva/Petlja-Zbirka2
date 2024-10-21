/*
Task: Messengers
Along a road, there are messengers. The first messenger at the beginning of the road is the first to receive the message, and the goal is for all the messengers to receive the message as soon as possible. Each messenger can shout the message to all others within a distance smaller than the given shouting range (the same for all messengers). Additionally, all messengers can move at a speed of up to one meter per second in any direction (they can change their speed and direction over time, or they can remain stationary).

Input: The input from standard input consists of the shouting range d (a real number, 1 ≤ d ≤ 10^6), followed by the number of messengers n (an integer, 1 ≤ n ≤ 10^5), and then the position of each messenger g_i (a real number, 0 ≤ g_i ≤ 10^9, which represents the distance from the beginning of the road).

Output: The output to standard output should be the minimum time elapsed from the moment the first messenger receives the message until the moment all messengers receive the message, as a real number rounded to three decimal places (the deviation from the exact value must be no more than 10^−3).

Example 1
Input
3.000
2
0.000
6.000

Output
1.500

Example 2
Input
2.000
4
0.000
4.000
4.000
8.000

Output
1.000
*/
