#include<stdio.h>
/* We follow the pseudo code given in the question to calculate the gcd
For iterative function, I have used the Euclidean algorithm given in the question.
For recusive function, I have used the mathematical function given gor calculating gcd*/
int gcd_iterative(int a,int b){
    int temp;
    while(b!=0){  // We need to calculate gcd till the b is 0
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int gcd_recursive(int a,int b){
    if(b==0){
        return a; // If b=0 then gcd is a so returning "a"
    }
    return gcd_recursive(b,a%b); //Else calculating gcd for b and mod(a,b)
}

int main(){
    int c,d;
    printf("\n Enter any two integers to find gcd: ");
    scanf("%d %d",&c,&d);
    printf("\nThe gcd of %d and %d using iterative method is %d",c,d,gcd_iterative(c,d));
    printf("\nThe gcd of %d and %d using recursive method is %d",c,d,gcd_recursive(c,d));
    return 0;
}
