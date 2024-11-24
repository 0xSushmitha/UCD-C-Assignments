#include<stdio.h>
#include<math.h>

float tanArr[13];
float degToRad(float);
float areaCalculate(int ,float[]);

int main() {

	float a = 0.0, b_degree = 60.0; //Initialising the variables
	int  i;
	float deg;
	int N = 12;

	for (i = 0;i <= N;i++) {
		deg = i * 5;
		tanArr[i] = tan(degToRad(deg));
		printf("\ntanArr[%d] = %f ",i, tanArr[i]);
	}

	float innerArea = areaCalculate(N, tanArr);

	float area = ((degToRad(b_degree) - degToRad(a))*innerArea)/(2*N);

	printf("\nThe calculated area is: %f", area);

	printf("\n The estimated area is: %f", log(2));
	return 0;
}

float degToRad(float degree) {
	return ((M_PI * degree) / 180);
}

float areaCalculate(int N, float tanArr[]) {
	float innerArea;
	innerArea = tanArr[0] + tanArr[N];

	for (int i = 1;i < N;i++) {
	   innerArea += 2 * tanArr[i];
	}
	return innerArea;
}