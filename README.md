# UCD-C-Assignments

**This repository will contain the practicals done with C programming in Ichec. Contents for each practical will be listed here and the command to run the same using gcc will be given here.**

## Practical 1

1. printing.C - Prints integer and floating numbers onto the screen

### Command to compile and run the code
    1. gcc -o printing printing.c
    2. ./printing

2. scanning.C - We obtain two numbers from the user and determine whether if its even or odd.

### Command to compile and run the code
    1. gcc -o scanning scanning.c
    2. ./scanning


## Practical 2

1. conversion.c - We convert an interger decimal to a binary and do cast conversion from int to float and print the three numbers.

### Command to compile and run the code
    1. gcc -o conversion conversion.c
    2. ./conversion

2. sum.c - We find the sum of the given expression using for loop and find the same from reverse and display the difference.

### Command to compile and run the code
    1. gcc -o sum sum.c
    2. ./sum


## Practical 3

1. areaCurve.C - We have used the trapezodial rule to calculate area under the curve.

### Command to compile and run the code
    1. gcc -o areaCurve areaCurve.c
    2. ./areaCurve


## Practical4

1. arrayFunctionPrac4.c - Contains the same area under the curve program but have used fuunctions to calculate the given degree to radians and to calculate the area.

### Command to compile and run the code
    1. gcc -o arrayFunctionPrac4 arrayFunctionPrac4.c
    2. ./arrayFunctionPrac4


## Practical5

1. fibonacci_prac5.c - Its a program to compute the fibonacci series till the given number number n.

### Command to compile and run the code
    1. gcc -o fibonacci_prac5 fibonacci_prac5.c
    2. ./fibonacci_prac5

2. maclaurinSeriesPrac5.c - Program to compute Maclaurin Series for a number

### Command to compile and run the code
    1. gcc -o maclaurinSeriesPrac5 maclaurinSeriesPrac5.c
    2. ./maclaurinSeriesPrac5


## Practical6

1. main.c - Main program to get input of two matrices and display its product
2. matmul.c - Contains the function to calculate matric multiplication
3. makefile - contains the makefile to compile the two files and get an executable.

### Command to compile and run the code
    1. make (executable will be created in the name of mmc)
    2. ./mmc


## Practical7

1. exponentialP7.c - Contains code to calculate exponential using a function f(x) and find which order provides an accurate value.

### Command to compile and run the code
    1. gcc -o exponentialP7 exponentialP7.c
    2. ./exponentialP7

2. pointerManipulationP7.c - Code to practice different kind of usage of pointers

### Command to compile and run the code
    1. gcc -o pointerManipulationP7 pointerManipulationP7.c
    2. ./pointerManipulationP7


## Practical8

1. recurssionPrac8.c - Contains code to find out gcd for two numbers using iterative function as well as recussive function.

 ### Command to compile and run the code
    1. gcc -o recurssionPrac8 recurssionPrac8.c
    2. ./recurssionPrac8


## Practical9

1. magic_square.h - Contains function to find whether a matrix is magic or not. We will include this in out main.c and invoke in main function. 
2. magic_square1.txt - Input of a 3*3 magic matrix to verify the code.
3. not_magic_square.txt - Input of a 3*3 non magic matrix to verify the code.
4. main.c - Contains code to initialise matrix ,read matrix from file and invoke function from magic_square.h file. Then with the result from the function, we display is the matrix is magic or not.

 ### Command to compile and run the code
    1. gcc -o magic main.c
    2. ./magic
