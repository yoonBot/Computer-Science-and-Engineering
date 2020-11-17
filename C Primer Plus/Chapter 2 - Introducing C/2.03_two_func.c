/* two_func.c -- a program using two functions in one file */

#include <stdio.h>

void butler(void);	  /* ISO / ANSI C function prototyping, no return value */

int main(void){
	printf("I will summon the butler function.\n");
	butler();		  /* Invocation of butler -- moves on to next statement when finished */
	printf("Yes. Bring me some tea and writeable CD-ROMS.\n");

	return 0;
}

void butler(void){	 /* start of function defintion (void - has no args) */
	printf("You rang, sir?\n");
}


