/*
Task: Third Traversal
There are three common orders for traversing the nodes of a binary tree:
- Preorder (KLD): root first, then left subtree, then right subtree
- Inorder (LKD): left subtree first, then root, then right subtree
- Postorder (LDK): left subtree first, then right subtree, then root

In each traversal, the order for traversing subtrees is inherited, meaning the same rule is applied as for the whole tree. Each node in the tree is labeled with a unique lowercase letter of the English alphabet. This way, each traversal yields a unique string.

Write a program that reads the strings corresponding to the Preorder (KLD) and Inorder (LKD) traversals and outputs the string corresponding to the Postorder (LDK) traversal.

Input: Two strings are read from standard input, each on a separate line. The strings correspond to the KLD and LKD traversals and consist of unique lowercase English letters (each string has at most 26 letters).

Output: Print the string corresponding to the LDK traversal to the standard output.

Example
Input
abecfg
beafcg
Output
ebfgca
*/
