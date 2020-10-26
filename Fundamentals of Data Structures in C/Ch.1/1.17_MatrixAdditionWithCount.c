#include <stdio.h> 
#define N 4 
  
// This function adds A[][] and B[][], and stores 
// the result in C[][] 
void add(int A[][N], int B[][N], int C[][N]) 
{ 
    int i, j;
	int count = 0;
    for (i = 0; i < N; i++){
		count++;		/* for i for loop */
        for (j = 0; j < N; j++){
			count++;	/* for j for loop */
            C[i][j] = A[i][j] + B[i][j]; 
			count++;	/* for assignment statement */
		}
		count++;		/* last time of j for loop */
	}
	count++;			/* last time of i for loop */
} 
  
int main() 
{ 
    int i, j; 

	int A[N][N] = { {1, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3}, 
                    {4, 4, 4, 4}}; 
  
    int B[N][N] = { {1, 1, 1, 1}, 
                    {2, 2, 2, 2}, 
                    {3, 3, 3, 3}, 
                    {4, 4, 4, 4}}; 
    
	printf("Before Addition : \n");
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

    int C[N][N]; // To store result 
    
    add(A, B, C); 
  
    printf("Result matrix is \n"); 
    for (i = 0; i < N; i++) 
    { 
        for (j = 0; j < N; j++) 
           printf("%d ", C[i][j]); 
        printf("\n"); 
    } 
  
    return 0; 
} 
