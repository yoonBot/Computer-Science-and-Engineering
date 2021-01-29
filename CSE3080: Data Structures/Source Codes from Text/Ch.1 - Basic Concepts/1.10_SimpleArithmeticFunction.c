#include <stdio.h>
#include <stdlib.h>

float abc(float a, float b, float c);

int main(){
	
	float a, b, c, result;
	printf("Enter three numbers: ");
	scanf("%f %f %f", &a, &b, &c);
	printf("result: %f\n", result = abc(a, b, c));

	return 0;
}

float abc(float a, float b, float c){

	return a + b + b * c + (a + b -c) / (a + b) + 4.00;

}

