#include <stdio.h>
#include <stdlib.h>

int main(){

	int i, *pi;
	float f, *pf;
	pi = (int*) malloc(sizeof(int));	//dynamically allocation with size int
	pf = (float*) malloc(sizeof(float));	//dynamically allocation with size float
	*pi = 1024;
	*pf = 3.14;
	printf("an integer = %d, a float = %f\n", *pi, *pf);
	free(pi);
	free(pf);

}

