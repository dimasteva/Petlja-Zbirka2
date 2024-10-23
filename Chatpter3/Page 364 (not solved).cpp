/*
Task: Expression Values
Write a program that calculates and displays the values of given arithmetic expressions. Each expression is correctly defined, consisting of natural numbers and the operations +, -, *, and / (integer division). Using the Extended Backus-Naur Form (EBNF), we can describe the syntax of the expression as follows:
<expression> ::= <term> {<operation1> <term>}
<term> ::= <factor> {<operation2> <factor>}
<factor> ::= <number> | '(' <expression> ')'
<number> ::= <digit> {<digit>}
<digit> ::= '0' | '1' | ... | '9'
<operation1> ::= '+' | '-'
<operation2> ::= '*' | '/'
Input: Each line of standard input contains a valid expression (the expression does not contain spaces).
Output: Each line of standard output contains, in order, the values of the expressions given in standard input, each value on a separate line. If the expression is undefined due to division by 0, display the message "deljenje nulom"
Example
Input
1+2*3-4
2*3-5*(100-8*12)
123-43*(12-3*5)/(17-35/2)
12/5+2
Output
3
-14
deljenje nulom
4
*/
