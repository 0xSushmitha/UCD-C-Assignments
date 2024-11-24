#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int factorial(int m){
    int product=1;
    for(int j=1;j<=m;j++){
        product*=j;
    }
    return product;
}

double estimate(int k,int x){
    double sum;
    sum=1;
    double *e;
     e=(double *) malloc((k) * sizeof(double)); //Dynamically allocating space for pointers
    sum=1;//Initializing the first value of the series 
    for(int i=0;i<k;i++){
     e[i]=pow(x,i+1)/factorial(i+1); // Calculate using the formula.
     sum+=e[i];
    }
    free(e);
  return sum;  
}
int main(){
int j;
int x=1;
double esti_sum=0;
printf("\nThe real value of e^%d is: %.10lf",x,exp(x));
for(j=1;j<=15;j++){
esti_sum=estimate(j,x); // Passing order and x value
printf("\nThe estimated value for order %d is: %.10lf",j,esti_sum);
}

/*Insights from the practical: 

To the statement in the question..
The higher the order of the polynomial goes, after 13th order, 
the estimated value is higher than the original value.
The exact value of e^1 lies between the 12th and 13th order.
The value of f(x) converges to e^1 till 12 th order then diverges from the point.
*/ 
return 0;
}
