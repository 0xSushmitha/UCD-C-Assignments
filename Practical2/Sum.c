#include <stdio.h>


int main() {
/* Declare variables */
   int i;
   float sum1, sum2, diff;
   

/* First sum */
   sum1 = 0.0;
   for (i=1; i<=1000; i++) { /* Adding from start ie., 1+1/2+...+1/1000*/
       sum1 += (float)1 / i;
   }


/* Second sum */
   sum2 = 0.0;
   for (i=1000; i>0; i--) {/* Adding from reverse ie., 1/1000+1/999+...+1*/
       sum2 += (float)1 / i;
   }

   printf(" Sum1=%f\n",sum1);
   printf(" Sum2=%f\n",sum2);

/* Find the difference */
   diff = sum2 - sum2; /* Finding the difference which has to be 0*/

   printf(" Difference between the two is %f\n",diff);
   return 0;

}
