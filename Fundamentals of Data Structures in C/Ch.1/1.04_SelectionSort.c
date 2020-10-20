#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX_SIZE 101
#define SWAP(x,y,t) ((t) = (x), (x) = (y), (y) = (t))//swap using MACRO
void sort(int list[],int n);

int main(){

	int i,n;
	int list[MAX_SIZE];
	printf("Enter the number of numbers to generate: ");
	scanf("%d",&n);
	if(n < 1|| n > MAX_SIZE){//prevent input error
		fprintf(stderr,"Improper value of n\n");
		system("pause");
		exit(EXIT_FAILURE);
	}
	for(i = 0;i < n;i++){//generate random number and print them on screen
		list[i] = rand() % 100;
		printf("%d ",list[i]);
	}
	sort(list,n);//perform selection sort
	printf("\nSorted array:\n");

	for(i = 0;i < n;i++){//print the result sequence on screen
		printf("%d ",list[i]);
	}
	printf("\n");

	system("pause");
}

void sort(int list[],int n){
	int i,j,min,temp;
	for(i = 0;i < n-1;i++){
		min = i;//for the starting comparison
		for(j = i+1;j < n;j++)
			if(list[j] < list[min])//to find the minimum number
				min = j;
		SWAP(list[i],list[min],temp);//swap the minimum to the sequence
	}
}

