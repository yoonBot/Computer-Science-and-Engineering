// fathm_ft.c -- converts 2 fathoms to feet (comment identifying filename and purpose of the program

#include <stdio.h>

int main(void){
	int feet, fathoms; /* declaration of two variables in a
						  single declaration statement by a comma */

	fathoms = 2;
	feet = 6 * fathoms;
	printf("There are %d feet in %d fathoms!\n", feet, fathoms); /* printing multiple values */
	printf("Yes, I said %d feet!\n", 6 * fathoms); /* replaces 6 * fathoms value in place of %d */

	return 0;
}


