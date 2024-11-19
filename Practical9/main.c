#include <stdio.h>
#include <stdlib.h>
#define MAX_FILE_NAME 100
#include "magic_square.h"

int getlines(char filename[MAX_FILE_NAME]);

int main(){  

    //define our file variable
    FILE *f;  
    char filename[MAX_FILE_NAME];
    printf("Enter file name(with extension): ");
    scanf("%s", filename); //Inputting file name with extension
    
    // ##! n function which gets the number of lines
    int n = getlines(filename);

    // TODO: Open the file 
    f= fopen(filename,"r");

    int i;
    // TODO: Allocating a matrix for storing the magic square
    // as an array of pointers, where each pointer is a row 
   int **magicSquare = (int **)malloc(n * sizeof(int *)); //Allocating a dynamic array
    for (int i = 0; i < n; i++) {
        magicSquare[i] = (int *)malloc(n * sizeof(int)); //Array of pointers for row
        if (magicSquare[i] == NULL) {
            printf("Memory allocation failed for row %d!\n", i);
            fclose(f);  // Close the file if memory allocation fails
            return 1;
        }
    }

    // TODO:inputting integer data into the matrix;

printf("Reading magic square from file:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            fscanf(f, "%d", &magicSquare[i][j]); //Reading file elements into a matrix
        }
    }
    
     if (isMagicSquare(magicSquare, n)) { //Invoking  the function from h file
        printf("The matrix is a magic square.\n");
    } else {
        printf("The matrix is not a magic square.\n");
    }


    // TODO: Freeing each row separately before freeing the array of pointers
    for (int i = 0; i < n; i++) { 
        free(magicSquare[i]);
    }

    free(magicSquare); //Freeing the matrix 

    // TODO:Close the file
    fclose(f);

    return 0;
}  

//##!

int getlines(char filename[MAX_FILE_NAME]) {
    FILE *fp;
    fp = fopen(filename, "r");
    
    int ch_read;
    int count = 0;

    while( (ch_read = fgetc(fp)) != EOF)  //running the loop until end of file is reached. 
    {
        if (ch_read == '\n'){ // counting for each newline
            count++;
        }
    }

    printf("No. of lines: %d\n", count);
    fclose(fp); 
    return count;
}
