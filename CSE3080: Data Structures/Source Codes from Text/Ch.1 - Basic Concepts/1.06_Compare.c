#include <stdio.h>
#include <stdlib.h>

int compare(int *x,int *y);//declare function with pass by reference

int main(){

	int a = 1,b = 10;
	printf("a = %d,b = %d\n",a,b);
	int j = compare(&a,&b);		//compare a and b
	if (j == 1) printf("%d is less than %d\n", a, b);
	else if (j == 0) printf("Equal\n");
	else printf("%d is greater than %d\n", a, b);

	system("pause");
}

int compare(int *x, int *y){ /* compare x and y, return -1 for less than, 0 for equal, 1 for greater */
	
	if (x < y) return -1;
	else if (x == y) return 0;
	else return 1;

}
