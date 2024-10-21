/*
Task: Path Compression
In the Linux system, a path consists of directory names separated by the / character and can end with the name of a directory or a file. We'll assume that directory and file names consist of lowercase English letters, digits, underscores, and the character .. Special directories in the path are . which denotes the current directory, and .. which denotes the parent directory (the root directory's parent is considered to be the root itself). Path compression involves removing these special directories from the path.

Input: A valid path starting with the / character is read from standard input.

Output: The compressed path is printed to standard output.

Example 1
Input
/abc/./def/../jkl/../mnp/doc.txt

Output
/abc/mnp/doc.txt

Example 2
Input
/abc/../../xyz.jpeg

Output
/xyz.jpeg
*/
