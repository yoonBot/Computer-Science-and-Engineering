#include <stdio.h>
#define MAX_SIZE 100
float sum(float list[], int n);
float input[MAX_SIZE], answer;

int main(){

	int i;
	
	for (i = 0; i < MAX_SIZE; i++) input[i] = i;
	for (i = 0; i < MAX_SIZE; i++) printf("%.0f ", input[i]);	
	printf("\n");
	answer = sum(input, MAX_SIZE);
	printf("The sum is: %.0f\n", answer);
}

float sum(float list[], int n){

	int i;
	float tempsum = 0;

	for (i = 0; i < n; i++) tempsum += list[i];

	return tempsum;
}

		
