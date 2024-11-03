#include<stdio.h>
#include<stdlib.h>
void fibonacci_next(int *fn_1,int *fn_2){
    int fn = *fn_1 + *fn_2; // Calculate the next term
    *fn_2 = *fn_1;          // Update Fn-2 to Fn-1
    *fn_1 = fn;
}

int main(){
int n;
printf("Enter the value of n: ");
scanf("%d", &n);
if (n < 0) {
        printf("You have entered a non negative number.\n");
        exit(1);
    }
printf("The Fibonacci series is:\n");
int Fn_2 = 0, Fn_1 = 1;

if (n >= 1) {
    printf("%d ", Fn_2);
}  
    // Print the second term in the sequence
 if (n >= 2) {
    printf("%d ", Fn_1);
}
for (int i = 3; i <= n; i++) {
    fibonacci_next(&Fn_1, &Fn_2);
    printf("%d ", Fn_1); // Print the current term
}

printf("\n");
return 0;
}