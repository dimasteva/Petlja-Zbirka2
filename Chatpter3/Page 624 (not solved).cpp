/*
Task: Window Display with Two Rows of Books  
A salesperson wants to arrange the display window of her bookstore. The books she has are arranged in two rows of n books each, and they must remain that way (it is not possible to move books from one row to another). For each book, the color and height are known. In both the first and second row, books must be arranged in a predefined order of colors (so that the color codes are in non-decreasing order). Books of the same color can be arranged in any order. Also, every book in the front row must be shorter than the book behind it (so that both books can be visible). Write a program that helps determine the order of books or states that it is not possible to arrange the books in the required order.  
Input: The first line of the standard input contains a natural number n (1 ≤ n ≤ 5 · 10^5). The next four lines contain n natural numbers each (all between 1 and 10^9, separated by spaces). The first row contains the color codes of the books in the back row, the next row contains the heights of the books in the back row (according to the current arrangement in the back row). The next row contains the color codes of the books in the front row, and the next contains the heights of the books in the front row (according to the current arrangement in the front row).  
Output: On the standard output, print two lines with numbers from 1 to n separated by spaces, representing the permutation of the books in the back row and the permutation of the books in the front row that determines the arrangement satisfying the given conditions (at position i is the number of the book in the initial arrangement that should go to that position). If it is not possible to arrange the books in the required order, print -.  
Example 1  
Input  
4  
3 2 1 2  
2 3 4 3  
2 1 2 1  
2 2 1 3  
Output  
3 2 4 1  
4 2 1 3  
Explanation  
The arrangement after sorting is:  
colors top: 1 2 2 3  
heights top: 4 3 3 2  
colors bottom: 1 1 2 2  
heights bottom: 3 2 2 1  
Example 2  
Input  
2  
1 2  
2 3  
2 8  
2 1  
Output  
-
*/
