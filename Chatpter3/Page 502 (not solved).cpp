/*
Task: Binary Images
A binary image is an image that contains only two colors, for example, black and white.
The content of a binary image of square shape (where the number of rows is equal to the number of columns) can be represented using a string in the following way:
- If the entire image is white, it is represented by the string "1".
- If the entire image is black, it is represented by the string "0".
- If the image has both black and white pixels, the string representing it starts with an open square bracket [, followed by descriptions of the upper right, upper left, lower left, and lower right quarters (concatenated, i.e., without any symbols between the descriptions of parts), and at the end of the string, there is a closing square bracket ].
For example, the string "[1110]" describes an image of size 2 × 2, where the bottom right corner has a black pixel, while the other three pixels are white. Similarly, the string "[00[0010]0]" describes an image of size 4 × 4, where the bottom left corner has a white pixel, while the other 15 pixels are black.
Operations of union and intersection are defined over pixels as follows:
The union of two pixels is a black pixel if and only if both of those pixels are black, otherwise, the union is a white pixel.
The intersection of two pixels is a white pixel if and only if both of those pixels are white, otherwise, the intersection is a black pixel.
The union of two square images is an image whose pixels are unions of corresponding pixels in the images over which the union is calculated. Similarly, the intersection of two images is defined.
Write a program that reads descriptions of two binary square images and prints descriptions of their union and intersection.
Input: The standard input contains two strings, each on a separate line. The strings represent descriptions of two binary square images. The lengths of the strings do not exceed 10,000.
Output: Print the description of the union of the two given images on the first line of the standard output, and the description of their intersection on the second line.
Example
Input
[[0010]1[0110]0]
[1[0001][1000][1100]]
Output
[11[1110][1100]]
[[0010][0001]00]
*/
