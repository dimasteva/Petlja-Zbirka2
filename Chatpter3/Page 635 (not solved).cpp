/*
Task: Minesweeper opening
Write a program that displays the content of a field in the Minesweeper game (if you are unfamiliar with the game, look it up on the internet) after opening a single field.
Input: The standard input reads a 10 by 10 matrix where bombs are represented by ones, and free fields by zeros. In the next line, the coordinates of the opened field (row number and column number between 0 and 9, separated by a space) are read.
Output: The program should print the state that the user sees after opening the field. If there is a bomb at the opened field, print boom. Otherwise, display a 10 by 10 matrix where unopened fields are represented by x, empty fields (fields that are opened and have no bombs around them) are represented by ., and opened fields that have bombs nearby are represented by the number of bombs in the surrounding fields.
Example
Input
0100010100
0100111000
1000000000
1100000110
1000000000
1100000100
0111000011
1100001110
0011100000
1110000001
5 5
Output
xxxxxxxxxx
xxxxxxxxxx
xx21233xxx
xx1...1xxx
xx2...2xxx
xx421.1xxx
xxxx113xxx
xxxxxxxxxx
xxxxxxxxxx
xxxxxxxxxx
*/
