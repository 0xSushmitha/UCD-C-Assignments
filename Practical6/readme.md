## Practical6

Here, the main learings from this practical is how to combine two c files and compile it into a single executable .
We create two main files, one a main function to intialise two matrices A and B and declare an empty matrix C and another c file to calculate product of two matrices and return the product.
We write a makefile to compile the two c files to create one executable.

1. main.c - Main program to get input of two matrices and display its product
2. matmul.c - Contains the function to calculate matric multiplication
3. makefile - contains the makefile to compile the two files and get an executable.

### Command to compile and run the code
    1. make (executable will be created in the name of mmc)
    2. ./mmc
