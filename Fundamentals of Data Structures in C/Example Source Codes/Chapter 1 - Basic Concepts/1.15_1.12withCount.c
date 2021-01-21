#include <stdio.h>
#include <stdlib.h>

float rsum(float list[], int n);

int main(){

	float n[30];
	int size;
	float result;

	for (size = 0; size < 30; size++){
		n[size] = size;
		printf("%.f ", n[size]);
	}

	printf("\n");

	printf("Sum: %.2f\n", result = rsum(n, size));
}

float rium(float list[], int n){
	
	float count = 0;		/* for if conditional */
	if (n){
		count++;	/* for return and rsum invocation */
		return rsum(list, n - 1) + list[n - 1];
	}
	count++;
	return list[0];

}
