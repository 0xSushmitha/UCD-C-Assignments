#include <stdio.h>
#include <math.h>
#include <stdlib.h>
double artanh1(double x,double delta){
    if (fabs(x) >= 1) {
        printf("The value of x should lie between [-0.9,0.9]");
        exit(1);
    }
     double result = 0.0;
    double term = x; // First term when n=0
    int n = 0;
    while(term>delta){
        result += term;
        n++;
        term = (pow(x, 2 * n + 1)) / (2 * n + 1);
    }
    return result;
}

double artanh2(double x,double delta){
    if (fabs(x) >= 1) {
        printf("The value of x should lie between [-0.9,0.9]");
        exit(1);
    }
    return 0.5 * (log(1 + x) - log(1 - x));
}
int main(){
    double delta;
    printf("Enter a positive value (delta): ");
    scanf("%lf", &delta);
    for (double x = -0.9; x <= 0.9; x += 0.01) {
        double approx1 = artanh1(x, delta);
        double approx2 = artanh2(x);
    
    printf("x: %.2f \nartanh1: %.10f\n artanh2: %.10f\n Difference: %.10f\n", 
               x, approx1, approx2, fabs(approx1 - approx2));
    }

return 0;
}