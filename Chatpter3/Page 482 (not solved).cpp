/*
Task: Skyline of the City
From the ship, buildings on the coast of a metropolis can be seen. Along the coast, a coordinate axis is set up, and for each building, the position of the left end, height, and position of the right end are known. Write a program that calculates the skyline of the city.
The skyline is a piecewise constant function and is determined by intervals of constancy (−∞, x0), [x0, x1), [x1, x2), ..., [xn−1, +∞), determined by the points of division x0 < x1 < . . . < xn−1 and the values 0, h0, ..., hn−2 and h of the function on each of the intervals.
For simplicity, we will represent such functions using n ordered pairs (x0, h0), (x1, h1), ..., (xn−2, hn−2), and (xn−1, 0). Therefore, our algorithm takes an array of ordered triples describing individual buildings as input, and returns an array of ordered pairs describing the skyline.

Input: The standard input consists of:
- An integer n, the number of buildings.
- Following are n lines, each containing three integers separated by a single space: the left end of the building, the right end of the building, and the height of the building.

Output: Print to standard output the skyline described by an array of height changes.

Example
Input
4
1 4 4
4 5 5
4 7 6
0 9 2
Output
0 2
1 4
4 6
7 2
9 0
*/
