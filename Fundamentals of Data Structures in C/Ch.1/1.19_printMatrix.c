#include <stdio.h> 
#define N 4 
  
// This function adds A[][] and B[][], and stores 
// the result in C[][] 
void printMatrix(int A[][N]) 
{ 
    int i, j; 
    for (i = 0; i < N; i++){ 
        for (j = 0; j < N; j++){ 
            printf("%d ", A[i][j]);
		}
		printf("\n");
	}
} 
  
int main() 
{ 
    int i, j; 

	int A[N][N] = { {1, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3}, 
                    {4, 4, 4, 4}}; 
  
    int B[N][N] = { {5, 5, 5, 5}, 
                    {6, 6, 6, 6}, 
                    {7, 7, 7, 7}, 
                    {8, 8, 8, 8}}; 
    
	printf("Before\n");
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i = 0; i < N; i++){
		for (j = 0; j < N; j++){
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}
  
    printf("Copied matrixes are: \n"); 
    printMatrix(A);
	printf("\n");
	printMatrix(B);
  
    return 0; 
} 
