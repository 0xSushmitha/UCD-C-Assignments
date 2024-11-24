#include<stdio.h>
#include<stdlib.h>

int *allocatearray(int n){
    int *allocation;
    allocation= (int *) malloc(n * sizeof (int) ); //Dynamically allocate memory
    return allocation;
}
void fillwithones(int *b,int size){
    for(int i=0;i<size;i++){
        b[i]=1;
    }
}
//Answer: We need to pass a pointer array.

void printarray(int *c, int k){
    for(int i=0;i<k;i++){
        printf("%d  ",c[i]);
    }
}
void freeMemory(int *d){
    free(d); //Free the memory after usage
}

int main(){
    int s1 = 5;
    int s2 = 10;

     int *a1 = allocatearray(s1);
    if (a1 == NULL) {
        printf("Memory allocation failed for array 1\n");
        exit(1);  // So Exit
    }

    fillwithones(a1,s1);

    printf("\n Array 1: ");
    printarray(a1,s1);

     int *a2 = allocatearray(s2);
    if (a2 == NULL) {
        printf("Memory allocation failed for array 2\n");
        exit(1);  // So Exit 
    }

    fillwithones(a2,s2);
    printf("\n Array 2: ");
    printarray(a2,s2);
    freeMemory(a1);
    freeMemory(a2);

return 0;
}