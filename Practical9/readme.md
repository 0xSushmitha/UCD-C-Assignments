## Practical9

This practical is mainly on using #include to include .h files. For this makefile is not needed. But is compiled along with main.c itself.
This practical also emphasises on text file reading and conculding whether the read matrix is magic or not.

1. magic_square.h - Contains function to find whether a matrix is magic or not. We will include this in out main.c and invoke in main function. 
2. magic_square1.txt - Input of a 3*3 magic matrix to verify the code.
3. not_magic_square.txt - Input of a 3*3 non magic matrix to verify the code.
4. main.c - Contains code to initialise matrix ,read matrix from file and invoke function from magic_square.h file. Then with the result from the function, we display is the matrix is magic or not.

 ### Command to compile and run the code
    1. gcc -o magic main.c
    2. ./magic