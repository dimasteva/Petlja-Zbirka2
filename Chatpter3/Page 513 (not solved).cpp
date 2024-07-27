/*
Task: Skyline
The silhouette of a building is defined by three positive integers: the left coordinate, height, and right coordinate. The skyline consists of alternating horizontal and vertical segments, and it can be represented as a sequence of vertices. As you follow the skyline from vertex to vertex, you move first horizontally to the right, and then vertically up or down.
Write a program that reads the silhouettes of buildings and outputs the skyline.
Input: The first line of the standard input contains the number of buildings \( n \) (1 ≤ \( n \) ≤ 50,000), followed by \( n \) lines, each containing three positive integers separated by spaces, describing a building. These numbers do not exceed one million.
Output: Print the coordinates of the vertices that define the skyline to the standard output. The vertices should be printed from left to right, each vertex on a new line, and the coordinates of each vertex should be separated by a space.
Example 1
Input
3
2 10 8
4 7 6
5 14 9
Output
2 10
5 14
9 0
Example 2
Input
2
2 10 8
11 3 14
Output
2 10
8 0
11 3
14 0
*/
