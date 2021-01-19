/* C Primer Plus Ch.4 - Problem 4
 * Reproduced by yoonBot
 */

#include <stdio.h>
#define FEET 12
#define BUFFER 256

int main(void){

    float height;
    char name[BUFFER];

    printf("Please enter your height in inches: ");
    scanf("%f", &height);
    printf("Please enter your name: ");
    scanf("%s", &name);
    
    height = height/FEET;

    printf("%s, you are %.3f feet tall.\n", name, height);

    return 0;
}

