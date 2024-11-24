#include<stdio.h>
#include<math.h>

int main() {
	// We initialize the variables for the formula
	double a = 0.0;
	double b = M_PI / 3;

	int N = 12; //The intervals given

	// Then we calculate the first and last values in the formula and assign it to variable sum

	double sum = tan(a) + tan(b);

	// We spilt the interval 0 to 60 degrees into 11 equal parts and each part is this number
	double eachInterval = (b - a) / (N - 1); 

	for (int i = 1; i < N - 1; i++) {
		double xi = a + i * eachInterval;  // Calculate the interval
		sum += 2 * tan(xi);  // Add 2 * tan(xi) to sum
	}

	//Now that we have received the sum, we need to multiply with the outer value

	double areaUnderCurve = ((b - a) * sum )/ (2 * N);

	//We print the area
	printf("The area under the curve is found to be : %lf", areaUnderCurve);

	//Now we have to compare it with log2
	double log2_val = log(2);
	printf("\nThe equivalent value using log(2) is : %lf", log2_val);
	
	//Lets compare it both of the values

	printf("\nThe difference between both is : %lf", fabs(areaUnderCurve - log2_val));

	return 0;
}
