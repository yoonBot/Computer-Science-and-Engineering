/* C Primer Plus Ch.2 - Problem 4 */

#include <stdio.h>

void once();
void final();

int main(void){

    once();
    once();
    final();

    return 0;
}

void once(){

    printf("For he's a jolly good fellow!\n");
    
}

void final(){

    printf("Which nobody can deny!\n");

}

