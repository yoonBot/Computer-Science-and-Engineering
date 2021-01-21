#include <stdio.h>
#include <stdlib.h>

float sum(float list[], int n);

int main(){

	float n[30];
	int size;
	float result;

	for (size = 0; size < 30; size++){
		n[size] = size;
		printf("%.f ", n[size]);
	}

	printf("\n");

	printf("Sum: %.2f\n", result = sum(n, size));
}

float sum(float list[], int n){

	float tempsum = 0;
	int i;
	for (i = 0; i < n; i++){
		tempsum += list[i];
	}
	return tempsum;
}
