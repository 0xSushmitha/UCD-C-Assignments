#include<stdio.h>

int gcd_iterative(int a,int b){
    int temp;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}

int gcd_recursive(int a,int b){
    if(b==0){
        return a;
    }
    return gcd_recursive(b,a%b);
}

int main(){
    int c,d;
    printf("\n Enter any two integers to find gcd: ");
    scanf("%d %d",&c,&d);
    printf("\nThe gcd of %d and %d using iterative method is %d",c,d,gcd_iterative(c,d));
    printf("\nThe gcd of %d and %d using recursive method is %d",c,d,gcd_recursive(c,d));
    return 0;
}
