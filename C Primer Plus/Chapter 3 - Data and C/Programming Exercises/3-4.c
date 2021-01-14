/* C Primer Plus Ch.3 - Problem 4 */

#include <stdio.h>

int main(void){

    float input;

    printf("Enter a floating-point number: ");
    scanf("%f", &input);

    printf("The input is %f or %e.\n", input, input);

    return 0;
}

