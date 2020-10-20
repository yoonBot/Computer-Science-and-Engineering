#include <stdio.h>
#include <stdlib.h>

void swap(char *x,char *y);
void permutation(char *list,int i,int n);

int main(){

	char s[]="ABCDEFGHIJ";
	permutation(s,0,3);
	
	
	system("pause");
}

void swap(char *x,char *y){
	char c;
	c = *x;
	*x = *y;
	*y = c;
}

void permutation(char *list,int i,int n){
	/* generate all the permutations fo list[i] to list[n] */

	int j,temp,k;
	if(i==n){
		for(j=0;j<=n;j++)
			printf("%c",list[j]);
		printf("\n");
	}else{
		/* list[i] to list[n] has more than one permutation, generate these
		   recursively */

		for(j=i;j<=n;j++){
			swap(&list[i],&list[j]);
			permutation(list,i+1,n);
			swap(&list[i],&list[j]);
		}
	}
}

